//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFSupplyShopDetailViewController.h"

#import "AFCollectionViewSelectionControllerDelegate.h"
#import "AFPurchaseInfoViewDelegate.h"
#import "AFSupplyShopPreviewControllerDelegate.h"

@class AFCarouselBlurredImageManager, AFContentPack, AFGradientView, AFPurchaseInfoView, AFSupplyShopPreviewController, AFSupplyShopPreviewSelectionController, NSString, UIBarButtonItem, UICollectionView, UIImageView, UITextView, UIView;

@interface AFSupplyShopContentPackDetailViewController : AFSupplyShopDetailViewController <AFPurchaseInfoViewDelegate, AFCollectionViewSelectionControllerDelegate, AFSupplyShopPreviewControllerDelegate>
{
    BOOL _previewScrolling;
    BOOL _selectingPreview;
    AFPurchaseInfoView *_overlayView;
    UIImageView *_backgroundBlurView;
    UIImageView *_blurView;
    UIBarButtonItem *_closeButton;
    AFSupplyShopPreviewSelectionController *_previewSelectionController;
    UICollectionView *_selectionCollectionView;
    AFGradientView *_gradientView;
    AFSupplyShopPreviewController *_previewController;
    UICollectionView *_previewCollectionView;
    UIBarButtonItem *_buyBarButtonItem;
    UIView *_dividerView;
    AFCarouselBlurredImageManager *_blurredImageManager;
    UITextView *_selectedTextView;
    struct _NSRange _rangeOfSelectedTextView;
}

@property(nonatomic) struct _NSRange rangeOfSelectedTextView; // @synthesize rangeOfSelectedTextView=_rangeOfSelectedTextView;
@property(retain, nonatomic) UITextView *selectedTextView; // @synthesize selectedTextView=_selectedTextView;
@property(retain, nonatomic) AFCarouselBlurredImageManager *blurredImageManager; // @synthesize blurredImageManager=_blurredImageManager;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) UIBarButtonItem *buyBarButtonItem; // @synthesize buyBarButtonItem=_buyBarButtonItem;
@property(nonatomic, getter=isSelectingPreview) BOOL selectingPreview; // @synthesize selectingPreview=_selectingPreview;
@property(nonatomic, getter=isPreviewScrolling) BOOL previewScrolling; // @synthesize previewScrolling=_previewScrolling;
@property(retain, nonatomic) UICollectionView *previewCollectionView; // @synthesize previewCollectionView=_previewCollectionView;
@property(retain, nonatomic) AFSupplyShopPreviewController *previewController; // @synthesize previewController=_previewController;
@property(retain, nonatomic) AFGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UICollectionView *selectionCollectionView; // @synthesize selectionCollectionView=_selectionCollectionView;
@property(retain, nonatomic) AFSupplyShopPreviewSelectionController *previewSelectionController; // @synthesize previewSelectionController=_previewSelectionController;
@property(retain, nonatomic) UIBarButtonItem *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIImageView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) AFPurchaseInfoView *overlayView; // @synthesize overlayView=_overlayView;
- (void).cxx_destruct;
- (id)downloadImage;
- (id)purchaseImagePressed;
- (id)purchaseImage;
- (void)reportIndexSelected:(int)arg1 wasSwipe:(BOOL)arg2;
- (void)purchasableMetadataUpdated;
- (void)configureForMarketingAssetStateAnimated:(BOOL)arg1;
- (void)configureForPackState;
- (void)configureForPurchasing;
- (void)animateToBackgroundImageAtIndex:(int)arg1;
- (void)previewController:(id)arg1 didScrollToIndex:(int)arg2;
- (void)selectionController:(id)arg1 didSelectItemWithDataObject:(id)arg2;
- (void)clearSelectedTextViewClickedState;
- (void)purchaseInfoView:(id)arg1 didEndTouchInTextView:(id)arg2;
- (void)purchaseInfoView:(id)arg1 didReleaseTextView:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)purchaseInfoView:(id)arg1 didPressTextView:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)purchaseInfoViewDidTapBundles:(id)arg1;
- (void)purchaseInfoViewDidPurchase:(id)arg1;
- (void)buyButtonPressed:(id)arg1;
- (BOOL)isUpSell;
@property(readonly, nonatomic) AFContentPack *contentPack;
- (unsigned int)edgesForExtendedLayout;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (void)configureOverlayViewForContentPack:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupConstraints;
- (void)viewDidLoad;
- (id)initWithPurchasable:(id)arg1 presentationStyle:(int)arg2 renderInstance:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

