//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBSessionClassProvidable.h"
#import "MNContactImportInitiationListener.h"
#import "MNMegaphonePresenter.h"
#import "MNPeopleCellDelegate.h"
#import "MNPeopleModelControllerDelegate.h"
#import "MNPeopleOnlineSwitchCellDelegate.h"
#import "MNPeopleSearchControllerDelegate.h"
#import "MNPeopleTableSelectionDelegate.h"
#import "MNPeopleViewDelegate.h"
#import "MNThreadSelectionStateListener.h"
#import "UISearchDisplayDelegate.h"

@class FBDelegateForwarder, FBLocaleMap, FBMLoggedInUserInfoManager, FBMParticipantNameFormatter, FBMThreadParticipantFilter, FBMThreadSummary, FBTableViewAggregatedDataSource, FBUserSession, FBWebRTCCallController, MNAddContactViewController, MNAddressBookContactImportInitiator, MNBatchInvitePickerNavigationHandler, MNContactsSegmentInPeopleTabExperimentContext, MNFindFriendsTableViewController, MNGraphGlobalContactsSyncLock, MNNavigationCoordinator, MNOnlineSwitcherCellDataSource, MNOptionalSingleCellDataSource, MNPeopleLoadEventListenerAnnouncer, MNPeopleModelController, MNPeopleOnlineLoadingCell, MNPeopleOnlineSwitchCell, MNPeopleOnlineSwitchNuxCell, MNPeopleSearchAccessibilityController, MNPeopleSearchController, MNPeopleTableDelegate, MNPeopleTablePresenceManager, MNPeopleView, MNPeopleViewImportedContactCardPresenter, MNSMSInvitePresenter, MNThreadNavigationCoordinator, MNThreadSelectionStateCoordinator, MNUserSetUpStatePersister, MNUserSettings, MNUserStore, NSDictionary, NSString, UIBarButtonItem, UISegmentedControl, UITableViewCell;

@interface MNPeopleViewController : UIViewController <MNPeopleModelControllerDelegate, MNPeopleTableSelectionDelegate, MNPeopleCellDelegate, UISearchDisplayDelegate, MNPeopleSearchControllerDelegate, MNPeopleViewDelegate, MNThreadSelectionStateListener, MNContactImportInitiationListener, FBSessionClassProvidable, MNMegaphonePresenter, MNPeopleOnlineSwitchCellDelegate>
{
    BOOL _isCurrentViewControllerVisible;
    NSString *_searchText;
    long long _userRequestId;
    FBMLoggedInUserInfoManager *_loggedInUserInfoManager;
    MNPeopleModelController *_peopleModelController;
    MNPeopleView *_peopleView;
    UISegmentedControl *_segmentedControl;
    UIBarButtonItem *_addContactButton;
    UIBarButtonItem *_searchButton;
    unsigned int _filterType;
    MNNavigationCoordinator *_navigationCoordinator;
    MNThreadNavigationCoordinator *_threadNavigationCoordinator;
    FBUserSession *_session;
    MNPeopleTablePresenceManager *_presenceManager;
    FBMParticipantNameFormatter *_nameFormatter;
    FBMThreadParticipantFilter *_threadParticipantFilter;
    MNThreadSelectionStateCoordinator *_threadSelectionStateCoordinator;
    FBMThreadSummary *_selectedThreadSummary;
    FBTableViewAggregatedDataSource *_facebookPeopleDataSource;
    MNOnlineSwitcherCellDataSource *_facebookPeopleCellSwitcherDataSource;
    MNPeopleTableDelegate *_facebookPeopleDelegate;
    MNPeopleOnlineSwitchNuxCell *_switchNuxCell;
    MNOptionalSingleCellDataSource *_switchNuxCellDataSource;
    MNPeopleOnlineSwitchCell *_switcherCell;
    FBDelegateForwarder *_facebookTableForker;
    MNPeopleOnlineLoadingCell *_onlineLoadingCell;
    MNOptionalSingleCellDataSource *_onlineLoadingDataSource;
    FBTableViewAggregatedDataSource *_messengerPeopleDataSource;
    MNPeopleTableDelegate *_messengerPeopleDelegate;
    MNOptionalSingleCellDataSource *_messengerPeopleMegaphoneDataSource;
    MNFindFriendsTableViewController *_findFriendsTableViewController;
    id <FBProvider> _findFriendsTableViewControllerProvider;
    UITableViewCell *_pendingMegaphoneCell;
    FBDelegateForwarder *_mesengerTableForker;
    MNPeopleSearchController *_peopleSearchController;
    MNPeopleSearchAccessibilityController *_peopleSearchAccessibilityController;
    MNUserSettings *_userSettings;
    MNPeopleViewImportedContactCardPresenter *_importedContactCardPresenter;
    FBWebRTCCallController *_voipCallController;
    MNUserStore *_userStore;
    id <FBProvider> _addContactViewControllerProvider;
    MNAddContactViewController *_addContactViewController;
    NSDictionary *_sourceExtras;
    NSString *_analyticsSearchSessionId;
    id <FBAddressBookAccessPermissionChecker> _addressBookAccessPermissionChecker;
    MNSMSInvitePresenter *_smsInvitePresenter;
    MNAddressBookContactImportInitiator *_contactImportInitiator;
    id <FBContactImporter> _contactImporter;
    MNGraphGlobalContactsSyncLock *_contactsSyncLock;
    FBLocaleMap *_localeMap;
    MNUserSetUpStatePersister *_userSetUpStatePersister;
    MNPeopleLoadEventListenerAnnouncer *_peopleLoadAnnouncer;
    id <MNAvatarImageDecorating> _avatarImageDecoration;
    MNBatchInvitePickerNavigationHandler *_batchInvitePickerNavigationHandler;
    MNContactsSegmentInPeopleTabExperimentContext *_contactsSegmentInPeopleTabExperimentContext;
}

+ (unsigned int)peopleModelFilterFromSegmentIndex:(unsigned int)arg1;
+ (id)analyticsSegmentTypeFromSegmentIndex:(unsigned int)arg1;
@property(retain, nonatomic) MNContactsSegmentInPeopleTabExperimentContext *contactsSegmentInPeopleTabExperimentContext; // @synthesize contactsSegmentInPeopleTabExperimentContext=_contactsSegmentInPeopleTabExperimentContext;
@property(retain, nonatomic) MNBatchInvitePickerNavigationHandler *batchInvitePickerNavigationHandler; // @synthesize batchInvitePickerNavigationHandler=_batchInvitePickerNavigationHandler;
@property(retain, nonatomic) id <MNAvatarImageDecorating> avatarImageDecoration; // @synthesize avatarImageDecoration=_avatarImageDecoration;
@property(retain, nonatomic) MNPeopleLoadEventListenerAnnouncer *peopleLoadAnnouncer; // @synthesize peopleLoadAnnouncer=_peopleLoadAnnouncer;
@property(retain, nonatomic) MNUserSetUpStatePersister *userSetUpStatePersister; // @synthesize userSetUpStatePersister=_userSetUpStatePersister;
@property(retain, nonatomic) FBLocaleMap *localeMap; // @synthesize localeMap=_localeMap;
@property(retain, nonatomic) MNGraphGlobalContactsSyncLock *contactsSyncLock; // @synthesize contactsSyncLock=_contactsSyncLock;
@property(retain, nonatomic) id <FBContactImporter> contactImporter; // @synthesize contactImporter=_contactImporter;
@property(retain, nonatomic) MNAddressBookContactImportInitiator *contactImportInitiator; // @synthesize contactImportInitiator=_contactImportInitiator;
@property(retain, nonatomic) MNSMSInvitePresenter *smsInvitePresenter; // @synthesize smsInvitePresenter=_smsInvitePresenter;
@property(retain, nonatomic) id <FBAddressBookAccessPermissionChecker> addressBookAccessPermissionChecker; // @synthesize addressBookAccessPermissionChecker=_addressBookAccessPermissionChecker;
@property(copy, nonatomic) NSString *analyticsSearchSessionId; // @synthesize analyticsSearchSessionId=_analyticsSearchSessionId;
@property(copy, nonatomic) NSDictionary *sourceExtras; // @synthesize sourceExtras=_sourceExtras;
@property(retain, nonatomic) MNAddContactViewController *addContactViewController; // @synthesize addContactViewController=_addContactViewController;
@property(retain, nonatomic) id <FBProvider> addContactViewControllerProvider; // @synthesize addContactViewControllerProvider=_addContactViewControllerProvider;
@property(retain, nonatomic) MNUserStore *userStore; // @synthesize userStore=_userStore;
@property(retain, nonatomic) FBWebRTCCallController *voipCallController; // @synthesize voipCallController=_voipCallController;
@property(retain, nonatomic) MNPeopleViewImportedContactCardPresenter *importedContactCardPresenter; // @synthesize importedContactCardPresenter=_importedContactCardPresenter;
@property(retain, nonatomic) MNUserSettings *userSettings; // @synthesize userSettings=_userSettings;
@property(retain, nonatomic) MNPeopleSearchAccessibilityController *peopleSearchAccessibilityController; // @synthesize peopleSearchAccessibilityController=_peopleSearchAccessibilityController;
@property(retain, nonatomic) MNPeopleSearchController *peopleSearchController; // @synthesize peopleSearchController=_peopleSearchController;
@property(retain, nonatomic) FBDelegateForwarder *mesengerTableForker; // @synthesize mesengerTableForker=_mesengerTableForker;
@property(retain, nonatomic) UITableViewCell *pendingMegaphoneCell; // @synthesize pendingMegaphoneCell=_pendingMegaphoneCell;
@property(retain, nonatomic) id <FBProvider> findFriendsTableViewControllerProvider; // @synthesize findFriendsTableViewControllerProvider=_findFriendsTableViewControllerProvider;
@property(retain, nonatomic) MNFindFriendsTableViewController *findFriendsTableViewController; // @synthesize findFriendsTableViewController=_findFriendsTableViewController;
@property(retain, nonatomic) MNOptionalSingleCellDataSource *messengerPeopleMegaphoneDataSource; // @synthesize messengerPeopleMegaphoneDataSource=_messengerPeopleMegaphoneDataSource;
@property(retain, nonatomic) MNPeopleTableDelegate *messengerPeopleDelegate; // @synthesize messengerPeopleDelegate=_messengerPeopleDelegate;
@property(retain, nonatomic) FBTableViewAggregatedDataSource *messengerPeopleDataSource; // @synthesize messengerPeopleDataSource=_messengerPeopleDataSource;
@property(retain, nonatomic) MNOptionalSingleCellDataSource *onlineLoadingDataSource; // @synthesize onlineLoadingDataSource=_onlineLoadingDataSource;
@property(retain, nonatomic) MNPeopleOnlineLoadingCell *onlineLoadingCell; // @synthesize onlineLoadingCell=_onlineLoadingCell;
@property(retain, nonatomic) FBDelegateForwarder *facebookTableForker; // @synthesize facebookTableForker=_facebookTableForker;
@property(retain, nonatomic) MNPeopleOnlineSwitchCell *switcherCell; // @synthesize switcherCell=_switcherCell;
@property(retain, nonatomic) MNOptionalSingleCellDataSource *switchNuxCellDataSource; // @synthesize switchNuxCellDataSource=_switchNuxCellDataSource;
@property(retain, nonatomic) MNPeopleOnlineSwitchNuxCell *switchNuxCell; // @synthesize switchNuxCell=_switchNuxCell;
@property(retain, nonatomic) MNPeopleTableDelegate *facebookPeopleDelegate; // @synthesize facebookPeopleDelegate=_facebookPeopleDelegate;
@property(retain, nonatomic) MNOnlineSwitcherCellDataSource *facebookPeopleCellSwitcherDataSource; // @synthesize facebookPeopleCellSwitcherDataSource=_facebookPeopleCellSwitcherDataSource;
@property(retain, nonatomic) FBTableViewAggregatedDataSource *facebookPeopleDataSource; // @synthesize facebookPeopleDataSource=_facebookPeopleDataSource;
@property(retain, nonatomic) FBMThreadSummary *selectedThreadSummary; // @synthesize selectedThreadSummary=_selectedThreadSummary;
@property(retain, nonatomic) MNThreadSelectionStateCoordinator *threadSelectionStateCoordinator; // @synthesize threadSelectionStateCoordinator=_threadSelectionStateCoordinator;
@property(retain, nonatomic) FBMThreadParticipantFilter *threadParticipantFilter; // @synthesize threadParticipantFilter=_threadParticipantFilter;
@property(retain, nonatomic) FBMParticipantNameFormatter *nameFormatter; // @synthesize nameFormatter=_nameFormatter;
@property(retain, nonatomic) MNPeopleTablePresenceManager *presenceManager; // @synthesize presenceManager=_presenceManager;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) MNThreadNavigationCoordinator *threadNavigationCoordinator; // @synthesize threadNavigationCoordinator=_threadNavigationCoordinator;
@property(retain, nonatomic) MNNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(nonatomic) unsigned int filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) UIBarButtonItem *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIBarButtonItem *addContactButton; // @synthesize addContactButton=_addContactButton;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) MNPeopleView *peopleView; // @synthesize peopleView=_peopleView;
@property(retain, nonatomic) MNPeopleModelController *peopleModelController; // @synthesize peopleModelController=_peopleModelController;
@property(retain, nonatomic) FBMLoggedInUserInfoManager *loggedInUserInfoManager; // @synthesize loggedInUserInfoManager=_loggedInUserInfoManager;
- (void).cxx_destruct;
- (id)_segmentedControlItemTitles;
- (BOOL)_shouldShowSegmentedControl;
- (unsigned int)_peopleViewNUXState;
- (void)_logNuxImpression:(unsigned int)arg1;
- (void)_updateNUXStateAndLogImpression;
- (void)didSelectThreadWithOfflineThreadId:(id)arg1;
- (void)_updateSelectedContactForTableView:(id)arg1;
- (void)didSelectThreadWithSummary:(id)arg1;
- (void)_setupSwitcherCellForUser:(id)arg1;
- (void)setSourceExtrasWithResult:(id)arg1 withAnalyticsExtras:(id)arg2;
- (id)analyticsSourceExtras;
- (id)analyticsModule;
- (void)onlineSwitchCell:(id)arg1 didChangeOnlineState:(BOOL)arg2;
- (void)_completeContactSync;
- (void)userInitiatedContactImportFailedToInitiate;
- (void)userInitiatedContactImportDisallowed;
- (void)userInitiatedContactImportAllowed;
- (void)peopleViewContactSyncLearnMorePressed:(id)arg1;
- (void)peopleViewEnableContactSyncButtonPressed:(id)arg1;
- (void)peopleViewInviteFriendsButtonPressed:(id)arg1;
- (void)peopleView:(id)arg1 didHideSearchBar:(id)arg2;
- (void)peopleView:(id)arg1 didPresentSearchBar:(id)arg2;
- (void)peopleViewSearchBarCancelPressed:(id)arg1;
- (void)peopleView:(id)arg1 searchTextDidChangeTo:(id)arg2;
- (BOOL)peopleSearchControllerShouldSearchServer:(id)arg1;
- (BOOL)peopleSearchController:(id)arg1 shouldShowResult:(id)arg2;
- (void)peopleSearchController:(id)arg1 didSelectResult:(id)arg2 withAnalyticsExtras:(id)arg3;
- (void)peopleSearchControllerDidFinishSearch:(id)arg1;
- (id)pickedUserIdsForPeopleSearchController:(id)arg1;
- (id)searchTextForPeopleSearchController:(id)arg1;
- (BOOL)peopleSearchControllerShouldIncludeCommerce:(id)arg1;
- (BOOL)peopleSearchControllerShouldIncludeGroup:(id)arg1;
- (void)inviteButtonTappedForConversationContact:(id)arg1;
- (void)callButtonTappedForConversationContact:(id)arg1 isVideoCall:(BOOL)arg2;
- (void)contextTappedForConversationContact:(id)arg1;
- (void)selectedResult:(id)arg1 withAnalyticsExtras:(id)arg2;
- (void)displayMessengerMegaphoneCell:(id)arg1;
- (void)removeMegaphone;
- (void)displayMegaphone:(id)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)peopleModelControllerDidFinishFetch:(id)arg1;
- (void)_didChangeSegmentedControl:(id)arg1;
- (void)_searchIconPressed:(id)arg1;
- (void)_addContactPressed:(id)arg1;
- (void)_loadNavBarViews;
- (void)_updateSegmentControlHeightForInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_updateSwitcherCellWithOnlineState:(BOOL)arg1;
- (void)_updateLoadingCellForOnlineState:(BOOL)arg1;
- (BOOL)_shouldShowLoadingCellForOnlineState:(BOOL)arg1;
- (BOOL)mn_shouldShowToastInNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_isConversationPersonSelected:(id)arg1;
- (void)_loadMessengerSegment;
- (void)_loadFacebookSegment;
- (void)_createSwitcherCell;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

