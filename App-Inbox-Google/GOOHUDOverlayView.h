//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GOOHUDMessageView, GOOKeyboardWatcher, NSLayoutConstraint;

@interface GOOHUDOverlayView : UIView
{
    BOOL _manualLayoutChange;
    float _bottomOffset;
    GOOHUDMessageView *_HUDView;
    CDUnknownBlockType _pendingCompletionBlock;
    GOOKeyboardWatcher *_watcher;
    NSLayoutConstraint *_bottomConstraint;
    UIView *_containingView;
    double _rotationDuration;
}

@property(nonatomic) double rotationDuration; // @synthesize rotationDuration=_rotationDuration;
@property(nonatomic) BOOL manualLayoutChange; // @synthesize manualLayoutChange=_manualLayoutChange;
@property(retain, nonatomic) UIView *containingView; // @synthesize containingView=_containingView;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) GOOKeyboardWatcher *watcher; // @synthesize watcher=_watcher;
@property(copy, nonatomic) CDUnknownBlockType pendingCompletionBlock; // @synthesize pendingCompletionBlock=_pendingCompletionBlock;
@property(retain, nonatomic) GOOHUDMessageView *HUDView; // @synthesize HUDView=_HUDView;
@property(nonatomic) float bottomOffset; // @synthesize bottomOffset=_bottomOffset;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformEscape;
- (void)notifyOverlayChangeWithFrame:(struct CGRect)arg1 duration:(double)arg2 curve:(int)arg3 timingFunction:(id)arg4;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)layoutSubviews;
- (void)handleRotation;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)updateHUDPositionWithKeyboardUserInfo:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)slideInHUDView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fadeOutHUDView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fadeInHUDView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissHUDViewAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showHUDView:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)shouldUseFadeAnimationForShow;
- (struct CGRect)HUDRectInScreenCoordinates;
- (void)triggerHUDLayoutchange;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (float)sideMargin;
- (float)staticBottomMargin;
- (float)dynamicBottomMargin;
- (void)dealloc;
- (void)setupContainerConstraints;
- (id)initWithFrame:(struct CGRect)arg1 keyboardWatcher:(id)arg2;

@end

