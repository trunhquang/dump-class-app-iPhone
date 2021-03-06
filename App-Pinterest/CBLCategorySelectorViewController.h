//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView;

@interface CBLCategorySelectorViewController : CBLBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <CBLCategorySelectorViewControllerDelegate> _delegate;
    NSString *_selectedCategoryKey;
    float _forcedPopoverHeight;
    UITableView *_categoryTableView;
    int _selectedCategory;
}

@property(nonatomic) int selectedCategory; // @synthesize selectedCategory=_selectedCategory;
@property(retain, nonatomic) UITableView *categoryTableView; // @synthesize categoryTableView=_categoryTableView;
@property(nonatomic) float forcedPopoverHeight; // @synthesize forcedPopoverHeight=_forcedPopoverHeight;
@property(copy, nonatomic) NSString *selectedCategoryKey; // @synthesize selectedCategoryKey=_selectedCategoryKey;
@property(nonatomic) __weak id <CBLCategorySelectorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)indexOfSelectedCategory;
- (void)categoryCollectionDidClear:(id)arg1;
- (void)categoryCollectionDidUpdateContent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

