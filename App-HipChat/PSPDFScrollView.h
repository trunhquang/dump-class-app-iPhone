//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFAvoidingScrollView.h"

#import "PSPDFLongPressGestureRecognizerDelegate.h"
#import "PSPDFPageViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, PSPDFConfiguration, PSPDFDocument, PSPDFLoupeView, PSPDFPageView, PSPDFViewState, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface PSPDFScrollView : PSPDFAvoidingScrollView <PSPDFPageViewDelegate, PSPDFLongPressGestureRecognizerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    struct {
        unsigned int scrollViewIsDecelerating:1;
        unsigned int manuallyCenteredFrame:1;
        unsigned int isShowingRightPage:1;
        unsigned int isSettingUpPage:1;
        unsigned int menuWillHideCalled:1;
    } _flags;
    struct CGPoint _lastTapScreenPoint;
    UIView *_compoundView;
    BOOL _zoomingEnabled;
    BOOL _rotationActive;
    BOOL _configuredAsDoublePageMode;
    BOOL _animatingZoomIn;
    unsigned int _page;
    id <PSPDFPresentationContext> _presentationContext;
    PSPDFPageView *_leftPage;
    PSPDFPageView *_rightPage;
    PSPDFLoupeView *_loupeView;
    UITapGestureRecognizer *_singleTapGesture;
    UITapGestureRecognizer *_doubleTapGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    id <PSPDFScrollViewStateRestoration> _restorationHelperProxy;
}

@property(retain, nonatomic) id <PSPDFScrollViewStateRestoration> restorationHelperProxy; // @synthesize restorationHelperProxy=_restorationHelperProxy;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGesture; // @synthesize doubleTapGesture=_doubleTapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGesture; // @synthesize singleTapGesture=_singleTapGesture;
@property(nonatomic, getter=isAnimatingZoomIn) BOOL animatingZoomIn; // @synthesize animatingZoomIn=_animatingZoomIn;
@property(nonatomic, getter=isConfiguredAsDoublePageMode) BOOL configuredAsDoublePageMode; // @synthesize configuredAsDoublePageMode=_configuredAsDoublePageMode;
@property(nonatomic, getter=isRotationActive) BOOL rotationActive; // @synthesize rotationActive=_rotationActive;
@property(readonly, nonatomic) PSPDFLoupeView *loupeView; // @synthesize loupeView=_loupeView;
@property(nonatomic, getter=isZoomingEnabled) BOOL zoomingEnabled; // @synthesize zoomingEnabled=_zoomingEnabled;
@property(retain, nonatomic) PSPDFPageView *rightPage; // @synthesize rightPage=_rightPage;
@property(retain, nonatomic) PSPDFPageView *leftPage; // @synthesize leftPage=_leftPage;
@property(nonatomic) __weak id <PSPDFPresentationContext> presentationContext; // @synthesize presentationContext=_presentationContext;
@property(nonatomic) unsigned int page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)scrollViewPositionDidChange;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)setParentScrollViewScrollPagingEnabled:(BOOL)arg1;
- (id)parentScrollView;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)pressRecognizerShouldHandlePressImmediately:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)isInternalGestureRecognizer:(id)arg1;
- (id)objectsAtPoint:(struct CGPoint)arg1 options:(id)arg2;
- (void)HUDVisibilityDidChange;
- (void)setHalfModalVisible:(BOOL)arg1;
- (void)setKeyboardVisible:(BOOL)arg1;
- (struct CGRect)viewPort:(struct CGRect)arg1 inPDFCoordinatesOfPageView:(id)arg2;
@property(retain, nonatomic) PSPDFViewState *viewState;
- (void)commitAnimated:(BOOL)arg1 updates:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)restoreViewPortFromState:(id)arg1 withPageView:(id)arg2 andHelper:(id)arg3 inScrollViewPort:(struct CGRect)arg4;
- (void)finishStateRestorationWithHelper:(id)arg1;
- (void)beginStateRestorationWithHelper:(id)arg1;
- (void)setViewState:(id)arg1 animated:(BOOL)arg2;
- (void)updateScrollViewIndicator;
- (struct CGSize)boundsSize;
- (void)updateShadow;
- (id)pathShadowForView:(id)arg1;
- (void)zoomOut;
- (void)longPress:(id)arg1;
- (void)doubleTapped:(id)arg1;
- (id)selectedAnnotations;
- (void)menuDidHideNotification:(id)arg1;
- (void)menuWillHideNotification:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)processHUDToggleForTapAtPoint:(struct CGPoint)arg1;
- (void)processHUDToggle;
- (void)singleTapped:(id)arg1;
- (id)pageViewForPoint:(struct CGPoint)arg1;
- (id)visiblePageViews;
@property(readonly, nonatomic) PSPDFDocument *document;
@property(readonly, copy, nonatomic) PSPDFConfiguration *configuration;
@property(readonly, nonatomic, getter=isShowingRightPage) BOOL showingRightPage;
- (void)displayPage:(unsigned int)arg1;
- (void)updateAllowedZoomScale;
- (void)layoutPages;
- (void)switchPages;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;
- (void)zoomToRect:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)setZoomScale:(float)arg1 animated:(BOOL)arg2;
- (Class)pageViewClassForClass:(Class)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)ensureContentIsCenteredWithContentInsetReset:(BOOL)arg1;
- (void)ensureContentIsCentered;
- (void)layoutSubviews;
- (id)compoundView;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (BOOL)moveScrollViewDownWithDuration:(float)arg1 curve:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <PSPDFScrollViewStateRestoration> restorationHelper;
- (Class)classForClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

