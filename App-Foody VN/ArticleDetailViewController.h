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

@class Article, NSArray, NSIndexPath, NSString, UIImage, UILabel, UITableView, UITableViewCell, UIView;

@interface ArticleDetailViewController : BaseViewController <UIWebViewDelegate, UIAlertViewDelegate, TextInputDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate>
{
    BOOL isViewAllComment;
    NSIndexPath *selectedIndex;
    UILabel *_wlabelTotalComment;
    UILabel *_wlabeldateView;
    UITableViewCell *_wcellButtonShowAllComment;
    NSString *articleId;
    Article *article;
    NSArray *commentList;
    UIView *headerView;
    UIView *headerTableView;
    UIImage *articleImg;
    NSArray *relateArticleList;
    UITableView *_contentTableView;
}

@property(nonatomic) __weak UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(retain, nonatomic) NSArray *relateArticleList; // @synthesize relateArticleList;
@property(retain, nonatomic) UIImage *articleImg; // @synthesize articleImg;
@property(retain, nonatomic) UIView *headerTableView; // @synthesize headerTableView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView;
@property(retain, nonatomic) NSArray *commentList; // @synthesize commentList;
@property(retain, nonatomic) Article *article; // @synthesize article;
@property(copy, nonatomic) NSString *articleId; // @synthesize articleId;
- (void).cxx_destruct;
- (void)didCancelTextInput:(id)arg1;
- (void)viewController:(id)arg1 didFinishInputWithText:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)updateHeaderTableView;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)parseURLParams:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didTouchSaveButton:(id)arg1;
- (void)userDidLikeOnArticle;
- (void)didTouchLikeButton:(id)arg1;
- (void)userDidCommentOnReview;
- (void)didTouchCommentOnArticleButton:(id)arg1;
- (void)didTouchShareButton:(id)arg1;
- (void)didTouchCommentUserThumbButton:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)onTick:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)loadArticleRelate;
- (void)loadAllCommentForScreen:(BOOL)arg1;
- (void)loadLatestCommentForScreen:(BOOL)arg1;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)refreshData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)viewDidUnload;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)trackPageView;
- (void)initHeaderTable;
- (void)initHeaderView;
- (void)didReceivedNewCommentPostedEvent:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

