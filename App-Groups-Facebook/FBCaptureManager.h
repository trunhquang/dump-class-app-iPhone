//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "FBAudioSessionManagerClient.h"
#import "FBSessionClassProvidable.h"

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, FBCaptureManagerListenerAnnouncer, FBVideoRecorder, NSObject<OS_dispatch_queue>, NSString;

@interface FBCaptureManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, FBAudioSessionManagerClient, FBSessionClassProvidable>
{
    AVCaptureVideoPreviewLayer *_previewLayer;
    FBVideoRecorder *_videoRecorder;
    AVCaptureSession *_captureSession;
    AVCaptureSession *_audioSession;
    BOOL _didStopSession;
    float _bitRate;
    FBCaptureManagerListenerAnnouncer *_announcer;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_audioBufferQueue;
    NSObject<OS_dispatch_queue> *_videoBufferQueue;
    BOOL _isVideoEnabled;
    BOOL _isAudioEnabled;
    id <FBCaptureManagerDelegate> _delegate;
    int _capturePosition;
    NSString *_sessionPreset;
    AVCaptureDevice *_rearCamera;
    CDUnknownBlockType _previewLayerCompletionBlock;
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureStillImageOutput *_stillImageOutput;
    AVCaptureDeviceInput *_audioDeviceInput;
    AVCaptureAudioDataOutput *_audioDataOutput;
    unsigned int _state;
}

+ (id)videoDeviceInputPreferringPosition:(int)arg1;
+ (id)deviceWithMediaType:(id)arg1 preferringPosition:(int)arg2;
+ (void)setTorchMode:(int)arg1 forDevice:(id)arg2;
+ (void)setFlashMode:(int)arg1 forDevice:(id)arg2;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) AVCaptureAudioDataOutput *audioDataOutput; // @synthesize audioDataOutput=_audioDataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *audioDeviceInput; // @synthesize audioDeviceInput=_audioDeviceInput;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *videoDeviceInput; // @synthesize videoDeviceInput=_videoDeviceInput;
@property(copy, nonatomic) CDUnknownBlockType previewLayerCompletionBlock; // @synthesize previewLayerCompletionBlock=_previewLayerCompletionBlock;
@property(nonatomic) AVCaptureDevice *rearCamera; // @synthesize rearCamera=_rearCamera;
@property(copy, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(nonatomic) int capturePosition; // @synthesize capturePosition=_capturePosition;
@property(nonatomic) BOOL isAudioEnabled; // @synthesize isAudioEnabled=_isAudioEnabled;
@property(nonatomic) BOOL isVideoEnabled; // @synthesize isVideoEnabled=_isVideoEnabled;
@property(nonatomic) __weak id <FBCaptureManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_resumeAudioRecording;
- (void)_suspendAudioRecording;
- (void)subsribeNSNotificationEventsForAudioRecoding;
@property(readonly, nonatomic) unsigned int audioDirection;
@property(readonly, nonatomic) unsigned int outputCoordinationMode;
@property(readonly, nonatomic) unsigned int outputOptions;
- (void)highPriorityClientBecameActive;
- (void)finishInterruptionAndResume:(BOOL)arg1;
- (void)beginInterruption;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (BOOL)_ensureState:(unsigned int)arg1;
- (void)_handleVideoRecordFailed;
- (void)_finishVideoCaptureWithLoadedAsset:(id)arg1;
- (void)_completeVideoCapture:(id)arg1;
- (void)_completeVideoCapture:(id)arg1 overlayLayer:(id)arg2;
- (void)adjustCaptureSettingsAtScaledPoint:(struct CGPoint)arg1;
- (void)removeCaptureManagerListener:(id)arg1;
- (void)addCaptureManagerListener:(id)arg1;
- (void)createPreviewLayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelRecording;
- (void)stopRecordingWithOverlay:(id)arg1;
- (void)stopRecording;
- (void)_setVideoOrientationForCaptureConnection:(id)arg1;
- (void)_setUpCaptureConnectionForVideoRecording;
- (void)_performStartRecording;
- (void)startRecording;
- (void)_completeStillImageCapturingWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id)arg2 inputSize:(struct CGSize)arg3 overlay:(id)arg4 rotationAngle:(float)arg5;
- (void)captureImageWithOverlayView:(id)arg1 overlayRotationAngle:(float)arg2;
- (void)captureImageWithOverlayView:(id)arg1;
- (void)captureImage;
- (void)_stopAVCaptureSession:(id)arg1;
- (void)stopSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_tearDownAudioConfiguration;
- (void)_ensureAudioSession;
- (void)_startRunningAudioSession;
- (void)_configureAndStartAudioSession;
- (void)_configureAudioSessionWithMainThreadCompletion:(CDUnknownBlockType)arg1;
- (void)_configureCaptureSessionForVideo;
- (void)_configureCaptureSessionForStillImage;
- (void)_configureCaptureSessionCommon;
- (void)_updateConnectionMirrorSettings;
- (id)_createPreviewLayerIfNeeded;
- (void)_configureAndStartCaptureSession;
- (void)_configureCaptureSessionWithMainThreadCompletion:(CDUnknownBlockType)arg1;
- (void)startSession;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
- (void)setBitRate:(float)arg1;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned int clientPriority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int inputOptions;
@property(readonly) Class superclass;

@end

