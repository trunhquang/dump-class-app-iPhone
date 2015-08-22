//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, NSTimer, UIButton, UITapGestureRecognizer, UIView<InAppNotificationContentView>;

@interface InAppNotificationContainerView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isShowing;
    id <InAppNotificationContainerViewDelegate> _delegate;
    UIView<InAppNotificationContentView> *_contentView;
    UIView *_slidingView;
    UIButton *_closeButton;
    float _upY;
    float _downY;
    float _height;
    float _lastStatusBarHeight;
    NSTimer *_timer;
    NSTimer *_statusBarPollTimer;
    UITapGestureRecognizer *_singleTap;
}

@property(retain, nonatomic) UITapGestureRecognizer *singleTap; // @synthesize singleTap=_singleTap;
@property(retain, nonatomic) NSTimer *statusBarPollTimer; // @synthesize statusBarPollTimer=_statusBarPollTimer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) BOOL isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) float lastStatusBarHeight; // @synthesize lastStatusBarHeight=_lastStatusBarHeight;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float downY; // @synthesize downY=_downY;
@property(nonatomic) float upY; // @synthesize upY=_upY;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *slidingView; // @synthesize slidingView=_slidingView;
@property(retain, nonatomic) UIView<InAppNotificationContentView> *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <InAppNotificationContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hide;
- (void)showInView:(id)arg1 dismissalDelayInSeconds:(float)arg2;
- (void)showInView:(id)arg1;
- (void)layoutSubviews;
- (void)applyTransform;
- (void)updateFrame;
- (void)checkStatusBarHeight;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)removeFromView;
- (void)fadeOut;
- (void)slideOut;
- (void)invalidateTimers;
- (void)scheduleDismissAfterDelay:(float)arg1;
- (void)slideInView:(id)arg1 dismissalDelayInSeconds:(float)arg2;
- (void)closePressed:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleSingleTap:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
