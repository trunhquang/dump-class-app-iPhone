//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBComposerCropViewControllerDelegate.h"
#import "FBComposerDoodlesViewControllerDelegate.h"
#import "FBComposerPhotoOverlayViewControllerDelegate.h"
#import "FBCropViewControllerDelegate.h"
#import "FBFilterBarControllerDelegate.h"
#import "FBMediaGalleryBannerTapHandlerProtocol.h"
#import "FBMediaGalleryBottomBarDelegate.h"
#import "FBMediaGalleryTopBarDelegate.h"
#import "FBMediaGalleryViewDelegate.h"
#import "FBMediaViewControllerProtocol.h"
#import "FBPagingViewDelegate.h"
#import "FBPagingViewInfiniteDataSource.h"
#import "SPPhotoViewDelegate.h"

@class FBComposerCropViewController, FBComposerDoodlesViewController, FBComposerStickersViewController, FBComposerTextOnPhotosViewController, FBCropViewController, FBFilterBarController, FBKVOController, FBMediaGalleryBottomBar, FBMediaGallerySecondaryBar, FBMediaGalleryTopBar, FBMediaGalleryView, FBMediaImageManager, FBMediaPickerSession, FBMediaShareItem, FBNumericalScenePathContext, FBPagingView, FBPhotoAsset, FBScenePath, NSString, SPPhotoView, SPTopBar, UIImage, UIView, UIViewController<FBMediaGalleryToolProtocol>;

@interface FBMediaGalleryViewController : UIViewController <FBPagingViewDelegate, FBPagingViewInfiniteDataSource, FBCropViewControllerDelegate, SPPhotoViewDelegate, FBMediaGalleryBottomBarDelegate, FBMediaGalleryViewDelegate, FBFilterBarControllerDelegate, FBMediaGalleryTopBarDelegate, FBComposerPhotoOverlayViewControllerDelegate, FBComposerCropViewControllerDelegate, FBMediaGalleryBannerTapHandlerProtocol, FBComposerDoodlesViewControllerDelegate, FBMediaViewControllerProtocol>
{
    BOOL _presentedFromCamera;
    BOOL _needToShowTapToTag;
    BOOL _galleryNuxShown;
    FBMediaImageManager *_mediaImageManager;
    FBComposerCropViewController *_composerCropViewController;
    FBComposerDoodlesViewController *_doodlesViewController;
    BOOL _faceRecognitionEnabled;
    BOOL _preventPhotoPagingWhileAnimating;
    BOOL _needToGoToComposer;
    BOOL _allowPaging;
    BOOL _aToolIsPresenting;
    id <FBMediaGalleryBannerProviderProtocol> _bannerProvider;
    UIViewController *_bannerViewController;
    CDUnknownBlockType _blockToExecuteAfterCurrentToolsDismissal;
    NSString *_currentAssetIDForLoggingEntrance;
    FBScenePath *_currentScenePath;
    NSString *_currentTitle;
    unsigned int _currentToolType;
    UIViewController<FBMediaGalleryToolProtocol> *_currentToolViewController;
    BOOL _disableAutoRotate;
    unsigned int _initialTool;
    UIImage *_imageForInitialTool;
    BOOL _inUnifiedMediaGalleryExperiment;
    BOOL _navigatingBack;
    BOOL _pagingDisabled;
    UIView *_privacyMessageView;
    FBNumericalScenePathContext *_scenePathContext;
    FBMediaGallerySecondaryBar *_secondaryBar;
    BOOL _showTaggingMode;
    FBComposerStickersViewController *_stickersViewController;
    FBComposerTextOnPhotosViewController *_textOnPhotosViewController;
    double _timeStampOfEnteringGallery;
    BOOL _showAll;
    BOOL _lightWeightCroppingEnabled;
    BOOL _isCurrentlyBeingPresented;
    BOOL _filterMode;
    BOOL _willPresent;
    id <FBMediaGalleryViewControllerDelegate> _delegate;
    int _currentPhotoIndex;
    FBMediaGalleryTopBar *_galleryTopBar;
    FBMediaGalleryBottomBar *_bottomBar;
    NSString *_focusedFaceBoxID;
    unsigned int _presentationSource;
    unsigned int _taggingMode;
    FBPhotoAsset *_currentPhotoAsset;
    FBKVOController *_observation;
    FBMediaGalleryView *_galleryView;
    FBFilterBarController *_filterBarController;
    FBCropViewController *_cropViewController;
    FBMediaShareItem *_itemToUnselect;
    id <FBAvatarTaggingSectionDataSource> _tagSearchDataSource;
    FBMediaPickerSession *_session;
    id <FBMediaDataSourceProtocol> _currentDataSource;
    unsigned int _swipeCount;
    struct CGRect _checkMarkImageFrame;
}

+ (id)mediaPickerGalleryReturnReasonStringForReason:(unsigned int)arg1;
@property(nonatomic) unsigned int swipeCount; // @synthesize swipeCount=_swipeCount;
@property(retain, nonatomic) id <FBMediaDataSourceProtocol> currentDataSource; // @synthesize currentDataSource=_currentDataSource;
@property(retain, nonatomic) FBMediaPickerSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <FBAvatarTaggingSectionDataSource> tagSearchDataSource; // @synthesize tagSearchDataSource=_tagSearchDataSource;
@property(retain, nonatomic) FBMediaShareItem *itemToUnselect; // @synthesize itemToUnselect=_itemToUnselect;
@property(retain, nonatomic) FBCropViewController *cropViewController; // @synthesize cropViewController=_cropViewController;
@property(retain, nonatomic) FBFilterBarController *filterBarController; // @synthesize filterBarController=_filterBarController;
@property(retain, nonatomic) FBMediaGalleryView *galleryView; // @synthesize galleryView=_galleryView;
@property(retain, nonatomic) FBKVOController *observation; // @synthesize observation=_observation;
@property(retain, nonatomic) FBPhotoAsset *currentPhotoAsset; // @synthesize currentPhotoAsset=_currentPhotoAsset;
@property(nonatomic) unsigned int taggingMode; // @synthesize taggingMode=_taggingMode;
@property(nonatomic) BOOL willPresent; // @synthesize willPresent=_willPresent;
@property(nonatomic) BOOL filterMode; // @synthesize filterMode=_filterMode;
@property(nonatomic) BOOL isCurrentlyBeingPresented; // @synthesize isCurrentlyBeingPresented=_isCurrentlyBeingPresented;
@property(nonatomic) unsigned int presentationSource; // @synthesize presentationSource=_presentationSource;
@property(copy, nonatomic) NSString *focusedFaceBoxID; // @synthesize focusedFaceBoxID=_focusedFaceBoxID;
@property(nonatomic) BOOL lightWeightCroppingEnabled; // @synthesize lightWeightCroppingEnabled=_lightWeightCroppingEnabled;
@property(readonly, nonatomic) BOOL presentedFromCamera; // @synthesize presentedFromCamera=_presentedFromCamera;
@property(nonatomic) BOOL showAll; // @synthesize showAll=_showAll;
@property(readonly, nonatomic) FBMediaGalleryBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(readonly, nonatomic) FBMediaGalleryTopBar *galleryTopBar; // @synthesize galleryTopBar=_galleryTopBar;
@property(nonatomic) int currentPhotoIndex; // @synthesize currentPhotoIndex=_currentPhotoIndex;
@property(readonly, nonatomic) struct CGRect checkMarkImageFrame; // @synthesize checkMarkImageFrame=_checkMarkImageFrame;
@property(nonatomic) __weak id <FBMediaGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)composerDoodlesViewControllerDidHitCancel:(id)arg1;
- (void)composerDoodlesViewControllerDidHitDone:(id)arg1 didHitNavBarDone:(BOOL)arg2 didAddDoodles:(BOOL)arg3 imageWithDoodlesApplied:(id)arg4;
- (void)_dismissDoodlesViewController;
- (void)didTapBanner;
- (void)composerCropViewControllerDidFinishAnimatingToCropping:(id)arg1;
- (void)composerCropViewControllerDidCancelCrop:(id)arg1;
- (void)composerCropViewControllerDidConfirmCrop:(id)arg1 didHitNavBarDone:(BOOL)arg2;
- (void)_dismissCropViewControllerCompletion:(CDUnknownBlockType)arg1;
- (void)composerPhotoOverlayAttachmentsViewControllerDidHitDone:(id)arg1 didHitNavBarDone:(BOOL)arg2 didChangePhotoOverlay:(BOOL)arg3 imageWithPhotoOverlayApplied:(id)arg4;
- (void)composerPhotoOverlayAttachmentsViewControllerDidHitCancel:(id)arg1;
- (void)_applyPhotoOverlayAttachmentsLayer:(id)arg1 photoOverlayAttachmentsInformation:(id)arg2 imageWithPhotoOverlayApplied:(id)arg3;
- (void)_dismissPhotoOverlayController:(id)arg1;
- (id)imageViewToUseForTransitionFromMediaGallery;
- (struct CGRect)prepareForAnimatingToMediaGallery;
- (void)_setDefaultBackgroundColor;
- (id)_currentImageViewBeingShown;
- (void)finishedAnimatingToMediaGalleryWithFaceboxIDToFocusOn:(id)arg1;
- (void)reset;
- (unsigned int)presentationAssetType;
@property(readonly, nonatomic) SPTopBar *topBar;
- (int)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)viewControllerNeedsNavigationUpdate;
- (struct CGRect)_fullScreenMediaFrameForCurrentPhotoView;
- (void)_updateTagDecoratorWithFilterMode:(BOOL)arg1;
- (struct CGRect)_galleryFrameWithLayoutGuide:(id)arg1;
- (struct CGRect)_filterBarFrame;
- (struct CGRect)_topBarFrame;
- (struct CGRect)_secondaryBarFrame;
- (struct CGRect)_privacyMessageFrame;
- (struct CGRect)_bannerFrame;
- (struct CGRect)_bottomBarFrame;
- (void)_didConfirmCompositionWithCurrentPhotoAssetShown:(id)arg1;
- (void)_didConfirmComposition;
- (void)_showTapToTagIfNeeded;
- (struct CGPoint)_luxNuxFocalPoint;
- (BOOL)_adjustCurrentPhotoIndex;
- (void)_jumpToPhotoAtPhotoIndex:(unsigned int)arg1;
- (id)_pageForPhotoIndex:(unsigned int)arg1;
- (id)_getOrMakePhotoAssetAtPhotoIndex:(unsigned int)arg1;
- (int)_photoIndexFrom:(int)arg1 searchForward:(BOOL)arg2;
- (void)_toggleSelectionInAllMode:(BOOL)arg1 needToGotoComposer:(BOOL)arg2;
- (void)_returnAnimated:(BOOL)arg1 withReason:(unsigned int)arg2 fromFrame:(struct CGRect)arg3;
- (void)_returnAnimated:(BOOL)arg1 withReason:(unsigned int)arg2;
- (void)_unselectItemInSelectedMode:(id)arg1;
- (void)_unselectItem:(id)arg1;
- (void)_dismissTaggingAndDisableTopBarWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissChildToolViewController:(id)arg1;
- (void)_dismissCropView;
- (void)_cancelCrop;
- (void)_applyCrop:(id)arg1;
- (void)_embedChildToolViewController:(id)arg1;
- (void)_updateTitleWithCurrentTool;
- (id)_titleForTool:(unsigned int)arg1;
- (void)_setToolButtonsAndTopButtonsEnabled:(BOOL)arg1;
- (void)_updateCurrentToolTypeAndTitleWithToolType:(unsigned int)arg1;
- (void)_loadCropScreenWithImage:(id)arg1 withPreviousCropInfo:(id)arg2;
- (void)_loadDoodleScreenWithBaseImage:(id)arg1 currentPhotoAsset:(id)arg2;
- (void)_loadTextScreenWithBaseImage:(id)arg1 currentPhotoAsset:(id)arg2;
- (void)_loadStickerScreenWithBaseImage:(id)arg1 currentPhotoAsset:(id)arg2 isInitialTool:(BOOL)arg3;
- (id)_topBarConfigurationForTool:(unsigned int)arg1;
- (void)_navigateToDoodleViewController;
- (void)_navigateToTextViewController;
- (void)_navigateToStickersViewController;
- (void)_navigateToCropViewController;
- (int)_cropBehavior;
- (void)_prepareForNavigatingToATool;
- (BOOL)_imageIsNotReadyToBeChanged;
- (void)_dismissCurrentToolIfNecessaryForTool:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resetImageViewZoomAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_informCurrentToolToDismissWithToolPressed:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dismissTaggingToolAnimated:(BOOL)arg1;
- (void)_enableTaggingToolAnimated:(BOOL)arg1;
- (void)_updateNavigationLabel;
- (void)_updateEditButtonsEnabledIfNeededWithPhotoAsset:(id)arg1;
- (void)_updateUIForPhotoAsset:(id)arg1;
- (void)_setBackButtonHidden:(BOOL)arg1;
- (void)_updateTopBarTitleValue:(unsigned int)arg1;
- (void)_updateTopBarForPhoto;
- (BOOL)_isFromMultiPhotoTool;
- (void)_updateFilterBarThumbnailIfNeededForPhotoAsset:(id)arg1 filterMode:(BOOL)arg2;
- (void)_updateUIForLuxApplied:(BOOL)arg1;
- (void)_datasourceDidChangeAssets:(id)arg1;
- (BOOL)_isPresentingAndWillReloadAfterPresenting;
- (BOOL)_isNormalCPUFilterState:(id)arg1;
- (BOOL)_shouldResetToNormalFilterWithSelectedCPUFilterState:(id)arg1 isSameFilterSelectedTwice:(BOOL)arg2;
- (BOOL)_shouldResetToNormalFilterWithSelectedFilter:(id)arg1 isSameFilterSelectedTwice:(BOOL)arg2;
- (void)_setDoneButtonEnabled:(BOOL)arg1;
- (void)_didTapDoneButton;
- (void)_showTapToTagLabel;
- (void)_updateSecondaryBarForTag;
- (void)_emptySecondaryBar;
- (void)_updateSecondaryBarWithCurrentToolType:(unsigned int)arg1;
- (void)_pushInitialTool;
- (void)_createBannerViewController;
- (void)_setUpInitialTool;
- (void)_setUpStickerToolAsInitialTool;
- (void)_setUpCropToolAsInitialTool;
- (void)_logMediaGalleryEntrance;
- (void)_logTimeInMediaGallery;
- (void)_setTagAsInitialTool;
- (void)_setTopBarTitle:(id)arg1;
- (void)_logEvent:(id)arg1 info:(id)arg2;
- (void)_logEvent:(id)arg1;
- (void)galleryViewDidShowTapToTag:(id)arg1;
- (void)galleryViewDidHideTapToTag:(id)arg1;
- (void)_tagAnywherePressed:(id)arg1;
- (void)setTaggingMode:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_setTagsVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setFaceboxesHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)cropViewControllerDidCancelCrop:(id)arg1;
- (void)cropViewControllerDidConfirmCrop:(id)arg1;
- (void)didSelectCPUFilterState:(id)arg1 withPreview:(id)arg2;
- (void)didSelectFilter:(id)arg1 withPreview:(id)arg2;
- (void)_selectPhotoAndNavigateBack;
- (void)galleryTopBarDidTapSelectButton:(id)arg1;
- (void)_navigateBackFromFrame:(struct CGRect)arg1;
- (void)_navigateBack;
- (void)galleryTopBarDidTapBackButton:(id)arg1;
- (BOOL)_hasSquarePhoto;
- (void)_luxButtonWasPressed;
- (void)_setTaggingModeIfLowEndDevice;
- (void)bottomBarDidTapLuxButton:(id)arg1;
- (void)_filterButtonWasPressed;
- (void)bottomBarDidTapFilterButton:(id)arg1;
- (void)bottomBarDidTapDoodleButton:(id)arg1;
- (void)bottomBarDidTapTextButton:(id)arg1;
- (void)bottomBarDidTapStickerButton:(id)arg1;
- (void)bottomBarDidTapCropButton:(id)arg1;
- (void)_tagButtonWasPressedAndOptimisticallySelected:(BOOL)arg1;
- (void)bottomBarDidTapTagButton:(id)arg1;
- (id)bestDisplayImageForPhotoAsset:(id)arg1;
- (void)photoViewDidZoom:(id)arg1 scrollView:(id)arg2 frameBeforeBounce:(struct CGRect)arg3;
- (void)photoViewFaceboxesHiddenDidChange:(id)arg1 animated:(BOOL)arg2;
- (void)photoViewTagsVisibleDidChange:(id)arg1 animated:(BOOL)arg2;
- (void)photoViewFaceFeaturesReady:(id)arg1;
- (void)photoViewDidFinishTagging:(id)arg1;
- (void)photoViewDidStartTagging:(id)arg1;
- (void)recyclePhotoAsset:(id)arg1;
- (void)photoAssetPreparerCancelForPhotoAsset:(id)arg1;
- (id)photoAssetPreparerForPhotoAsset:(id)arg1;
- (void)pagingView:(id)arg1 disposeViewData:(id)arg2;
- (void)pagingViewDidEndScrollingAnimation:(id)arg1;
- (void)pagingViewDidChangePageIndex:(id)arg1;
- (BOOL)pagingView:(id)arg1 shouldRecycleView:(id)arg2;
- (id)pagingView:(id)arg1 previousViewForView:(id)arg2;
- (id)pagingView:(id)arg1 nextViewForView:(id)arg2;
- (unsigned int)_pageCountIncludingUnpagedPhotosDuringAnimation:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDismiss:(BOOL)arg1;
- (void)viewIsDismissingWithAnimation;
- (void)viewWillDismiss:(BOOL)arg1;
- (void)viewDidPresent:(BOOL)arg1;
- (void)viewIsPresentingWithAnimation;
- (void)viewWillPresent:(BOOL)arg1;
- (void)willPresentMediaAtDataSourceIndex:(unsigned int)arg1 fromCamera:(BOOL)arg2 showAll:(BOOL)arg3 allowPaging:(BOOL)arg4 showTaggingMode:(BOOL)arg5 source:(unsigned int)arg6 forDataSource:(id)arg7;
- (BOOL)hasMultiSelectSupport;
- (void)animatePagingBackgroundColor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_startObservingPhotoAsset:(id)arg1;
- (void)_setFilterMode:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) FBPagingView *pagingView;
@property(readonly, nonatomic) SPPhotoView *currentPhotoView;
- (void)resetAutoTagging;
- (BOOL)shouldAutorotate;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setImageForInitialTool:(id)arg1;
- (BOOL)isProfilePictureMode;
- (id)initWithSession:(id)arg1 unifiedMediaGalleryEnabled:(BOOL)arg2 initialTool:(unsigned int)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
