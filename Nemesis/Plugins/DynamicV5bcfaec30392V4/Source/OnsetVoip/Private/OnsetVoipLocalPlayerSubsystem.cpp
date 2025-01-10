// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#include "OnsetVoipLocalPlayerSubsystem.h"
#include "Kismet/KismetSystemLibrary.h"
#include "OnsetVoip.h"
#include "OnsetVoipDataChannel.h"
#include "OnsetVoipSettings.h"
#include "GameFramework/PlayerState.h"
#include "Kismet/GameplayStatics.h" // For CreateSound2D

#if ONSETVOIP_ENABLE_SIMD
#include "Math/UnrealMathSSE.h"
#endif

#if !UE_SERVER

#include "AudioCaptureBlueprintLibrary2.h"
#include "Recording/OnsetVoipRecorderLocal.h"

FAutoConsoleCommandWithWorldAndArgs _CmdVoiceDevice(TEXT("voice.device"),
	TEXT("Prints available microphone input devices\n")
	TEXT("Optional: <device>: Part of id or name. If specified will attempt to change to that device name."),
	FConsoleCommandWithWorldAndArgsDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World)
{
	if (Args.Num() > 0)
	{
		const FString DesiredDevice = Args[0];
		TWeakObjectPtr<UWorld> WeakWorld = World;
		UAudioCaptureBlueprintLibrary2::GetAvailableAudioInputDevicesFixedCpp(World,
			FOnAudioInputDevicesObtained2Cpp::CreateLambda([WeakWorld, DesiredDevice](const TArray<FAudioInputDeviceInfo2>& Devices)
			{
				if (WeakWorld.IsValid())
				{
					for (const auto& Device : Devices)
					{
						if (Device.DeviceName.Contains(DesiredDevice) || Device.DeviceId.Contains(DesiredDevice))
						{
							if (const ULocalPlayer* LocalPlayer = WeakWorld->GetFirstLocalPlayerFromController())
							{
								if (UOnsetVoipLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UOnsetVoipLocalPlayerSubsystem>())
								{
									if (Subsystem->ChangeVoiceCaptureDevice(Device.DeviceName))
									{
										OnsetVoip::ConsoleLog(WeakWorld.Get(), FString::Printf(TEXT("Changed input device to [%s] %s"), *Device.DeviceId, *Device.DeviceName));
									}
									else
									{
										OnsetVoip::ConsoleLog(WeakWorld.Get(), FString::Printf(TEXT("Failed to change input device to [%s] %s"), *Device.DeviceId, *Device.DeviceName));
									}
									return;
								}
							}
						}
					}

					OnsetVoip::ConsoleLog(WeakWorld.Get(), FString::Printf(TEXT("Device \"%s\" not found or no active voice capture running."), *DesiredDevice));
				}
			})
		);
	}
	else
	{
		TWeakObjectPtr<UWorld> WeakWorld = World;
		UAudioCaptureBlueprintLibrary2::GetAvailableAudioInputDevicesFixedCpp(World,
			FOnAudioInputDevicesObtained2Cpp::CreateLambda([WeakWorld](const TArray<FAudioInputDeviceInfo2>& Devices)
			{
				if (WeakWorld.IsValid())
				{
					if (Devices.Num() > 0)
					{
						OnsetVoip::ConsoleLog(WeakWorld.Get(), FString::Printf(TEXT("There are %i input devices: "), Devices.Num()));

						for (const auto& Device : Devices)
						{
							OnsetVoip::ConsoleLog(WeakWorld.Get(), FString::Printf(TEXT("[%s] %s (InputChannels: %i, PreferredSampleRate: %i)"), *Device.DeviceId, *Device.DeviceName, Device.InputChannels, Device.PreferredSampleRate));
						}
					}
					else
					{
						OnsetVoip::ConsoleLog(WeakWorld.Get(), TEXT("No input devices found."));
					}
				}
			})
		);
	}
}));

#endif /* !UE_SERVER */

bool UOnsetVoipLocalPlayerSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	checkf(UKismetSystemLibrary::IsDedicatedServer(Outer) == false, TEXT("Local player subsystem should never be created on a dedicated server?"));

	return Super::ShouldCreateSubsystem(Outer);
}

#if !UE_SERVER
void UOnsetVoipLocalPlayerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	const int32 SampleRate = GetDefault<UOnsetVoipSettings>()->VoiceCaptureSampleRate;
	const int32 NumChannels = GetDefault<UOnsetVoipSettings>()->VoiceCaptureChannels;

	ensure(!VoiceCapture.IsValid());
	VoiceCapture = FVoiceModule::Get().CreateVoiceCapture("", SampleRate, NumChannels); // Empty device name indicates default device.
	if (!VoiceCapture.IsValid())
	{
		UE_LOG(LogOnsetVoip, Error, TEXT("Failed to create voice capturing system. Did you enable it in the DefaultEngine.ini? [Voice] bEnabled = true"));
		UE_LOG(LogOnsetVoip, Error, TEXT("Also check if settings are correct VoiceCaptureSampleRate: %i, VoiceCaptureChannels: %i"), SampleRate, NumChannels)
		return;
	}
	VoiceCapture->DumpState();

	const FVoiceEncoderSettings& VoiceEncoderSettings = GetDefault<UOnsetVoipSettings>()->VoiceEncoderSettings;

	// Convert to original non blueprint type EAudioEncodeHint.
	const EAudioEncodeHint EncodeHint =
		VoiceEncoderSettings.EncodingHint == EOnsetAudioEncodeHint::VoiceEncode_Voice
		? EAudioEncodeHint::VoiceEncode_Voice
		: EAudioEncodeHint::VoiceEncode_Audio;

	ensure(!VoiceEncoder.IsValid());
	VoiceEncoder = FVoiceModule::Get().CreateVoiceEncoder(SampleRate, NumChannels, EncodeHint);
	if (!VoiceEncoder.IsValid())
	{
		UE_LOG(LogOnsetVoip, Error, TEXT("Failed to create voice encoding system."));
		return;
	}
	if (VoiceEncoderSettings.bAdvancedEncoderSettings)
	{
		if (!VoiceEncoder->SetVBR(VoiceEncoderSettings.bEnableVBR))
		{
			UE_LOG(LogOnsetVoip, Warning, TEXT("Failed to set encoder VBR to %i"), VoiceEncoderSettings.bEnableVBR);
		}
		if (!VoiceEncoder->SetComplexity(VoiceEncoderSettings.Complexity))
		{
			UE_LOG(LogOnsetVoip, Warning, TEXT("Failed to set encoder complexity of %i"), VoiceEncoderSettings.Complexity);
		}
		if (!VoiceEncoder->SetBitrate(VoiceEncoderSettings.BitRate))
		{
			UE_LOG(LogOnsetVoip, Warning, TEXT("Failed to set encoder bitrate of %i"), VoiceEncoderSettings.BitRate);
		}
	}
	VoiceEncoder->DumpState();

	static_assert(OnsetVoip::MaxCompressedVoiceDataSize > 0);
	CompressedVoiceData.AddUninitialized(OnsetVoip::MaxCompressedVoiceDataSize);

	PrintVoiceRelatedCVarsToLog();

	UE_LOG(LogOnsetVoip, Log, TEXT("Local VoIP subsystem initiailized."));
}

void UOnsetVoipLocalPlayerSubsystem::Deinitialize()
{
	if (VoiceCapture.IsValid())
	{
		VoiceCapture->Shutdown();
		VoiceCapture = nullptr;
	}

	VoiceEncoder = nullptr;

	UE_LOG(LogOnsetVoip, Log, TEXT("Local VoIP subsystem deinitiailized."));
}
#endif /* !UE_SERVER */

bool UOnsetVoipLocalPlayerSubsystem::ChangeVoiceCaptureDevice(const FString& DeviceName)
{
#if !UE_SERVER
	if (VoiceCapture.IsValid())
	{
		const int32 SampleRate = GetDefault<UOnsetVoipSettings>()->VoiceCaptureSampleRate;
		const int32 NumChannels = GetDefault<UOnsetVoipSettings>()->VoiceCaptureChannels;

		const bool bSuccess = VoiceCapture->ChangeDevice(DeviceName, SampleRate, NumChannels);
		UE_LOG(LogOnsetVoip, Log, TEXT("Changing voice capture device to %s %s."), *DeviceName, bSuccess ? TEXT("succeeded") : TEXT("failed"));
#if !PLATFORM_WINDOWS
		UE_LOG(LogOnsetVoip, Log, TEXT("Changing voice capture device is not supported on this platform."));
#endif
		return bSuccess;
	}
#endif
	return false;
}

bool UOnsetVoipLocalPlayerSubsystem::ToggleVoiceCapture(bool bCapture)
{
	if (bCapture)
	{
		HintVoiceChannels.Empty();
	}

#if !UE_SERVER
	if (ensure(VoiceCapture.IsValid()))
	{
		if (bCapture)
		{
			if (!VoiceCapture->IsCapturing())
			{
				const bool bResult = VoiceCapture->Start();
				if (bResult)
				{
					UE_LOG(LogOnsetVoip, Verbose, TEXT("Starting voice capturing."));
				}
				else
				{
					UE_LOG(LogOnsetVoip, Warning, TEXT("Failed to start voice capturing."));
				}
				return bResult;
			}
		}
		else
		{
			if (VoiceCapture->IsCapturing())
			{
				UE_LOG(LogOnsetVoip, Verbose, TEXT("Stopping voice capturing."));
				VoiceCapture->Stop();
				return true;
			}
		}

		UE_LOG(LogOnsetVoip, Warning, TEXT("Attempting to %s voice capturing while it is already %s."),
			bCapture ? TEXT("start") : TEXT("stop"),
			bCapture ? TEXT("started") : TEXT("stopped")
		);
	}
	else
	{
		UE_LOG(LogOnsetVoip, Warning, TEXT("VoiceCapture is not valid."));
	}
#endif

	return false;
}

bool UOnsetVoipLocalPlayerSubsystem::ToggleVoiceCaptureWithChannel(bool bCapture, int32 VoiceChannelId)
{
	const bool bSuccess = ToggleVoiceCapture(bCapture);
	if (bCapture)
	{
		HintVoiceChannels.Add(VoiceChannelId);
	}
	return bSuccess;
}

bool UOnsetVoipLocalPlayerSubsystem::ToggleVoiceCaptureWithChannels(bool bCapture, const TArray<int32>& VoiceChannelIds)
{
	const bool bSuccess = ToggleVoiceCapture(bCapture);
	if (bCapture)
	{
		HintVoiceChannels = VoiceChannelIds;
		ensureMsgf(HintVoiceChannels.Num() <= OnsetVoip::MaxVoiceChannelHints, TEXT("Exceeded %i maximum voice channels that we may hint with ToggleVoiceCaptureWithChannels()"), OnsetVoip::MaxVoiceChannelHints);
	}
	return bSuccess;
}

bool UOnsetVoipLocalPlayerSubsystem::IsCapturingVoice() const
{
#if !UE_SERVER
	return VoiceCapture.IsValid() && VoiceCapture->IsCapturing();
#else
	return false;
#endif
}

bool UOnsetVoipLocalPlayerSubsystem::IsTalking() const
{
#if !UE_SERVER
	return IsCapturingVoice() && bCachedTalking;
#else
	return false;
#endif
}

float UOnsetVoipLocalPlayerSubsystem::GetCurrentAmplitude() const
{
#if !UE_SERVER
	return IsCapturingVoice() ? VoiceCapture->GetCurrentAmplitude() : 0.0f;
#else
	return -1.0f;
#endif
}

void UOnsetVoipLocalPlayerSubsystem::ToggleLoopback(bool bLoopback)
{
#if !UE_SERVER
	if (LoopbackSoundWave)
	{
		LoopbackSoundWave->ResetAudioBuffer();
		LoopbackSoundWave = nullptr;
	}

	if (LoopbackAudioComponent)
	{
		LoopbackAudioComponent->DestroyComponent();
		LoopbackAudioComponent = nullptr;
	}

	Native_OnVoipMicrophoneAudioCaptured.RemoveAll(this);

	if (bLoopback)
	{
		LoopbackSoundWave = NewObject<UOnsetVoipSoundWave>(this);
		LoopbackAudioComponent = UGameplayStatics::CreateSound2D(this, LoopbackSoundWave, 1.0f, 1.0f, 0.0f, nullptr, false, false);

		Native_OnVoipMicrophoneAudioCaptured.AddUObject(this, &UOnsetVoipLocalPlayerSubsystem::OnMicrophoneAudioCapturedForLoopback);
	}

	UE_LOG(LogOnsetVoip, Log, TEXT("Voice loopback %s"), bLoopback ? TEXT("enabled") : TEXT("disabled"));
#endif
}

#if !UE_SERVER
void UOnsetVoipLocalPlayerSubsystem::OnMicrophoneAudioCapturedForLoopback(const TArrayView<uint8>& AudioData)
{
	if (LoopbackSoundWave)
	{
		LoopbackSoundWave->AddAudioData(AudioData);
	}

	if (LoopbackAudioComponent && !LoopbackAudioComponent->IsPlaying())
	{
		LoopbackAudioComponent->Play();
	}
}
#endif

#if !UE_SERVER
void UOnsetVoipLocalPlayerSubsystem::PrintVoiceRelatedCVarsToLog()
{
	const TArray<FString> FloatValueCVarsNames = {
		"voice.SilenceDetectionAttackTime",
		"voice.SilenceDetectionReleaseTime",
		"voice.SilenceDetectionThreshold",
		"voice.MicNoiseAttackTime",
		"voice.MicNoiseReleaseTime",
		"voice.MicNoiseGateThreshold"
	};

	for (const FString& CVarName : FloatValueCVarsNames)
	{
		if (IConsoleVariable* CVar = IConsoleManager::Get().FindConsoleVariable(*CVarName))
		{
			UE_LOG(LogOnsetVoip, Log, TEXT("%s = %f"), *CVarName, CVar->GetFloat());
		}
	}
}
#endif

#if !UE_SERVER

FAutoConsoleCommandWithWorldAndArgs _CmdVoiceLoopback(TEXT("voice.loopback"), TEXT("Toggles loopback of the microphone input\n")TEXT("0: Disable, 1: Enable"),
	FConsoleCommandWithWorldAndArgsDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World)
{
	if (Args.Num() == 0)
	{
		OnsetVoip::ConsoleLog(World, TEXT("voice.loopback <bEnable>"));
		return;
	}

	if (UOnsetVoipLocalPlayerSubsystem* Subsystem = World->GetFirstLocalPlayerFromController()->GetSubsystem<UOnsetVoipLocalPlayerSubsystem>())
	{
		Subsystem->ToggleLoopback(Args[0].ToBool());
	}
}));

static bool OverrideMicInputGainCommandExec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
{
	if (FParse::Command(&Cmd, TEXT("voice.MicInputGain")))
	{
		UE_LOG(LogOnsetVoip, Warning, TEXT("voice.MicInputGain does not work, use replacement: voice.MicInputGain2"));
		return true;
	}
	return false;
}

static FStaticSelfRegisteringExec OverrideMicInputGainCommand(OverrideMicInputGainCommandExec);

static float MicInputGain2Cvar = 1.0f;
FAutoConsoleVariableRef CVarMicInputGain2(
	TEXT("voice.MicInputGain2"),
	MicInputGain2Cvar,
	TEXT("Adjust microphone input volume.\n")
	TEXT("Value: Gain multiplier. Default: 1.0"),
	FConsoleVariableDelegate::CreateLambda([](IConsoleVariable* CVar)
		{
			const float MicGainValue = CVar->GetFloat();
			UE_CLOG(!FMath::IsWithinInclusive(MicGainValue, OnsetVoip::MinMicInputGain, OnsetVoip::MaxMicInputGain), LogOnsetVoip, Log, TEXT("MicInputGain %.2f should be within %.2f-%.2f"), MicGainValue, OnsetVoip::MinMicInputGain, OnsetVoip::MaxMicInputGain);
		}),
	ECVF_Default);

static float MicInputAGCCvar = 0.0f;
FAutoConsoleVariableRef CVarMicInputAGC(
	TEXT("voice.MicInputAGC"),
	MicInputAGCCvar,
	TEXT("Automatic Gain Control used to normalize microphone input volume. Experimental.\n")
	TEXT("Value: RMS (Root Mean Square). Example value between 500-8000 where a higher value means a higher volume. To disable set it to 0.0"),
	FConsoleVariableDelegate::CreateLambda([](IConsoleVariable* CVar)
		{
			const float MicInputAGC = CVar->GetFloat();
			UE_CLOG(MicInputAGC != 0.0f && !FMath::IsWithinInclusive(MicInputAGC, OnsetVoip::MinMicInputAGC, OnsetVoip::MaxMicInputAGC), LogOnsetVoip, Log, TEXT("MicInputAGC %.2f should be within %.2f-%.2f"), MicInputAGC, OnsetVoip::MinMicInputAGC, OnsetVoip::MaxMicInputAGC);
		}),
	ECVF_Default);

bool UOnsetVoipLocalPlayerSubsystem::Tick(float DeltaTime)
{
	ULocalPlayer* LocalPlayer = GetLocalPlayer();
	if (!IsValid(LocalPlayer))
	{
		return true;
	}

	if (VoiceCapture.IsValid() && VoiceEncoder.IsValid())
	{
		// Get voice capture state and available voice data size.
		uint32 NumAvailableVoiceData = 0;
		EVoiceCaptureState::Type VoiceState = VoiceCapture->GetCaptureState(NumAvailableVoiceData);

		if (VoiceState == EVoiceCaptureState::Ok && NumAvailableVoiceData > 0)
		{
			const int32 OldVoiceRemainderSize = VoiceRemainder.Num();

#if ONSETVOIP_ENABLE_SIMD
			TArray<uint8, TAlignedHeapAllocator<16>> RawVoiceData;
#else
			TArray<uint8> RawVoiceData;
#endif
			RawVoiceData.AddUninitialized(NumAvailableVoiceData + OldVoiceRemainderSize);

			// If we have voice from the last run that wasn't encoded add it here again.
			if (OldVoiceRemainderSize > 0)
			{
				FMemory::Memmove(RawVoiceData.GetData(), VoiceRemainder.GetData(), OldVoiceRemainderSize);
				VoiceRemainder.Empty();
			}

			// Get the new voice data and add it after the possible remainder. NumAvailableVoiceData will be overriden with the amount of added data.
			VoiceState = VoiceCapture->GetVoiceData(RawVoiceData.GetData() + OldVoiceRemainderSize, NumAvailableVoiceData, NumAvailableVoiceData);

			if (VoiceState != EVoiceCaptureState::Ok)
			{
				UE_LOG(LogOnsetVoip, Error, TEXT("Failed to capture voice: %s"), EVoiceCaptureState::ToString(VoiceState));
				return true;
			}

			if (NumAvailableVoiceData > 0 && NumAvailableVoiceData % 2 == 0)
			{
				uint8* CapturedVoice = RawVoiceData.GetData() + OldVoiceRemainderSize;

				float GainFactorAGC = 1.0f;

				if (MicInputAGCCvar != 0.0f)
				{
					int64 SumOfSquares = 0;

#if ONSETVOIP_ENABLE_SIMD
					// https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html
					
					__m128i z = _mm_setzero_si128();
					__m128i a = _mm_setzero_si128();

					uint32 i = 0;
					for (; i + 16 <= NumAvailableVoiceData; i += 16)
					{
						// Load 16 bytes from aligned memory
						__m128i v = _mm_load_si128((__m128i*)(CapturedVoice + i));

						// Combine to signed 16 bit sample
						__m128i p = _mm_packus_epi16(_mm_unpacklo_epi8(v, z), _mm_unpackhi_epi8(v, z));

						// Multiply samples and add
						__m128i q = _mm_madd_epi16(p, p);

						// Make then 64 bit each
						__m128i l = _mm_unpacklo_epi32(q, z);
						__m128i h = _mm_unpackhi_epi32(q, z);

						constexpr int32 shuffle = _MM_SHUFFLE(1, 0, 3, 2);

						// Add first 64 bit ints
						__m128i s1 = _mm_add_epi64(l, _mm_shuffle_epi32(l, shuffle));

						// Add second 64 bit ints
						__m128i s2 = _mm_add_epi64(h, _mm_shuffle_epi32(h, shuffle));

						// Add both temp 64 bit ints
						__m128i s3 = _mm_add_epi64(s1, s2);

						// Add previous result
						a = _mm_add_epi64(s3, a);
					}

					// Get total sum
					SumOfSquares = _mm_cvtsi128_si64(a);

					for (; i < NumAvailableVoiceData; i += 2)
					{
						// Combine two bytes to form a 16 bit sample.
						const int16 Sample = *(CapturedVoice + i) | (*(CapturedVoice + i + 1) << 8);

						SumOfSquares += static_cast<int64>(Sample) * Sample;
					}
#else
					for (uint32 i = 0; i < NumAvailableVoiceData; i += 2)
					{
						// Combine two bytes to form a 16 bit sample. 
						const int16 Sample = *(CapturedVoice + i) | (*(CapturedVoice + i + 1) << 8);

						SumOfSquares += static_cast<int64>(Sample) * Sample;
					}
#endif

					const double MeanSquare = static_cast<double>(SumOfSquares) / (NumAvailableVoiceData / 2);
					const float RootMeanSquare = FMath::Sqrt(static_cast<float>(MeanSquare));

					if (RootMeanSquare > 0.0f)
					{
						GainFactorAGC = FMath::Clamp(MicInputAGCCvar / RootMeanSquare, 0.01f, 10.0f);
					}
				}

				// Adjust volume if cvar or AGC is not at default.
				if (MicInputGain2Cvar != 1.0f || GainFactorAGC != 1.0f)
				{
					for (uint32 i = 0; i < NumAvailableVoiceData; i += 2)
					{
						// Combine two bytes to form a 16 bit sample.
						const int16 Sample = *(CapturedVoice + i) | (*(CapturedVoice + i + 1) << 8);

						// Adjust the sample value and handle clipping.
						const int32 ModifiedSample = FMath::Clamp(static_cast<decltype(ModifiedSample)>(Sample) * MicInputGain2Cvar * GainFactorAGC, TNumericLimits<decltype(Sample)>::Min(), TNumericLimits<decltype(Sample)>::Max());

						// Store the modified sample back into the buffer.
						*(CapturedVoice + i) = ModifiedSample & 0xFF;
						*(CapturedVoice + i + 1) = (ModifiedSample >> 8) & 0xFF;
					}
				}

				const TArrayView<uint8> CapturedVoiceView(CapturedVoice, NumAvailableVoiceData);
				Native_OnVoipMicrophoneAudioCaptured.Broadcast(CapturedVoiceView);
			}

			// Our raw voice data is now the NumAvailableVoiceData which GetVoiceData returned + possible remainder.
			const uint32 RawVoiceDataSize = NumAvailableVoiceData + OldVoiceRemainderSize;

			UE_LOG(LogOnsetVoip, VeryVerbose, TEXT("VoiceCapture got %i bytes of voice data. OldRemainderSize: %i"), NumAvailableVoiceData, OldVoiceRemainderSize);

			if (RawVoiceDataSize > 0)
			{
				uint32 NumCompressedVoiceData = CompressedVoiceData.Num(); // OnsetVoip::MaxCompressedVoiceDataSize

				// Compress raw voice data. Passing NumCompressedVoiceData which contains maxium compression buffer size. The function sets the new size of the compressed data.
				const int32 NewVoiceRemainderSize = VoiceEncoder->Encode(RawVoiceData.GetData(), RawVoiceDataSize, CompressedVoiceData.GetData(), NumCompressedVoiceData);

				// If not all data was compressed save it for the next run.
				if (NewVoiceRemainderSize > 0)
				{
					VoiceRemainder.AddUninitialized(NewVoiceRemainderSize);

					FMemory::Memmove(VoiceRemainder.GetData(), RawVoiceData.GetData() + (RawVoiceDataSize - NewVoiceRemainderSize), NewVoiceRemainderSize);
				}

				if (NumCompressedVoiceData > 0)
				{
					UE_LOG(LogOnsetVoip, VeryVerbose, TEXT("Encoded %i bytes of raw voice data to %i bytes. NewRemainderSize: %i"), RawVoiceDataSize - NewVoiceRemainderSize, NumCompressedVoiceData, NewVoiceRemainderSize);

					const float CurrentAmplitude = VoiceCapture->GetCurrentAmplitude();
					UOnsetVoipDataChannel::ReplicateLocalVoipPacket(LocalPlayer, MakeShared<FOnsetVoipPacket>(CompressedVoiceData.GetData(), NumCompressedVoiceData, HintVoiceChannels, CurrentAmplitude));

					TimeLastVoiceCaptured = FPlatformTime::Seconds();

					if (!bCachedTalking)
					{
						bCachedTalking = true;
						OnVoipTalkingStateChange.Broadcast(true);
					}
				}
			}
		}
	}

	if (bCachedTalking)
	{
		if ((FPlatformTime::Seconds() - TimeLastVoiceCaptured) > OnsetVoip::TimeLocalTalkerConsideredStoppedTalking)
		{
			bCachedTalking = false;
			OnVoipTalkingStateChange.Broadcast(false);
		}
	}

	return true;
}

#endif /* !UE_SERVER */

bool UOnsetVoipLocalPlayerSubsystem::StartRecording(const FString& Filename, EOnsetAudioRecordingFormat RecordingFormat)
{
#if !UE_SERVER
	if (VoipRecorder.IsValid())
	{
		return false;
	}

	VoipRecorder = CreateAudioRecorder<FOnsetVoipRecorderLocal, UOnsetVoipLocalPlayerSubsystem>(this, RecordingFormat, Filename.Len() > 0 ? Filename : TOptional<FString>());

	return VoipRecorder.IsValid();
#else
	return false;
#endif
}

bool UOnsetVoipLocalPlayerSubsystem::StopRecording()
{
#if !UE_SERVER
	if (!VoipRecorder.IsValid())
	{
		return false;
	}

	VoipRecorder = nullptr;

	return true;
#else
	return false;
#endif
}

bool UOnsetVoipLocalPlayerSubsystem::IsRecording()
{
#if !UE_SERVER
	return VoipRecorder.IsValid();
#else
	return false;
#endif
}

FString UOnsetVoipLocalPlayerSubsystem::GetRecordingFile() const
{
#if !UE_SERVER
	return VoipRecorder.IsValid() ? VoipRecorder->GetRecordingFile() : TEXT("");
#else
	return TEXT("");
#endif
}
