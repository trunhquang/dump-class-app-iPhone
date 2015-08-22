//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IASKViewController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IASKSettingsReader, IASKSpecifier, NSIndexPath, NSString, UITableView;

@interface IASKSpecifierValuesViewController : UIViewController <IASKViewController, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    IASKSpecifier *_currentSpecifier;
    NSIndexPath *_checkedItem;
    IASKSettingsReader *_settingsReader;
    id <IASKSettingsStore> _settingsStore;
}

@property(retain, nonatomic) id <IASKSettingsStore> settingsStore; // @synthesize settingsStore=_settingsStore;
@property(retain, nonatomic) IASKSettingsReader *settingsReader; // @synthesize settingsReader=_settingsReader;
@property(retain, nonatomic) NSIndexPath *checkedItem; // @synthesize checkedItem=_checkedItem;
@property(retain, nonatomic) IASKSpecifier *currentSpecifier; // @synthesize currentSpecifier=_currentSpecifier;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)userDefaultsDidChange;
- (struct CGSize)contentSizeForViewInPopover;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)deselectCell:(id)arg1;
- (void)selectCell:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)updateCheckedItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
