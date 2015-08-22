//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBCropBottomBarDelegate.h"
#import "FBCropConstraintViewDelegate.h"
#import "FBCropOptionsBarViewDelegate.h"
#import "FBMediaGalleryToolProtocol.h"
#import "FBMediaTopNavigationBarDelegation.h"
#import "FBMoveAndScaleViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FBCropView, FBPhotoCropInfo, NSString, UIImage, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer;

@interface FBCropViewController : UIViewController <FBCropBottomBarDelegate, FBMediaTopNavigationBarDelegation, UIGestureRecognizerDelegate, FBCropConstraintViewDelegate, FBCropOptionsBarViewDelegate, FBMoveAndScaleViewDelegate, FBMediaGalleryToolProtocol>
{
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    BOOL _cropboxIsUserManipulable;
    BOOL _hideNavigationBar;
    BOOL _aspectRatioLockOn;
    BOOL _presetRotationButtonShown;
    BOOL _cropOptionsButtonShown;
    BOOL _freeformRotationGestureAllowed;
    BOOL _moveAndScaleViewShown;
    BOOL _cropboxShouldDrawInnerGrid;
    id <FBCropViewControllerDelegate> _delegate;
    NSString *_analyticsModule;
    NSString *_topBarTitle;
    UIImage *_imageToCrop;
    FBCropView *_cropView;
    id <FBMoveAndScaleViewProtocol> _moveAndScaleView;
    FBPhotoCropInfo *_startingCropConfiguration;
    int _behavior;
    unsigned int _mediaPickerStyle;
    CDUnknownBlockType _moveAndScaleFactory;
    struct CGSize _minimumCroppedSize;
    struct CGRect _startingContentFrame;
}

+ (CDUnknownBlockType)createDefaultMoveAndScaleFactory;
@property(copy, nonatomic) CDUnknownBlockType moveAndScaleFactory; // @synthesize moveAndScaleFactory=_moveAndScaleFactory;
@property(nonatomic) unsigned int mediaPickerStyle; // @synthesize mediaPickerStyle=_mediaPickerStyle;
@property(nonatomic) struct CGSize minimumCroppedSize; // @synthesize minimumCroppedSize=_minimumCroppedSize;
@property(nonatomic) struct CGRect startingContentFrame; // @synthesize startingContentFrame=_startingContentFrame;
@property(nonatomic) BOOL cropboxShouldDrawInnerGrid; // @synthesize cropboxShouldDrawInnerGrid=_cropboxShouldDrawInnerGrid;
@property(nonatomic) BOOL moveAndScaleViewShown; // @synthesize moveAndScaleViewShown=_moveAndScaleViewShown;
@property(nonatomic) BOOL freeformRotationGestureAllowed; // @synthesize freeformRotationGestureAllowed=_freeformRotationGestureAllowed;
@property(nonatomic) BOOL cropOptionsButtonShown; // @synthesize cropOptionsButtonShown=_cropOptionsButtonShown;
@property(nonatomic) BOOL presetRotationButtonShown; // @synthesize presetRotationButtonShown=_presetRotationButtonShown;
@property(nonatomic) BOOL aspectRatioLockOn; // @synthesize aspectRatioLockOn=_aspectRatioLockOn;
@property(nonatomic) int behavior; // @synthesize behavior=_behavior;
@property(retain, nonatomic) FBPhotoCropInfo *startingCropConfiguration; // @synthesize startingCropConfiguration=_startingCropConfiguration;
@property(retain, nonatomic) id <FBMoveAndScaleViewProtocol> moveAndScaleView; // @synthesize moveAndScaleView=_moveAndScaleView;
@property(retain, nonatomic) FBCropView *cropView; // @synthesize cropView=_cropView;
@property(retain, nonatomic) UIImage *imageToCrop; // @synthesize imageToCrop=_imageToCrop;
@property(nonatomic) BOOL hideNavigationBar; // @synthesize hideNavigationBar=_hideNavigationBar;
@property(copy, nonatomic) NSString *topBarTitle; // @synthesize topBarTitle=_topBarTitle;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(nonatomic) BOOL cropboxIsUserManipulable; // @synthesize cropboxIsUserManipulable=_cropboxIsUserManipulable;
@property(nonatomic) __weak id <FBCropViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mediaGalleryDidPressCurrentTool;
- (void)mediaGalleryWillPresentTool:(unsigned int)arg1;
- (unsigned int)getMediaGalleryToolType;
- (int)preferredStatusBarStyle;
- (void)cropOptionsBarView:(id)arg1 didSelectCropMode:(unsigned int)arg2;
- (void)cropConstraintViewDidTapRotateCropButton:(id)arg1;
- (BOOL)isBottomBarHidden;
- (void)hideBottomBar:(BOOL)arg1;
- (void)presetRotationButtonTapped:(id)arg1;
- (void)aspectRatioLockButtonTapped:(id)arg1;
- (void)setTransformToFullScreen;
- (void)animateFullImageToFullScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateFullImageToPreviousCropWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateCroppedImageToFullScreen:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cropBottomBarDidTapCropOptionsButton:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)didTapRightButton:(id)arg1;
- (void)didTapLeftButton:(id)arg1;
- (void)_didApplyCrop;
- (void)_didCancelCrop;
- (void)moveAndScaleViewDidZoom;
- (void)moveAndScaleViewDidDrag;
- (void)moveAndScaleViewDidConfirm:(id)arg1;
- (void)moveAndScaleViewDidCancel:(id)arg1;
- (struct CGRect)cropRectangleForImageSize:(struct CGSize)arg1;
- (struct CGRect)normalizedCropRectangle;
- (id)groupCoverPhotoStartingCropConfiguration;
- (id)portraitPictureStartingCropConfiguration;
- (struct CGSize)profilePictureMinimumCroppedSize;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)updateFrameToFitConstraintFrameAnimated:(BOOL)arg1;
- (void)updateFrameToFitMaxFrame:(struct CGRect)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)initialImageViewFrame;
- (struct ManipulationParams)manipulationParamsAdjustedToMaxConstraintFrame:(struct CGRect)arg1;
- (void)panReceived:(id)arg1;
- (void)scaleReceived:(id)arg1;
- (void)rotateReceived:(id)arg1;
- (BOOL)isManipulatingConstraintsFrame;
- (void)updateTransform;
- (void)updateTransformAnimated:(BOOL)arg1;
- (void)updateTransformAnimated:(BOOL)arg1 constraintFrame:(struct CGRect)arg2;
- (void)updateTransformAnimated:(BOOL)arg1 constraintFrame:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateConstraintFrameForCropMode:(unsigned int)arg1;
- (struct CGRect)closestConstraintFrameToFitGoalConstraintFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect currentCropRect;
@property(readonly, nonatomic) struct CGRect normalImageFrame;
- (void)hideCropContainerView;
- (id)cropContainerView;
@property(readonly, nonatomic) struct CGPoint currentUIImageOffset;
@property(readonly, nonatomic) float currentUIRotation;
- (void)swapInHighResolutionImage:(id)arg1;
- (id)getCurrentCropPointsInImageCoordinates;
@property(readonly, retain, nonatomic) FBPhotoCropInfo *currentCropInfo;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)setupCropView;
- (void)setupMoveAndScaleView;
- (void)loadView;
@property(readonly, nonatomic) unsigned int cropMode;
- (void)dealloc;
- (id)initWithImage:(id)arg1 contentFrame:(struct CGRect)arg2 previousCrop:(id)arg3 delegate:(id)arg4 behavior:(int)arg5 mediaPickerStyle:(unsigned int)arg6;
- (id)initWithImage:(id)arg1 contentFrame:(struct CGRect)arg2 previousCrop:(id)arg3 delegate:(id)arg4 behavior:(int)arg5 mediaPickerStyle:(unsigned int)arg6 moveAndScaleFactory:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

