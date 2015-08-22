//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAuthUIPresenting.h"
#import "UINavigationControllerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, UINavigationController;

@interface FBAuthUIPresenter : NSObject <UINavigationControllerDelegate, FBAuthUIPresenting>
{
    BOOL _topViewIsTransient;
    BOOL _navOperationQueueNeedsResume;
    BOOL _resetNavStackOnPush;
    id <FBAuthUIPresenterAnimationDelegate> _animationDelegate;
    CDUnknownBlockType _presentationBlock;
    UINavigationController *_navController;
    NSObject<OS_dispatch_queue> *_navOperationQueue;
}

@property(nonatomic) BOOL resetNavStackOnPush; // @synthesize resetNavStackOnPush=_resetNavStackOnPush;
@property(nonatomic) BOOL navOperationQueueNeedsResume; // @synthesize navOperationQueueNeedsResume=_navOperationQueueNeedsResume;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *navOperationQueue; // @synthesize navOperationQueue=_navOperationQueue;
@property(nonatomic) BOOL topViewIsTransient; // @synthesize topViewIsTransient=_topViewIsTransient;
@property(readonly, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
@property(readonly, copy, nonatomic) CDUnknownBlockType presentationBlock; // @synthesize presentationBlock=_presentationBlock;
@property(nonatomic) __weak id <FBAuthUIPresenterAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void).cxx_destruct;
- (void)_resumeQueue;
- (void)_pauseQueue;
- (void)_popViewControllerIfTop:(id)arg1 animated:(BOOL)arg2;
- (id)_newNavControllerWithRootViewController:(id)arg1;
- (void)_replaceTopViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_pushNonTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_onQueuePresentToastWithMessage:(id)arg1;
- (void)_onQueuePopTransientViewControllerAnimated:(BOOL)arg1;
- (void)_onQueuePopViewControllerAnimated:(BOOL)arg1;
- (void)_onQueueReplaceAllWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_onQueueReplaceTopViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_onQueueResetStackOnNextPush;
- (void)_onQueueSetTopViewControllerIsTransient:(BOOL)arg1;
- (void)_onQueuePushTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_onQueuePushViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)resetStackOnNextPush;
- (void)presentToastWithMessage:(id)arg1;
- (void)popTransientViewControllerAnimated:(BOOL)arg1;
- (void)popViewControllerAnimated:(BOOL)arg1;
- (void)replaceAllWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)replaceTopViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setTopViewControllerIsTransient:(BOOL)arg1;
- (void)pushTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithPresentationBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

