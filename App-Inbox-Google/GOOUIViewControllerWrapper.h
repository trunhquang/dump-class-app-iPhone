//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GOOUIViewController.h"

@class NSArray, NSMutableSet, NSString, UIView, UIViewController<GOOUIViewController>;

@interface GOOUIViewControllerWrapper : NSObject <GOOUIViewController>
{
    BOOL _isObservingViewController;
    NSArray *_observedControllerProperties;
    NSArray *_observedBarButtonItemProperties;
    NSMutableSet *_observedBarButtonItems;
    UIView *_headerView;
    UIViewController<GOOUIViewController> *_viewController;
    CDUnknownBlockType _willPopBlock;
    id <GOOUINavigationStateDelegate> _stateDelegate;
}

@property(nonatomic) __weak id <GOOUINavigationStateDelegate> stateDelegate; // @synthesize stateDelegate=_stateDelegate;
@property(copy, nonatomic) CDUnknownBlockType willPopBlock; // @synthesize willPopBlock=_willPopBlock;
@property(retain, nonatomic) UIViewController<GOOUIViewController> *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)extendHeaderViewToTopEdgeIfNecessary;
- (void)viewControllerWillBePopped;
- (void)viewControllerDidReceiveHeaderView:(id)arg1;
- (BOOL)shouldAutomaticallyUpdateHeaderView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingBarButtonItems:(id)arg1;
- (void)stopObserving;
- (void)startObservingBarButtonItems:(id)arg1;
- (void)startObserving;
- (id)updatableHeaderView;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)objectForwardingWithSelector:(SEL)arg1;
- (BOOL)shouldForwardSelector:(SEL)arg1 inProtocol:(id)arg2 toObject:(id)arg3;
- (void)animateViewportFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
@property(nonatomic) int statusBarStyle;
- (BOOL)hasStatusBarStyle;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (BOOL)footerCoversView;
- (void)footerDidDisappear;
- (void)footerDidAppear;
- (float)initialFooterHeight;
- (float)minimumViewHeight;
- (id)footerViewWithBounds:(struct CGRect)arg1;
- (void)prepareFooterViewWithBounds:(struct CGRect)arg1;
- (BOOL)controllerWantsCustomFooterView;
- (id)headerViewWithBounds:(struct CGRect)arg1;
- (BOOL)shouldCreateDefaultHeaderView;
- (BOOL)controllerWantsCustomHeaderView;
- (BOOL)hasFooterView;
- (BOOL)hidesHeaderView;
- (BOOL)isTransientController;
- (BOOL)hasView;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UIView *footerView;
@property(readonly) unsigned int hash;
@property(nonatomic) int headerTitleTextAlignment;
@property(readonly) Class superclass;

@end

