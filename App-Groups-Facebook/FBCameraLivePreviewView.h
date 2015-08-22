//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIImage, UIImageView, UILabel;

@interface FBCameraLivePreviewView : UIView
{
    UIView *_cancelOverlayView;
    BOOL _enableVideo;
    UIImageView *_freezeImageView;
    UIView *_overlayView;
    BOOL _resizePreviewLayer;
    float _transitionProgress;
    BOOL _showInstructionLabelAtBottom;
    CALayer *_livePreviewLayer;
    UIImage *_freezeImage;
    UILabel *_captureInstructionsLabel;
    UILabel *_cancelSendHelpLabel;
}

@property(readonly, nonatomic) UILabel *cancelSendHelpLabel; // @synthesize cancelSendHelpLabel=_cancelSendHelpLabel;
@property(readonly, nonatomic) UILabel *captureInstructionsLabel; // @synthesize captureInstructionsLabel=_captureInstructionsLabel;
@property(retain, nonatomic) UIImage *freezeImage; // @synthesize freezeImage=_freezeImage;
@property(readonly, nonatomic) UIView *cancelOverlayView; // @synthesize cancelOverlayView=_cancelOverlayView;
@property(retain, nonatomic) CALayer *livePreviewLayer; // @synthesize livePreviewLayer=_livePreviewLayer;
- (void).cxx_destruct;
- (void)setPreviewRotationAngle:(float)arg1;
- (void)_updateLabelVisibility;
- (void)setTransitionProgress:(float)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 enableVideo:(BOOL)arg2 overlayView:(id)arg3 resizePreviewLayer:(BOOL)arg4 showInstructionLabelAtBottom:(BOOL)arg5;

@end

