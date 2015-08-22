//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGOverlayLabelView;

@interface IGAudioNUXController : NSObject
{
    BOOL _pendingShowingNUX;
    BOOL _hasShownPlaybackNUX;
    id <IGAudioNUXControllerDelegate> _delegate;
    IGOverlayLabelView *_audioNUXView;
}

@property(nonatomic) BOOL hasShownPlaybackNUX; // @synthesize hasShownPlaybackNUX=_hasShownPlaybackNUX;
@property(nonatomic, getter=isPendingShowingNUX) BOOL pendingShowingNUX; // @synthesize pendingShowingNUX=_pendingShowingNUX;
@property(retain, nonatomic) IGOverlayLabelView *audioNUXView; // @synthesize audioNUXView=_audioNUXView;
@property(nonatomic) __weak id <IGAudioNUXControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideNUX;
- (void)showNUXWithDuration:(float)arg1 message:(id)arg2;
- (void)showNUXForHardwareVolumeControl;
- (void)showOneTapIndicatorNUX;
- (void)showLegacyPlaybackNUX;
- (void)didTapOnVideo;
- (void)videoDidFinishPlaying;
- (void)videoDidStartPlaying;
- (void)showLegacyNUXIfNeeded;
- (void)didPressVolumeButton:(id)arg1;
- (void)didChangeMuteSwitch:(id)arg1;
- (void)observeHardwareButtonEvents:(BOOL)arg1;
- (void)dealloc;

@end
