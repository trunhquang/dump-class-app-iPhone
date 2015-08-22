//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HipChatViewController.h"

#import "HipChatAppDelegate.h"
#import "UIScrollViewDelegate.h"

@class AHCVideoAuthDetails, AHCVideoResponder, AHCVideoService, AHCVideoView, AVAudioPlayer, AccountContext, FUIButton, NINetworkImageView, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, Reachability, UIActivityIndicatorView, UIBarButtonItem, UILabel, UIScrollView, UITapGestureRecognizer, UIToolbar, UIView, XMPPJID;

@interface VideoViewController : HipChatViewController <UIScrollViewDelegate, HipChatAppDelegate>
{
    AHCVideoService *addliveService;
    int state;
    BOOL isPendingDisconnection;
    BOOL isPendingConnection;
    BOOL isReceivingVideo;
    NSMutableDictionary *users;
    NSMutableDictionary *videoSinkToVideoView;
    NSMutableDictionary *videoViewToVideoSink;
    NSMutableSet *screenShareSinks;
    NSArray *cameraDevices;
    int currentCamera;
    Reachability *reachability;
    unsigned int networkStatus;
    AHCVideoAuthDetails *authDetails;
    NSString *scopeId;
    BOOL publishVideo;
    BOOL publishAudio;
    int connectAttempts;
    XMPPJID *jid;
    struct CGSize remoteVideoSize;
    NSString *remoteUserPhotoURL;
    AHCVideoResponder *genericResponse;
    AHCVideoResponder *stopRemoteVideoResponse;
    AHCVideoResponder *stopLocalVideoResponse;
    BOOL isCaller;
    NSTimer *toolbarHideTimer;
    BOOL localRendererIsSetUp;
    BOOL remoteRendererIsSetUp;
    BOOL addliveInitialized;
    NSTimer *connectTimer;
    NSMutableArray *actionsPendingAddLiveInit;
    BOOL _toolbarHidden;
    AHCVideoView *remoteVideoView;
    AHCVideoView *localVideoView;
    UIBarButtonItem *audioToggleButton;
    UIBarButtonItem *videoToggleButton;
    UIBarButtonItem *cameraSwitchButton;
    UIScrollView *remoteVideoScrollView;
    UILabel *disconnectedLabel;
    UIView *disconnectedOverlay;
    FUIButton *disconnectedCloseButton;
    FUIButton *disconnectedCallBackButton;
    UIActivityIndicatorView *spinner;
    UIBarButtonItem *_hangUpButton;
    NINetworkImageView *_avatarImageView;
    UIToolbar *_toolbar;
    AccountContext *_accountContext;
    AVAudioPlayer *_audioPlayer;
    UITapGestureRecognizer *_tapRecognizer;
}

@property(nonatomic) BOOL toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) __weak AccountContext *accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) NINetworkImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIBarButtonItem *hangUpButton; // @synthesize hangUpButton=_hangUpButton;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner;
@property(retain, nonatomic) FUIButton *disconnectedCallBackButton; // @synthesize disconnectedCallBackButton;
@property(retain, nonatomic) FUIButton *disconnectedCloseButton; // @synthesize disconnectedCloseButton;
@property(retain, nonatomic) UIView *disconnectedOverlay; // @synthesize disconnectedOverlay;
@property(retain, nonatomic) UILabel *disconnectedLabel; // @synthesize disconnectedLabel;
@property(retain, nonatomic) UIScrollView *remoteVideoScrollView; // @synthesize remoteVideoScrollView;
@property(retain, nonatomic) UIBarButtonItem *cameraSwitchButton; // @synthesize cameraSwitchButton;
@property(retain, nonatomic) UIBarButtonItem *videoToggleButton; // @synthesize videoToggleButton;
@property(retain, nonatomic) UIBarButtonItem *audioToggleButton; // @synthesize audioToggleButton;
@property(retain, nonatomic) AHCVideoView *localVideoView; // @synthesize localVideoView;
@property(retain, nonatomic) AHCVideoView *remoteVideoView; // @synthesize remoteVideoView;
- (void).cxx_destruct;
- (id)app;
- (void)didReceiveMemoryWarning;
- (void)hipChatAppFullyLoaded;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)handleStopVideoError:(id)arg1;
- (void)stopLocalVideoResponse:(id)arg1;
- (void)stopRemoteVideoResponse:(id)arg1;
- (void)basicResponse:(id)arg1;
- (void)onHold:(id)arg1;
- (void)onReconnect:(id)arg1;
- (void)showIfNotHungUp:(id)arg1;
- (void)showAlertToEnableMicrophone;
- (void)handleError:(id)arg1;
- (void)onDisconnect:(id)arg1;
- (void)onConnect:(id)arg1;
- (void)onSessionReconnected:(id)arg1;
- (void)onMediaStreamEvent:(id)arg1;
- (id)getRemoteName;
- (void)onUserEvent:(id)arg1;
- (void)cleanUpAfterDisconnect;
- (void)onVideoFrameSizeChanged:(id)arg1;
- (void)onConnectionLost:(id)arg1;
- (void)onSetVideoCaptureDevice:(id)arg1;
- (void)onVideoUnpublished:(id)arg1;
- (void)onVideoPublished:(id)arg1;
- (void)onAudioUnpublished:(id)arg1;
- (void)onAudioPublished:(id)arg1;
- (void)stopRemoteVideo;
- (void)startPendingRemoteSink:(id)arg1;
- (void)showRemoteVideoView:(BOOL)arg1;
- (void)startRemoteVideo:(id)arg1;
- (void)onStartLocalVideo:(id)arg1 videoSinkId:(id)arg2;
- (void)startLocalVideo;
- (void)onInitGetVideoCaptureDeviceNames:(id)arg1 devices:(id)arg2;
- (void)onInitAddServiceListener:(id)arg1;
- (void)onInitPlatform:(id)arg1;
- (void)useDevice:(int)arg1;
- (void)stopOutgoingRing;
- (void)startOutgoingRing;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)resizeRemoteVideoView:(id)arg1;
- (void)resizeRemoteVideoView;
- (void)updateVideoStream:(id)arg1;
- (void)updateAudioStream:(id)arg1;
- (void)updateScreenStream:(id)arg1;
- (void)putCallOnHold;
- (void)hold;
- (void)reconnect;
- (void)disconnect;
- (void)hideMessage;
- (void)showMessage:(id)arg1;
- (void)showMessage:(id)arg1 withSpinner:(BOOL)arg2;
- (void)hangUpWithMessage:(id)arg1;
- (void)hangUp:(BOOL)arg1;
- (void)onConnectTimeout:(id)arg1;
- (void)stopConnectTimer;
- (void)startConnectTimer;
- (id)callCenter;
- (void)notifyCallCenterOfHangUp;
- (void)connect;
- (void)handleVideoAuthResponse:(id)arg1;
- (void)callBackClick:(id)arg1;
- (void)hangUpButtonClick:(id)arg1;
- (void)updateVideoPublishState;
- (void)videoToggleClick:(id)arg1;
- (void)updateAudioPublishState;
- (void)audioToggleClick:(id)arg1;
- (void)cameraSwitchClick:(id)arg1;
- (void)startVideoForView:(id)arg1;
- (void)updateVideoToggleAndPreview;
- (void)updateAudioToggleImage;
- (void)callHungUp:(id)arg1;
- (void)callDeclined:(id)arg1;
- (void)setIsReceivingVideo:(BOOL)arg1;
- (void)setToolbarVisibility:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setToolbarVisibility:(BOOL)arg1;
- (void)hideToolbar:(id)arg1;
- (void)scheduleToolbarHide;
- (void)onScreenTap:(id)arg1;
- (void)fetchVideoAuthForJid:(id)arg1;
- (void)updateWithJid:(id)arg1 options:(int)arg2 isAccept:(BOOL)arg3;
- (void)setupAudioPlayer;
- (void)setupRemoteVideoView;
- (void)setupTapRecognizer;
- (void)setupNotifications;
- (void)setupAvatarImageView;
- (void)setupToolbar;
- (void)setupRightBarButtonItems;
- (void)setupNavigationBar;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initializeThisController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 accountContext:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)removeObservers;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

