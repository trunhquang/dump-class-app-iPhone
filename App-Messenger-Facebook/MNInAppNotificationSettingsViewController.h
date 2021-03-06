//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MNSettingsCellSwitchDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MNSettingsView, MNUserSettings, NSArray, NSString;

@interface MNInAppNotificationSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNSettingsCellSwitchDelegate>
{
    MNUserSettings *_userSettings;
    MNSettingsView *_settingsView;
    NSArray *_settingsSections;
}

- (void).cxx_destruct;
- (void)_logToggleSettingsWithLabel:(id)arg1 nextState:(BOOL)arg2 prevState:(BOOL)arg3;
- (void)_reinitializeAndRefreshTableView;
- (void)didToggleSettingsSwitch:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)_tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_vibrationSettingTapped:(id)arg1;
- (void)_soundSettingTapped:(id)arg1;
- (void)_notificationSoundsSettingTapped:(id)arg1;
- (void)_notificationImagePreviewSettingTapped:(id)arg1;
- (void)_initializeSettingsSections;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithUserSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

