//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPercentDrivenInteractiveTransition.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerInteractiveTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class CBLPullDownScrollViewGestureRecognizer, NSString, UIScreenEdgePanGestureRecognizer, UIView, UIViewController;

@interface CBLBrowserTransition : UIPercentDrivenInteractiveTransition <UIViewControllerInteractiveTransitioning, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    BOOL _interactive;
    BOOL _presenting;
    id <UIViewControllerContextTransitioning> _transitionContext;
    unsigned int _dismissDirection;
    UIScreenEdgePanGestureRecognizer *_edgeGestureRecognizer;
    CBLPullDownScrollViewGestureRecognizer *_pullDownGesture;
    UIViewController *_browserViewController;
    float _locationStart;
    UIView *_dimView;
}

@property(retain, nonatomic) UIView *dimView; // @synthesize dimView=_dimView;
@property(nonatomic) float locationStart; // @synthesize locationStart=_locationStart;
@property(retain, nonatomic) UIViewController *browserViewController; // @synthesize browserViewController=_browserViewController;
@property(retain, nonatomic) CBLPullDownScrollViewGestureRecognizer *pullDownGesture; // @synthesize pullDownGesture=_pullDownGesture;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGestureRecognizer; // @synthesize edgeGestureRecognizer=_edgeGestureRecognizer;
@property(nonatomic) unsigned int dismissDirection; // @synthesize dismissDirection=_dismissDirection;
@property(nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
@property(nonatomic, getter=isInteractive) BOOL interactive; // @synthesize interactive=_interactive;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(float)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleGesture:(id)arg1;
- (void)setContentScrollView:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

