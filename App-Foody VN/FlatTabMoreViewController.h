//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FlatBaseViewController.h"

#import "MultipleSelectListDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CategoryModel, NSMutableArray, NSString, UITableView;

@interface FlatTabMoreViewController : FlatBaseViewController <UIAlertViewDelegate, MultipleSelectListDelegate, UITableViewDataSource, UITableViewDelegate>
{
    unsigned int selectingOption;
    BOOL hasTopMember;
    CategoryModel *selectedCat;
    NSString *currentCatId;
    NSString *currentAreaId;
    NSMutableArray *moreItems;
    NSString *currentCountryId;
    UITableView *_moreContentTableView;
}

@property(nonatomic) __weak UITableView *moreContentTableView; // @synthesize moreContentTableView=_moreContentTableView;
@property(copy, nonatomic) NSString *currentCountryId; // @synthesize currentCountryId;
@property(retain, nonatomic) NSMutableArray *moreItems; // @synthesize moreItems;
@property(copy, nonatomic) NSString *currentAreaId; // @synthesize currentAreaId;
@property(copy, nonatomic) NSString *currentCatId; // @synthesize currentCatId;
@property(retain, nonatomic) CategoryModel *selectedCat; // @synthesize selectedCat;
- (void).cxx_destruct;
- (void)cityChangeEventNotify:(id)arg1;
- (void)beginSuggestNewResAction;
- (void)showSuggestNewResView;
- (void)showSettingView;
- (void)showFeedBackView;
- (void)showSuggestView;
- (void)showTopMember;
- (void)showArticleView;
- (void)showStoreList;
- (void)showRecentlyRestaurant;
- (void)showCatalogView;
- (void)showPromotionView;
- (void)showEventView;
- (void)showLatestReview;
- (void)showMembershipRestaurant;
- (void)didTouchSettingButton:(id)arg1;
- (void)didTouchFeedBackButton:(id)arg1;
- (void)didTouchSuggestButton:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didDoneMultipleSelectList:(id)arg1;
- (void)didCancelMultipleSelectList;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)trackPageView;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)checkTopMember;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

