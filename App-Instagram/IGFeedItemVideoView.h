//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedMediaView.h"

#import "IGAudioNUXControllerDelegate.h"
#import "IGFeedVideoPlayerDelegate.h"
#import "IGImageProgressViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGAudioNUXController, IGFeedVideoPlayer, IGImageProgressView, IGPhoto, IGPost, IGVideo, IGVideoIndicatorView, IGVideoLoadProgressView, NSNumber, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface IGFeedItemVideoView : IGFeedMediaView <UIGestureRecognizerDelegate, IGImageProgressViewDelegate, IGAudioNUXControllerDelegate, IGFeedVideoPlayerDelegate>
{
    UITapGestureRecognizer *_doubleTapRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    IGVideoIndicatorView *_indicatorView;
    UIView *_videoView;
    IGPhoto *_photo;
    IGVideo *_video;
    IGPost *_post;
    double _videoShouldStartTime;
    BOOL _enableDoubleTapRecognizer;
    BOOL _hasStartedPlayback;
    BOOL _userDidTap;
    BOOL _loading;
    IGImageProgressView *_photoImageView;
    id <IGFeedItemVideoViewDelegate> _delegate;
    IGVideoLoadProgressView *_progressView;
    NSNumber *_lastPlaybackTime;
    int _originalPlaybackReason;
    NSNumber *_postAudioValue;
    IGAudioNUXController *_audioNUXController;
    IGFeedVideoPlayer *_player;
}

+ (float)heightForWidth:(float)arg1;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) IGFeedVideoPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) IGAudioNUXController *audioNUXController; // @synthesize audioNUXController=_audioNUXController;
@property(retain, nonatomic) NSNumber *postAudioValue; // @synthesize postAudioValue=_postAudioValue;
@property int originalPlaybackReason; // @synthesize originalPlaybackReason=_originalPlaybackReason;
@property(retain) NSNumber *lastPlaybackTime; // @synthesize lastPlaybackTime=_lastPlaybackTime;
@property BOOL userDidTap; // @synthesize userDidTap=_userDidTap;
@property BOOL hasStartedPlayback; // @synthesize hasStartedPlayback=_hasStartedPlayback;
@property(retain, nonatomic) IGVideoLoadProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) BOOL enableDoubleTapRecognizer; // @synthesize enableDoubleTapRecognizer=_enableDoubleTapRecognizer;
@property(nonatomic) __weak id <IGFeedItemVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)photoImageView;
- (void).cxx_destruct;
- (BOOL)isVideoHasSound;
- (BOOL)audioNUXControllerVideoHasSound:(id)arg1;
- (id)audioNUXControllerViewForNUX:(id)arg1;
- (BOOL)audioNUXControllerIsVideoPlaying:(id)arg1;
- (BOOL)audioNUXControllerIsPlayingSound:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onLongTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onTap:(id)arg1;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayer:(id)arg1 playbackBufferLikelyToKeepUp:(BOOL)arg2;
- (void)videoPlayer:(id)arg1 playbackBufferEmpty:(BOOL)arg2;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(float)arg2;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(float)arg2;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerLoadedFirstFrame:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 withDataLength:(unsigned int)arg3;
- (void)didUnplugHeadphones:(id)arg1;
- (void)observeHeadphoneEvent:(BOOL)arg1;
- (void)logVideoStoppedForPlayer:(id)arg1 reason:(int)arg2;
- (id)playbackTimesForPlayer:(id)arg1;
- (id)playbackAudioSettingsForPlayer:(id)arg1;
- (void)logVideoStoppedForReason:(int)arg1;
- (void)showOneTapIndicatorNUX;
- (void)showLegacyNUXIfNeeded;
@property(readonly, nonatomic) BOOL posterFrameLoaded;
- (id)relinquishPlayer;
- (void)playVideoURL:(id)arg1 withPlayer:(id)arg2;
- (void)playWithPlayer:(id)arg1;
- (void)showVideo:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showVideoIndication:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showAudioAvailable:(BOOL)arg1;
- (void)showIndicatorStyle:(int)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) BOOL hasPlaybackError;
@property(readonly, nonatomic) BOOL hasPlayer;
- (void)setVideo:(id)arg1 withImage:(id)arg2;
- (void)setVideo:(id)arg1 withPhoto:(id)arg2;
- (void)setPost:(id)arg1;
@property(readonly, nonatomic) IGPost *post;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
