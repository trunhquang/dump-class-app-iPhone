//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ResReviewDetailViewController.h"

@class NSArray, NSString;

@interface NewReviewDetailViewController : ResReviewDetailViewController
{
    BOOL beginUploadPhoto;
    BOOL isShowShareFacebookPopup;
    BOOL isShowRewardPointsAlert;
    NSArray *uploadingPhotos;
    NSString *activityId;
}

@property(copy, nonatomic) NSString *activityId; // @synthesize activityId;
@property(retain, nonatomic) NSArray *uploadingPhotos; // @synthesize uploadingPhotos;
- (void).cxx_destruct;
- (void)doDeleteReviewPhotoAtIndex:(int)arg1;
- (void)didTouchReviewPhotoDeleteButton:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)refreshCommentButton;
- (void)beginEditingReview;
- (id)getUploadedPhotos;
- (void)didTouchReviewPhotoButton:(id)arg1;
- (void)replaceUploadingPhotoName:(id)arg1 withObject:(id)arg2;
- (void)didTouchRetryUploadPhoto:(id)arg1;
- (void)checkAndShowRewardPoints;
- (void)didReceivedReviewPhotoDeletedEvent:(id)arg1;
- (void)didReceivedPhotoUploadFailureEvent:(id)arg1;
- (void)didReceivedPhotoUploadSuccessEvent:(id)arg1;
- (void)beginEditPhotoForReview;
- (void)beginUploadPhotoForReview;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)objectImageDownloadDidFinish;
- (void)objectImageDownloadDidPartialFinish;
- (void)initializeUIControls:(BOOL)arg1;
- (void)initializeRestaurantAndReviewHeader;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)trackPageView;
- (void)setUpNavigationBar;
- (void)viewDidAppear:(BOOL)arg1;
- (void)shareFacebookWithUrlString:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
