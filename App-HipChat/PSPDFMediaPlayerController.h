//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFMediaPlayerDelegate.h"
#import "PSPDFMediaPlayerViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class AVAssetImageGenerator, AVPlayerItem, NSError, NSString, NSTimer, NSURL, PSPDFMediaPlayer, PSPDFMediaPlayerView, UIImage, UITapGestureRecognizer;

@interface PSPDFMediaPlayerController : NSObject <UIGestureRecognizerDelegate, PSPDFMediaPlayerDelegate, PSPDFMediaPlayerViewDelegate>
{
    BOOL _didFinishPlaying;
    BOOL _shouldHideToolbar;
    BOOL _didStartPlaying;
    BOOL _loopEnabled;
    BOOL _usesExternalPlaybackWhileExternalScreenIsActive;
    BOOL _scrubbing;
    BOOL _hasVideoTrack;
    BOOL _didPlayBeforeSeeking;
    NSURL *_contentURL;
    NSError *_contentError;
    unsigned int _contentState;
    unsigned int _coverMode;
    NSURL *_coverImageURL;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned int _controlStyle;
    PSPDFMediaPlayerView *_view;
    AVPlayerItem *_playerItem;
    PSPDFMediaPlayer *_player;
    id <PSPDFMediaPlayerControllerDelegate> _delegateProxy;
    NSTimer *_toolbarFadeTimer;
    AVAssetImageGenerator *_videoPreviewGenerator;
    UIImage *_videoPreviewImage;
    CDStruct_1b6d18a9 _coverImagePreviewCaptureTime;
    CDStruct_e83c9415 _playableRange;
}

+ (void)pauseAllInstances;
+ (void)initialize;
@property(nonatomic) BOOL didPlayBeforeSeeking; // @synthesize didPlayBeforeSeeking=_didPlayBeforeSeeking;
@property(nonatomic) BOOL hasVideoTrack; // @synthesize hasVideoTrack=_hasVideoTrack;
@property(nonatomic) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property(retain, nonatomic) UIImage *videoPreviewImage; // @synthesize videoPreviewImage=_videoPreviewImage;
@property(retain, nonatomic) AVAssetImageGenerator *videoPreviewGenerator; // @synthesize videoPreviewGenerator=_videoPreviewGenerator;
@property(retain, nonatomic) NSTimer *toolbarFadeTimer; // @synthesize toolbarFadeTimer=_toolbarFadeTimer;
@property(retain, nonatomic) id <PSPDFMediaPlayerControllerDelegate> delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(retain, nonatomic) PSPDFMediaPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) PSPDFMediaPlayerView *view; // @synthesize view=_view;
@property(nonatomic) CDStruct_e83c9415 playableRange; // @synthesize playableRange=_playableRange;
@property(nonatomic) unsigned int controlStyle; // @synthesize controlStyle=_controlStyle;
@property(nonatomic) BOOL usesExternalPlaybackWhileExternalScreenIsActive; // @synthesize usesExternalPlaybackWhileExternalScreenIsActive=_usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) BOOL loopEnabled; // @synthesize loopEnabled=_loopEnabled;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) BOOL didStartPlaying; // @synthesize didStartPlaying=_didStartPlaying;
@property(nonatomic) BOOL shouldHideToolbar; // @synthesize shouldHideToolbar=_shouldHideToolbar;
@property(nonatomic) CDStruct_1b6d18a9 coverImagePreviewCaptureTime; // @synthesize coverImagePreviewCaptureTime=_coverImagePreviewCaptureTime;
@property(retain, nonatomic) NSURL *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(nonatomic) unsigned int coverMode; // @synthesize coverMode=_coverMode;
@property(nonatomic) unsigned int contentState; // @synthesize contentState=_contentState;
@property(nonatomic) BOOL didFinishPlaying; // @synthesize didFinishPlaying=_didFinishPlaying;
@property(retain, nonatomic) NSError *contentError; // @synthesize contentError=_contentError;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (void).cxx_destruct;
- (id)internalPlayer;
- (void)reachabilityDidChangeNotification:(id)arg1;
- (void)wirelessRoutesAvailableDidChangeNotification:(id)arg1;
- (void)didPlayToEnd;
- (void)playerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)didBeginScrubbing;
- (void)didEndScrubbing;
- (void)updateScrubberView;
- (void)didSelectRouteOptions;
- (void)didTap:(id)arg1;
- (void)setToolbarHidden:(BOOL)arg1;
- (void)stopToolbarFadeTimer;
- (void)startToolbarFadeTimer;
- (void)toolbarFadeTimerDidFire:(id)arg1;
- (void)setShouldHideToolbar:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)effectiveShouldHideToolbar;
- (void)updateSeekStateIfNecessary;
- (void)updateHasVideoTrack;
- (int)viewStateFromContentState;
- (void)updateToolbarView;
- (void)updatePlaceholderView;
- (void)updateCoverView;
- (void)updateView;
- (void)captureVideoPreviewImage;
- (void)mediaPlayerViewDidEndScrubbing:(id)arg1;
- (void)mediaPlayerView:(id)arg1 didScrubToTime:(double)arg2;
- (void)mediaPlayerViewDidBeginScrubbing:(id)arg1;
- (void)mediaPlayerView:(id)arg1 performControlEvent:(int)arg2;
- (void)playerDidPreroll:(id)arg1;
- (void)player:(id)arg1 timeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)player:(id)arg1 statusDidChange:(int)arg2;
- (void)player:(id)arg1 externalPlaybackActiveDidChange:(BOOL)arg2;
- (void)player:(id)arg1 rateDidChange:(float)arg2;
- (void)player:(id)arg1 didSeekToTime:(CDStruct_1b6d18a9)arg2;
- (void)prepareForPlayback;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (BOOL)shouldPauseOtherInstances;
- (void)play;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) BOOL externalPlaybackActive;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
- (void)statusDidChange:(int)arg1;
- (void)loadedTimeRangesDidChange:(id)arg1;
- (void)tracksDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)tearDownPlayer;
- (void)tearDownPlayerItem;
- (void)dealloc;
- (void)setUpPlayer;
- (void)setUpPlayerItemAndImageGeneratorWithContentURL:(id)arg1;
- (void)setUpDefaultValues;
- (void)setUpNotifications;
- (void)setUpTapGestureRecognizer;
- (id)initWithContentURL:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <PSPDFMediaPlayerControllerDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

