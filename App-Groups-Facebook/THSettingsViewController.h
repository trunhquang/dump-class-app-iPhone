//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGroupsTableViewController.h"

#import "FBAvatarPickerControllerDelegate.h"
#import "FBGroupsBasicPersonActionSheetViewControllerDelegate.h"
#import "FBGroupsDataLoaderListener.h"
#import "THPersonDataLoaderDelegate.h"

@class FBGroupsSpinnerTableFooterView, FBNetworkImageView, FBTimer, FBUserSession, NSMutableArray, NSString, THPersonActionSheetViewController, THPersonDataLoader, THSettingsUserInfoCell, THUserSettings, UITapGestureRecognizer;

@interface THSettingsViewController : FBGroupsTableViewController <FBAvatarPickerControllerDelegate, FBGroupsDataLoaderListener, FBGroupsBasicPersonActionSheetViewControllerDelegate, THPersonDataLoaderDelegate>
{
    NSMutableArray *_groups;
    int _selectedGroupIndex;
    int _memberCount;
    int _adminCount;
    BOOL _pushNotificationsDisabled;
    BOOL _pushMutedSettingDownloaded;
    double _pushMutedUntil;
    FBNetworkImageView *_profileImageView;
    FBUserSession *_session;
    FBGroupsSpinnerTableFooterView *_loadingCell;
    FBTimer *_updateTimer;
    THSettingsUserInfoCell *_userInfoCell;
    THUserSettings *_userSettings;
    THPersonActionSheetViewController *_personActionSheetController;
    THPersonDataLoader *_personDataLoader;
    UITapGestureRecognizer *_tapRecognizer;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (id)_tableView:(id)arg1 cellForSettingsIndexPath:(id)arg2;
- (void)_refreshPushNotificationSettingFromServer;
- (void)_refreshPushNotificationSettingFromSystemSetting;
- (void)_updateGroups:(id)arg1;
- (void)_updatePerson:(id)arg1;
- (int)_effectiveSection:(int)arg1;
- (id)_getAutoPlayDescriptionText;
- (void)_timerCallback;
- (void)_performLogout;
- (void)_showAdvancedSettings;
- (void)_showReportProblem;
- (void)_showPrivacyTerms;
- (void)_showThirdPartyNotices;
- (void)_showHelp;
- (void)_showInviteFriends;
- (void)_showOSPushNotificationsSettings;
- (void)_openWebViewForURL:(id)arg1;
- (void)_toggleHDVideoUpload:(id)arg1;
- (void)_toggleInAppSounds:(id)arg1;
- (void)_showMutePushNotificationsMenu;
- (id)_tableView:(id)arg1 cellForGroupSettingsIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 cellForMoreGroupsIndexPath:(id)arg2;
- (BOOL)_shouldShowGroupsSection;
- (BOOL)_shouldShowLoadingGroups;
- (int)_numOfGroupsShown;
- (id)_groupAtIndexPath:(id)arg1;
- (id)_adminshipInfoForCount:(int)arg1;
- (id)_membershipInfoForCount:(int)arg1;
- (void)_profilePhotoTapped:(id)arg1;
- (id)_userInfoCellForTableView;
- (id)_inviteRequestForPerson:(id)arg1;
- (void)avatarPickerDidCancel:(id)arg1;
- (void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2;
- (void)actionSheetReadyForDisplay:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dataLoader:(id)arg1 deleteGroup:(id)arg2;
- (void)dataLoader:(id)arg1 reloadGroup:(id)arg2;
- (void)dataLoader:(id)arg1 reloadDataWithError:(id)arg2;
- (void)personDataLoader:(id)arg1 didUpdatePerson:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

