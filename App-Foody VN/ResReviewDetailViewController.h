//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "TextInputDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIWebViewDelegate.h"

@class NSArray, NSIndexPath, NSString, PagingRequestInfo, Restaurant, Review, UIActivityIndicatorView, UIBarButtonItem, UILabel, UITableView, UIView;

@interface ResReviewDetailViewController : BaseViewController <MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate, UIWebViewDelegate, TextInputDelegate, UIAlertViewDelegate>
{
    int defaultCommentPage;
    unsigned int maxReviewPhotoCount;
    Review *review;
    UIView *tableHeader;
    UIView *reviewDetailHeader;
    UITableView *commentTableView;
    BOOL isNewSuggestRes;
    UIView *lightBgView;
    UIView *infoView;
    unsigned int deletingPhotoIndex;
    BOOL shouldScrollToNewComment;
    NSIndexPath *selectedIndex;
    UILabel *_wlabelCommentCount;
    int isEditReview;
    BOOL _isCheckin;
    BOOL _autoShareFacebook;
    NSString *resId;
    Restaurant *resModel;
    NSString *reviewId;
    PagingRequestInfo *pagingRequest;
    NSArray *commentList;
    UIBarButtonItem *actionBarButton;
    UIActivityIndicatorView *videoSpinner;
}

@property(nonatomic) BOOL autoShareFacebook; // @synthesize autoShareFacebook=_autoShareFacebook;
@property(nonatomic) BOOL isCheckin; // @synthesize isCheckin=_isCheckin;
@property(retain, nonatomic) UIActivityIndicatorView *videoSpinner; // @synthesize videoSpinner;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView;
@property(nonatomic) UIBarButtonItem *actionBarButton; // @synthesize actionBarButton;
@property(retain, nonatomic) UIView *lightBgView; // @synthesize lightBgView;
@property(retain, nonatomic) NSArray *commentList; // @synthesize commentList;
@property(retain, nonatomic) PagingRequestInfo *pagingRequest; // @synthesize pagingRequest;
@property(retain, nonatomic) UIView *reviewDetailHeader; // @synthesize reviewDetailHeader;
@property(retain, nonatomic) UIView *tableHeader; // @synthesize tableHeader;
@property(nonatomic) __weak UITableView *commentTableView; // @synthesize commentTableView;
@property(nonatomic) BOOL isNewSuggestRes; // @synthesize isNewSuggestRes;
@property(retain, nonatomic) Review *review; // @synthesize review;
@property(copy, nonatomic) NSString *reviewId; // @synthesize reviewId;
@property(retain, nonatomic) Restaurant *resModel; // @synthesize resModel;
@property(copy, nonatomic) NSString *resId; // @synthesize resId;
- (void).cxx_destruct;
- (void)shareFacebookWithUrlString:(id)arg1;
- (void)doDeleteReviewPhotoAtIndex:(int)arg1;
- (void)didTouchReviewPhotoDeleteButton:(id)arg1;
- (void)beginEditingCheckin;
- (void)checkCheckinForEditing;
- (void)doDeleteUserCheckin;
- (void)updateNavBar;
- (void)VideoEnterFullScreen:(id)arg1;
- (void)VideoExitFullScreen:(id)arg1;
- (void)didCancelTextInput:(id)arg1;
- (void)viewController:(id)arg1 didFinishInputWithText:(id)arg2;
- (void)refreshCommentButton;
- (void)didReceivedUserLogoutEvent:(id)arg1;
- (void)didReceivedUserLoginEvent:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)parseURLParams:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (id)createHeaderTableView;
- (void)didTouchShareButton:(id)arg1;
- (void)beginEditingReview;
- (void)checkReviewForEditing;
- (void)doUnBlockUserReview;
- (void)doBlockUserReview;
- (void)doDeleteUserReview;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didReceivedNewCommentPostedEvent:(id)arg1;
- (void)didReceivedRestaurantUpdateEvent:(id)arg1;
- (void)didReceivedPhotoReviewUploadFinishEvent:(id)arg1;
- (void)didTouchActionButton:(id)arg1;
- (void)didTouchReviewRatingLabel:(id)arg1;
- (void)didTouchResHeaderView:(id)arg1;
- (void)didTouchCommentUserThumbButton:(id)arg1;
- (void)didTouch2Button:(id)arg1;
- (void)didTouchReviewPhotoButton:(id)arg1;
- (void)userPostReviewActionBegin;
- (void)didTouchViewAllCommentButton:(id)arg1;
- (void)didTouchAddReviewButton:(id)arg1;
- (void)userDidCommentOnReview;
- (void)didTouchCommentOnReviewButton:(id)arg1;
- (void)userDidDisLikeReview;
- (void)didTouchDisLikeReviewButton:(id)arg1;
- (void)userDidLikeReview;
- (void)didTouchLikeReviewButton:(id)arg1;
- (void)didTouchReviewUserThumbnail:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)objectImageDownloadDidFinish;
- (void)objectImageDownloadDidPartialFinish;
- (void)refreshReviewCommentList;
- (void)loadAllCommentForReview;
- (void)scrollTableToNewComment;
- (void)initializeUIControls:(BOOL)arg1;
- (void)addCommentTableFooter;
- (void)initializeRestaurantAndReviewHeader;
- (void)setTitleView;
- (void)loadMoreDataForScreen;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)trackPageView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)setUpNavigationBar;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

