//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UIAlertViewDelegate.h"

@class NSString, Promotion, UIScrollView;

@interface UserPromotionDetailViewController : BaseViewController <UIAlertViewDelegate>
{
    BOOL isShowingLoadmore;
    unsigned int deletingPhotoIndex;
    Promotion *_promotion;
    NSString *_promotionId;
    UIScrollView *_contentScrollView;
}

@property(nonatomic) __weak UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(retain, nonatomic) Promotion *promotion; // @synthesize promotion=_promotion;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)refreshPromotionDetail;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)doDeleteReviewPhotoAtIndex:(int)arg1;
- (void)didTouchReviewPhotoDeleteButton:(id)arg1;
- (id)getUploadedPhotos;
- (void)didTapOnImageView:(id)arg1;
- (void)didTouchLoadMorePromotionContent:(id)arg1;
- (void)didTouchResHeaderView:(id)arg1;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)objectImageDownloadDidPartialFinish;
- (void)initializeUIControls:(BOOL)arg1;
- (void)trackPageView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

