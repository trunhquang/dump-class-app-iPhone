//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFScrollableImageViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class AFHUDView, AFInterfaceRenderInstance, AFProcessor, AFProgressHUDView, AFScrollableImageView, AFToolConfiguration, AFView, NSDictionary, NSString, NSTimer, UIBarButtonItem, UINavigationBar, UIView;

@interface AFToolViewController : UIViewController <UIAlertViewDelegate, AFScrollableImageViewDelegate>
{
    BOOL _willHandleImageViewResizing;
    BOOL _zoomEnabled;
    BOOL _rotating;
    BOOL _backButtonPressed;
    BOOL _applyButtonPressed;
    BOOL _shouldShowProgressView;
    BOOL _zoomPreviouslyEnabled;
    BOOL _readyToApply;
    BOOL _beganApply;
    id <AFToolViewControllerDelegate> _delegate;
    UINavigationBar *_navigationBar;
    AFScrollableImageView *_scrollableImageView;
    UIView *_scrollingAlignmentView;
    AFView *_staticOverlayView;
    AFView *_scrollableOverlayView;
    AFInterfaceRenderInstance *_renderInstance;
    UIBarButtonItem *_applyButton;
    UIBarButtonItem *_backButton;
    UIView *_backgroundView;
    AFToolConfiguration *_toolConfiguration;
    NSString *_analyticsKey;
    AFHUDView *_hudView;
    AFProgressHUDView *_progressHUDView;
    NSTimer *_hudTimer;
    NSDictionary *_scrollableImageViewSizeConstraints;
}

+ (id)toolTutorialVersionKey;
+ (id)latestToolTutorialVersion;
+ (id)editButtonConfirmationPrompt;
+ (BOOL)needsFullScreenOverlay;
+ (BOOL)usesStaticImageView;
+ (Class)staticOverlayViewClass;
+ (Class)scrollableOverlayViewClass;
+ (BOOL)requiresZoom;
+ (BOOL)permitsPrePost;
@property(retain, nonatomic) NSDictionary *scrollableImageViewSizeConstraints; // @synthesize scrollableImageViewSizeConstraints=_scrollableImageViewSizeConstraints;
@property(nonatomic) BOOL beganApply; // @synthesize beganApply=_beganApply;
@property(retain, nonatomic) NSTimer *hudTimer; // @synthesize hudTimer=_hudTimer;
@property(retain, nonatomic) AFProgressHUDView *progressHUDView; // @synthesize progressHUDView=_progressHUDView;
@property(nonatomic) __weak AFHUDView *hudView; // @synthesize hudView=_hudView;
@property(nonatomic, getter=isReadyToApply) BOOL readyToApply; // @synthesize readyToApply=_readyToApply;
@property(nonatomic, getter=wasZoomPreviouslyEnabled) BOOL zoomPreviouslyEnabled; // @synthesize zoomPreviouslyEnabled=_zoomPreviouslyEnabled;
@property(nonatomic) BOOL shouldShowProgressView; // @synthesize shouldShowProgressView=_shouldShowProgressView;
@property(copy, nonatomic) NSString *analyticsKey; // @synthesize analyticsKey=_analyticsKey;
@property(retain, nonatomic) AFToolConfiguration *toolConfiguration; // @synthesize toolConfiguration=_toolConfiguration;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) BOOL applyButtonPressed; // @synthesize applyButtonPressed=_applyButtonPressed;
@property(nonatomic) BOOL backButtonPressed; // @synthesize backButtonPressed=_backButtonPressed;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIBarButtonItem *applyButton; // @synthesize applyButton=_applyButton;
@property(nonatomic) __weak AFInterfaceRenderInstance *renderInstance; // @synthesize renderInstance=_renderInstance;
@property(nonatomic, getter=isRotating) BOOL rotating; // @synthesize rotating=_rotating;
@property(nonatomic, getter=isZoomEnabled) BOOL zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic) BOOL willHandleImageViewResizing; // @synthesize willHandleImageViewResizing=_willHandleImageViewResizing;
@property(retain, nonatomic) AFView *scrollableOverlayView; // @synthesize scrollableOverlayView=_scrollableOverlayView;
@property(retain, nonatomic) AFView *staticOverlayView; // @synthesize staticOverlayView=_staticOverlayView;
@property(retain, nonatomic) UIView *scrollingAlignmentView; // @synthesize scrollingAlignmentView=_scrollingAlignmentView;
@property(nonatomic) __weak AFScrollableImageView *scrollableImageView; // @synthesize scrollableImageView=_scrollableImageView;
@property(nonatomic) __weak UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) __weak id <AFToolViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setNavigationItemEnabled:(BOOL)arg1;
- (void)createNavButtons;
- (void)reportApplied;
- (void)reportApplied:(id)arg1;
- (void)reportCancelled;
- (void)reportOpened;
- (void)reportEvent:(id)arg1;
- (void)reportEvent:(id)arg1 attributes:(id)arg2;
- (void)showCurrent;
- (void)showOriginal;
- (void)adjustScrollableImageViewSize:(struct CGSize)arg1;
- (struct CGAffineTransform)imageViewTransformForRotation;
- (void)adjustScrollableImageViewSizing;
@property(readonly, nonatomic) AFProcessor *outputProcessor;
- (void)renderProcessor:(id)arg1 animated:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)renderProcessor:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateUIAndNotifyDelegateOfFinish;
- (void)finishApplying;
- (void)hideHUDView;
- (void)displayHUDView:(id)arg1 hideAutomatically:(BOOL)arg2;
- (BOOL)tutorialShouldShow;
- (void)presentTutorialIfNecessary;
- (void)applyButtonPressed:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)imageViewDidReceiveTouchUp:(id)arg1;
- (void)imageViewDidReceiveTouchDown:(id)arg1;
- (void)imageViewDidScroll:(id)arg1;
- (void)imageViewDidZoom:(id)arg1;
- (void)imageViewStoppedDragging:(id)arg1;
- (void)imageViewBeganDragging:(id)arg1;
- (void)imageViewStoppedZooming:(id)arg1;
- (void)imageViewBeganZooming:(id)arg1;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, nonatomic) float zoomScale; // @dynamic zoomScale;
@property(readonly, nonatomic) struct CGSize preferredScrollingViewSize; // @dynamic preferredScrollingViewSize;
- (void)presentTutorial;
- (void)resetScrollableImageViewSizing;
- (void)didDismissToolViewControllerAnimated:(BOOL)arg1;
- (void)willAnimateToolDismissalWithDuration:(float)arg1;
- (void)willDismissToolViewControllerAnimated:(BOOL)arg1;
- (void)didPresentToolViewControllerAnimated:(BOOL)arg1;
- (void)willAnimateToolPresentationWithDuration:(float)arg1;
- (void)willPresentToolViewControllerAnimated:(BOOL)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithRenderInstance:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

