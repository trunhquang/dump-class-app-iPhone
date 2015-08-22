//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class FBPrivacyPickerOption, NSArray;

@interface FBPrivacyPickerController : UITableViewController
{
    id <FBPrivacyPickerControllerDelegate> _delegate;
    FBPrivacyPickerOption *_selectedOption;
    NSArray *_privacyGroups;
}

+ (void)initialize;
@property(copy, nonatomic) NSArray *privacyGroups; // @synthesize privacyGroups=_privacyGroups;
@property(retain, nonatomic) FBPrivacyPickerOption *selectedOption; // @synthesize selectedOption=_selectedOption;
@property(nonatomic) __weak id <FBPrivacyPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_scrollToSelectedOption;
- (void)_reloadData;
- (id)_indexPathOfSelectedOption;
- (id)_indexPathOfOption:(id)arg1;
- (unsigned int)_privacyOptionsCountInGroupAtIndex:(unsigned int)arg1;
- (id)_privacyOptionAtIndexPath:(id)arg1;
- (unsigned int)_privacyGroupsCount;
- (id)_optionGroupAtIndex:(unsigned int)arg1;
- (void)reloadDataWithOptionGroups:(id)arg1;
- (void)reloadDataWithOptions:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (id)init;
- (id)initWithTableViewStyle:(int)arg1 privacyPickerOptionGroups:(id)arg2 selectedOption:(id)arg3;
- (id)initWithTableViewStyle:(int)arg1 privacyPickerOptions:(id)arg2 selectedOption:(id)arg3;

@end

