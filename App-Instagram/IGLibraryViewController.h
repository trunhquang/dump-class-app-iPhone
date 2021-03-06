//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGBaseCameraViewController.h"

#import "IGAssetPlayerViewDelegate.h"
#import "IGCropViewUserInteractionDelegate.h"
#import "IGImagePickerViewControllerDelegate.h"
#import "IGLayoutAppInstallAlertViewControllerDelegate.h"
#import "IGScrollViewDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"

@class AVAsset, CIContext, IGAssetPlayerView, IGCameraGuideView, IGCircularProgressView, IGCropView, IGDirectedNUXView, IGEmptyLibraryView, IGImagePickerViewController, IGLabel, IGLibraryAsset, IGMediaMetadata, IGVideoInfo, IGVideoPlayButton, NSString, UIButton, UIGestureRecognizer, UIImage, UIImageView, UIView;

@interface IGLibraryViewController : IGBaseCameraViewController <IGImagePickerViewControllerDelegate, IGAssetPlayerViewDelegate, IGScrollViewDelegate, SKStoreProductViewControllerDelegate, IGLayoutAppInstallAlertViewControllerDelegate, IGCropViewUserInteractionDelegate>
{
    BOOL _accessDenied;
    BOOL _noMedia;
    BOOL _isAnimatingViewer;
    BOOL _isHidingViewer;
    BOOL _isPushingViewer;
    float _startingContentCenterY;
    float _currentRelativeY;
    float _startingPanOffset;
    UIImageView *_previewImageView;
    CIContext *_context;
    int _cropMode;
    BOOL _shouldShowLayoutOverlay;
    IGImagePickerViewController *_imagePicker;
    int _accessPoint;
    IGVideoInfo *_videoInfo;
    IGMediaMetadata *_mediaMetadata;
    UIView *_cropperContainer;
    IGCropView *_cropper;
    IGCameraGuideView *_guideView;
    UIImageView *_gripView;
    UIView *_toolbarFixedSpaceView;
    UIButton *_layoutAppLinkOverlayView;
    UIButton *_layoutAppLinkView;
    UIButton *_longcatToggleOverlayView;
    UIButton *_longcatToggleView;
    IGAssetPlayerView *_playerView;
    IGVideoPlayButton *_playButton;
    IGCircularProgressView *_progressView;
    UIGestureRecognizer *_photoTapGestureRecognizer;
    UIGestureRecognizer *_videoTapGestureRecognizer;
    IGLabel *_videoNotSupportedLabel;
    IGEmptyLibraryView *_noMediaView;
    IGDirectedNUXView *_NUXView;
    IGLibraryAsset *_selectedLibraryAsset;
    UIImage *_selectedImage;
    AVAsset *_selectedVideo;
}

@property(nonatomic) BOOL shouldShowLayoutOverlay; // @synthesize shouldShowLayoutOverlay=_shouldShowLayoutOverlay;
@property(retain, nonatomic) AVAsset *selectedVideo; // @synthesize selectedVideo=_selectedVideo;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) IGLibraryAsset *selectedLibraryAsset; // @synthesize selectedLibraryAsset=_selectedLibraryAsset;
@property(retain, nonatomic) IGDirectedNUXView *NUXView; // @synthesize NUXView=_NUXView;
@property(retain, nonatomic) IGEmptyLibraryView *noMediaView; // @synthesize noMediaView=_noMediaView;
@property(retain, nonatomic) IGLabel *videoNotSupportedLabel; // @synthesize videoNotSupportedLabel=_videoNotSupportedLabel;
@property(retain, nonatomic) UIGestureRecognizer *videoTapGestureRecognizer; // @synthesize videoTapGestureRecognizer=_videoTapGestureRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *photoTapGestureRecognizer; // @synthesize photoTapGestureRecognizer=_photoTapGestureRecognizer;
@property(retain, nonatomic) IGCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) IGVideoPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) IGAssetPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIButton *longcatToggleView; // @synthesize longcatToggleView=_longcatToggleView;
@property(retain, nonatomic) UIButton *longcatToggleOverlayView; // @synthesize longcatToggleOverlayView=_longcatToggleOverlayView;
@property(retain, nonatomic) UIButton *layoutAppLinkView; // @synthesize layoutAppLinkView=_layoutAppLinkView;
@property(retain, nonatomic) UIButton *layoutAppLinkOverlayView; // @synthesize layoutAppLinkOverlayView=_layoutAppLinkOverlayView;
@property(retain, nonatomic) UIView *toolbarFixedSpaceView; // @synthesize toolbarFixedSpaceView=_toolbarFixedSpaceView;
@property(retain, nonatomic) UIImageView *gripView; // @synthesize gripView=_gripView;
@property(retain, nonatomic) IGCameraGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) IGCropView *cropper; // @synthesize cropper=_cropper;
@property(retain, nonatomic) UIView *cropperContainer; // @synthesize cropperContainer=_cropperContainer;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(retain, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) int accessPoint; // @synthesize accessPoint=_accessPoint;
@property(retain, nonatomic) IGImagePickerViewController *imagePicker; // @synthesize imagePicker=_imagePicker;
- (void).cxx_destruct;
- (void)cropViewVisibleContentFrameDidChange:(struct CGRect)arg1;
- (void)layoutAppInstallAlertViewDidConfirm:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)showLayoutAppInstallAlertViewPopover;
- (void)onLayoutButtonTapped;
- (void)fadeLayoutOverlayWithDuration:(double)arg1 show:(BOOL)arg2;
- (void)fadeLongcatOverlayWithDuration:(double)arg1 show:(BOOL)arg2;
- (void)hideNUX;
- (void)showNUXWithTitle:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)showAccessDeniedDialog;
- (void)checkForMedia;
- (void)onCameraRollChanged;
- (void)onVideoTapped;
- (void)loadFullSizeImage:(id)arg1;
- (void)hidePreviewImageAnimated:(BOOL)arg1;
- (void)showPreviewImage:(id)arg1;
- (void)setCropperScalableView:(id)arg1;
- (void)imagePickerViewController:(id)arg1 didSelectAsset:(id)arg2 viaTap:(BOOL)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)panViewer:(id)arg1 state:(int)arg2;
- (void)panViewer:(id)arg1;
- (void)showViewer:(BOOL)arg1 duration:(float)arg2;
- (void)toggleViewer;
- (void)onViewerTap;
- (void)moveFocusToY:(float)arg1 forRelativePosition:(float)arg2;
- (void)focusForRelativePosition:(float)arg1;
- (BOOL)selectedPhotoIsCurrentlyVisible;
- (void)moveViewerToRelativePosition:(float)arg1 preventInsetChange:(BOOL)arg2;
- (void)showGrip:(BOOL)arg1 animated:(BOOL)arg2;
- (void)saveStartingContentOffset;
- (struct CGRect)visiblePickerFrameForRelativeY:(float)arg1;
- (float)maxTranslation;
- (float)topPaddingForViewerDismissal;
- (void)continueWithVideoClips;
- (void)continueWithPhoto;
- (void)onNextButtonTapped;
- (void)onBackButtonTapped;
- (void)onCancelButtonTapped;
- (void)updateNavbar;
- (void)toggleCropperCropMode;
- (void)toggleCropperCropModeFromButton;
- (void)updateCropperWithAsset:(id)arg1;
- (struct CGSize)contentSizeForVideo:(id)arg1;
- (BOOL)prefersToolbarHidden;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setUpAppropriateViews;
- (void)viewDidLoad;
- (void)applicationWillResignActive:(id)arg1;
- (BOOL)overlayIsOpaque;
- (id)initWithAccessPoint:(int)arg1 videoInfo:(id)arg2 mediaMetadata:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

