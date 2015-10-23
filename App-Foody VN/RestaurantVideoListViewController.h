//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePagingListTableViewController.h"

@class Restaurant;

@interface RestaurantVideoListViewController : BasePagingListTableViewController
{
    Restaurant *resModel;
}

@property(retain, nonatomic) Restaurant *resModel; // @synthesize resModel;
- (void).cxx_destruct;
- (void)updateNavBar;
- (void)VideoEnterFullScreen:(id)arg1;
- (void)VideoExitFullScreen:(id)arg1;
- (void)didTouchResHeaderView:(id)arg1;
- (void)objectImageDownloadDidFinish;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)initializeUIControls:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)trackPageView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

