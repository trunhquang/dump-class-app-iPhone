//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, IGKVOHandle, IGSampleBuffer, IGTargetBlock, NSObject<OS_dispatch_queue>, NSString;

@interface IGCaptureManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate>
{
    double _targetBrightness;
    BOOL _isCapturingStillImage;
    BOOL _focusRequested;
    BOOL _flashFired;
    AVCaptureVideoPreviewLayer *_previewLayer;
    NSObject<OS_dispatch_queue> *_videoBufferQueue;
    id <IGCaptureManagerDelegate> _delegate;
    id <IGVideoSampleBufferDelegate> _videoBufferDelegate;
    id <IGAudioSampleBufferDelegate> _audioBufferDelegate;
    int _sessionPreset;
    AVCaptureSession *_captureSession;
    NSObject<OS_dispatch_queue> *_captureQueue;
    AVCaptureDevice *_videoDevice;
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureDevice *_audioDevice;
    AVCaptureDeviceInput *_audioDeviceInput;
    NSObject<OS_dispatch_queue> *_audioBufferQueue;
    AVCaptureAudioDataOutput *_audioDataOutput;
    AVCaptureStillImageOutput *_stillImageOutput;
    IGKVOHandle *_flashActiveObserver;
    IGKVOHandle *_adjustingFocusObserver;
    IGKVOHandle *_adjustingExposureObserver;
    IGKVOHandle *_interruptedObserver;
    IGSampleBuffer *_imageBuffer;
    IGTargetBlock *_exposureUpdateBlock;
    struct CGSize _videoSizeForCurrentSessionPreset;
}

+ (struct CGRect)cameraCropRectForImage:(id)arg1;
+ (struct CGRect)cameraCropRectForSize:(struct CGSize)arg1;
@property(retain, nonatomic) IGTargetBlock *exposureUpdateBlock; // @synthesize exposureUpdateBlock=_exposureUpdateBlock;
@property(retain, nonatomic) IGSampleBuffer *imageBuffer; // @synthesize imageBuffer=_imageBuffer;
@property(retain, nonatomic) IGKVOHandle *interruptedObserver; // @synthesize interruptedObserver=_interruptedObserver;
@property(retain, nonatomic) IGKVOHandle *adjustingExposureObserver; // @synthesize adjustingExposureObserver=_adjustingExposureObserver;
@property(retain, nonatomic) IGKVOHandle *adjustingFocusObserver; // @synthesize adjustingFocusObserver=_adjustingFocusObserver;
@property(retain, nonatomic) IGKVOHandle *flashActiveObserver; // @synthesize flashActiveObserver=_flashActiveObserver;
@property(nonatomic) BOOL flashFired; // @synthesize flashFired=_flashFired;
@property(nonatomic) BOOL focusRequested; // @synthesize focusRequested=_focusRequested;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) AVCaptureAudioDataOutput *audioDataOutput; // @synthesize audioDataOutput=_audioDataOutput;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioBufferQueue; // @synthesize audioBufferQueue=_audioBufferQueue;
@property(retain, nonatomic) AVCaptureDeviceInput *audioDeviceInput; // @synthesize audioDeviceInput=_audioDeviceInput;
@property(retain, nonatomic) AVCaptureDevice *audioDevice; // @synthesize audioDevice=_audioDevice;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *videoDeviceInput; // @synthesize videoDeviceInput=_videoDeviceInput;
@property(retain, nonatomic) AVCaptureDevice *videoDevice; // @synthesize videoDevice=_videoDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue; // @synthesize captureQueue=_captureQueue;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) struct CGSize videoSizeForCurrentSessionPreset; // @synthesize videoSizeForCurrentSessionPreset=_videoSizeForCurrentSessionPreset;
@property(nonatomic) int sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(nonatomic) __weak id <IGAudioSampleBufferDelegate> audioBufferDelegate; // @synthesize audioBufferDelegate=_audioBufferDelegate;
@property(nonatomic) __weak id <IGVideoSampleBufferDelegate> videoBufferDelegate; // @synthesize videoBufferDelegate=_videoBufferDelegate;
@property(nonatomic) __weak id <IGCaptureManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoBufferQueue; // @synthesize videoBufferQueue=_videoBufferQueue;
@property(nonatomic) BOOL isCapturingStillImage; // @synthesize isCapturingStillImage=_isCapturingStillImage;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void).cxx_destruct;
- (void)takePictureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)unlockFocus;
- (BOOL)lockFocus;
- (BOOL)exposeAtPoint:(struct CGPoint)arg1;
- (BOOL)focusAtPoint:(struct CGPoint)arg1;
@property(nonatomic) int flashMode;
@property(nonatomic) int cameraPosition;
- (void)switchCameras;
- (id)capturePreset;
- (void)cameraError:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)adjustBrightnessForCinema;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stopSession;
- (void)startSession;
- (BOOL)currentDeviceHasFlash;
- (BOOL)deviceHasDualCameras;
@property(readonly, nonatomic) BOOL deviceHasCamera;
- (void)setDevice:(id)arg1;
- (id)initWithCameraPosition:(int)arg1 sessionPreset:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

