//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPageViewController.h"

#import "PSPDFScrollViewStateRestoration.h"
#import "PSPDFTransitionHelperDelegate.h"
#import "PSPDFTransitionProtocol.h"
#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"

@class NSArray, NSString, PSPDFContentScrollView, PSPDFTransitionHelper, PSPDFViewState;

@interface PSPDFPageViewController : UIPageViewController <PSPDFTransitionHelperDelegate, PSPDFScrollViewStateRestoration, PSPDFTransitionProtocol, UIPageViewControllerDelegate, UIPageViewControllerDataSource>
{
    struct CGRect _pageRect;
    NSArray *_visibleViewControllers;
    struct {
        unsigned int isAnimatingProgrammaticPageChange:1;
        unsigned int updateInsetsScheduled:1;
    } _flags;
    BOOL _useSolidBackground;
    BOOL _clipToPageBoundaries;
    PSPDFContentScrollView *_scrollView;
    id <PSPDFPresentationContext> _presentationContext;
    PSPDFTransitionHelper *_transitionHelper;
    PSPDFViewState *_capturedState;
}

@property(retain, nonatomic) PSPDFViewState *capturedState; // @synthesize capturedState=_capturedState;
@property(retain, nonatomic) PSPDFTransitionHelper *transitionHelper; // @synthesize transitionHelper=_transitionHelper;
@property(nonatomic) BOOL clipToPageBoundaries; // @synthesize clipToPageBoundaries=_clipToPageBoundaries;
@property(nonatomic) BOOL useSolidBackground; // @synthesize useSolidBackground=_useSolidBackground;
@property(readonly, nonatomic) __weak id <PSPDFPresentationContext> presentationContext; // @synthesize presentationContext=_presentationContext;
@property(nonatomic) __weak PSPDFContentScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
@property(nonatomic) BOOL twoFingerModeEnabled;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (int)pageViewController:(id)arg1 spineLocationForInterfaceOrientation:(int)arg2;
- (void)setupPageViewControllersDualPaged:(BOOL)arg1 spineLocation:(int)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)transitionHelper:(id)arg1 changedToPage:(unsigned int)arg2 doublePageMode:(BOOL)arg3 forwardTransition:(BOOL)arg4 options:(id)arg5 animated:(BOOL)arg6;
- (void)finalizeSizeChangeForScrollView:(id)arg1;
- (void)scrollView:(id)arg1 didChangeFrameSizeFrom:(struct CGSize)arg2;
- (void)scrollView:(id)arg1 willChangeFrameSizeTo:(struct CGSize)arg2;
- (id)scrollView:(id)arg1 pageViewForPage:(unsigned int)arg2;
- (struct CGRect)effectiveViewPortForScrollView:(id)arg1 forcingLayout:(BOOL)arg2;
- (id)visiblePageViews;
- (void)updateInsetsIfNeeded;
- (void)setNeedsUpdateInsets;
- (id)captureCurrentViewState;
- (void)applyViewState:(id)arg1;
- (id)pageViewForPage:(unsigned int)arg1;
- (id)visibleViewControllers;
- (id)visiblePages;
- (void)setPage:(unsigned int)arg1 options:(id)arg2 animated:(BOOL)arg3;
- (void)updateControlsWithFinished:(BOOL)arg1;
- (void)updateContentSizeOfScrollView:(id)arg1 forFrameSize:(struct CGSize)arg2;
- (void)setupViewControllersDoubleSided:(BOOL)arg1 animated:(BOOL)arg2 direction:(int)arg3 spineLocation:(int)arg4 options:(id)arg5;
- (void)updateViewSizeIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
@property(readonly, copy) NSString *description;
- (id)initWithPresentationContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitionStyle:(int)arg1 navigationOrientation:(int)arg2 options:(id)arg3;
- (Class)classForClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
