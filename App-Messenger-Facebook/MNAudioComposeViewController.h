//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBClassProvidable.h"
#import "MNAudioComposeViewDelegate.h"
#import "MNAudioRecorderDelegate.h"

@class FBMAudioAttachment, MNAudioComposeView, MNAudioRecorder, MNPermissionsViewController, MNPermissionsWrapperView, MNUserSettings, NSString, NSTimer;

@interface MNAudioComposeViewController : UIViewController <MNAudioComposeViewDelegate, MNAudioRecorderDelegate, FBClassProvidable>
{
    BOOL _previousTouchInsideRecordButton;
    MNUserSettings *_userSettings;
    MNPermissionsViewController *_permissionsViewController;
    MNPermissionsWrapperView *_permissionsWrapperView;
    MNAudioRecorder *_audioRecorder;
    id <MNAudioComposeViewControllerDelegate> _delegate;
    MNAudioComposeView *_audioComposeView;
    FBMAudioAttachment *_pendingAttachment;
    NSTimer *_tapToHoldRecordingStatusViewTimer;
    double _lastRecordStartTimestamp;
}

@property(retain, nonatomic) NSTimer *tapToHoldRecordingStatusViewTimer; // @synthesize tapToHoldRecordingStatusViewTimer=_tapToHoldRecordingStatusViewTimer;
@property(retain, nonatomic) FBMAudioAttachment *pendingAttachment; // @synthesize pendingAttachment=_pendingAttachment;
@property(retain, nonatomic) MNAudioComposeView *audioComposeView; // @synthesize audioComposeView=_audioComposeView;
@property(nonatomic) double lastRecordStartTimestamp; // @synthesize lastRecordStartTimestamp=_lastRecordStartTimestamp;
@property(nonatomic) __weak id <MNAudioComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismissRecordingStatusView;
- (void)_onApplicationWillResignActive:(id)arg1;
- (void)_sendAudioAttachment:(id)arg1;
- (void)_showHoldToTalkPopup;
- (void)_stopAudioPlaybackIfNeeded;
- (void)_cancelWithTouchUpOutside;
- (void)_cancelWithHoldTooShort;
- (void)_initPermissionsViewControllerIfNecessary;
- (void)audioRecorderCallInProgress:(id)arg1;
- (void)audioRecorderPermissionDenied:(id)arg1;
- (void)audioRecorderDidCancel:(id)arg1;
- (void)audioRecorderDidStart:(id)arg1;
- (void)audioRecorderStartFailed:(id)arg1;
- (void)audioRecorder:(id)arg1 updateTimestamp:(double)arg2;
- (void)audioRecorder:(id)arg1 updateVolume:(float)arg2;
- (void)audioRecorder:(id)arg1 reachMaxDuration:(id)arg2;
- (void)audioRecorder:(id)arg1 didRecordAudio:(id)arg2;
- (void)audioComposeViewDidCancelLongPress:(id)arg1;
- (void)audioComposeViewDidEndLongPress:(id)arg1;
- (void)audioComposeViewDidMoveInside:(id)arg1;
- (void)audioComposeViewDidMoveOutside:(id)arg1;
- (void)audioComposeViewDidBeginLongPress:(id)arg1;
- (void)audioComposeViewDidReceiveTap:(id)arg1;
- (BOOL)_shouldShowCancelText;
- (void)reset;
- (BOOL)shouldAutorotate;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithUserSettings:(id)arg1 audioRecorder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

