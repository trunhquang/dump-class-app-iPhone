//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "NewResReviewTableCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, Restaurant, RestaurantReviewDataLoader, UITableView, UIView;

@interface ResReviewAllListViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate, NewResReviewTableCellDelegate>
{
    BOOL firstTime;
    UITableView *_tableView;
    NSString *_resId;
    Restaurant *_resModel;
    NSArray *_selectedLevels;
    NSArray *_reviewList;
    unsigned int _reviewScope;
    int _selectedReviewKind;
    NSArray *_pickerValues;
    RestaurantReviewDataLoader *_dataListLoader;
    UIView *_headerMenu;
}

@property(retain, nonatomic) UIView *headerMenu; // @synthesize headerMenu=_headerMenu;
@property(retain, nonatomic) RestaurantReviewDataLoader *dataListLoader; // @synthesize dataListLoader=_dataListLoader;
@property(retain, nonatomic) NSArray *pickerValues; // @synthesize pickerValues=_pickerValues;
@property(nonatomic) int selectedReviewKind; // @synthesize selectedReviewKind=_selectedReviewKind;
@property(nonatomic) unsigned int reviewScope; // @synthesize reviewScope=_reviewScope;
@property(retain, nonatomic) NSArray *reviewList; // @synthesize reviewList=_reviewList;
@property(retain, nonatomic) NSArray *selectedLevels; // @synthesize selectedLevels=_selectedLevels;
@property(retain, nonatomic) Restaurant *resModel; // @synthesize resModel=_resModel;
@property(copy, nonatomic) NSString *resId; // @synthesize resId=_resId;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)cancelLogin:(id)arg1;
- (void)didReceivedReviewUpdateNewComment:(id)arg1;
- (void)didReceivedRestaurantUpdateForLikeReview:(id)arg1;
- (void)didReceivedRestaurantUpdateEvent:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)enableView;
- (void)disableView;
- (void)setTableViewEmptyMessage;
- (void)NewResReViewCell:(id)arg1 clickShowAllPhoto:(id)arg2;
- (void)NewResReViewCell:(id)arg1 clickShowAllCommentAtIndexPath:(id)arg2;
- (void)NewResReViewCell:(id)arg1 clickShowAllListUserLikeAtIndexPath:(id)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (void)didCancelSelectPickerWithTag:(int)arg1;
- (void)didFinishSelectPickerWithItemAtIndex:(int)arg1 withTag:(int)arg2;
- (void)didTouchReviewRatingLabel:(id)arg1;
- (void)didPressMenuHeader:(id)arg1;
- (void)didTouchReviewLevelButton:(id)arg1;
- (void)userPostReviewActionBegin;
- (void)didTouchReviewFilterButton:(id)arg1;
- (void)didTouchAddReviewButton:(id)arg1;
- (void)changeScopeReview:(id)arg1;
- (void)didTouchUserThumbnail:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)configReviewCell:(id)arg1 withReview:(id)arg2 withIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)refreshNewReviewList;
- (void)objectImageDownloadDidFinish;
- (void)objectImageDownloadDidPartialFinish;
- (void)loadMoreDataForScreen;
- (void)loadMoreReviewForScreen;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)initTopHeaderMenu;
- (void)initilizeTableHeaderView;
- (void)refreshRestaurantReviewList;
- (void)initializeUIControls:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)trackPageView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

