//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBContactsSearchDelegate.h"
#import "FBFriendListMonitorListener.h"
#import "MNPeopleCellDelegate.h"
#import "MNPeopleTableSelectionDelegate.h"
#import "UITableViewDelegate.h"

@class FBAnalytics, FBCombinedContactsSearch, FBMessengerSyncEngineManager, MNPeopleSearchResultsDataSource, MNPeopleTableDelegate, MNTableViewCellStyle, NSString;

@interface MNPeopleSearchController : NSObject <FBContactsSearchDelegate, MNPeopleTableSelectionDelegate, FBFriendListMonitorListener, UITableViewDelegate, MNPeopleCellDelegate, FBClassProvidable>
{
    FBAnalytics *_analytics;
    FBCombinedContactsSearch *_contactsSearch;
    NSString *_analyticsSearchSessionId;
    FBMessengerSyncEngineManager *_syncEngineManager;
    id <MNAvatarImageDecorating> _avatarImageDecorating;
    BOOL _isObserving;
    id <MNPeopleSearchControllerDelegate> _delegate;
    id <MNPeopleSearchControllerRTCDelegate> _rtcDelegate;
    MNPeopleSearchResultsDataSource *_searchResultsDataSource;
    MNTableViewCellStyle *_peopleCellStyle;
    MNPeopleTableDelegate *_searchTableDelegate;
}

@property(readonly, nonatomic) MNPeopleTableDelegate *searchTableDelegate; // @synthesize searchTableDelegate=_searchTableDelegate;
@property(retain, nonatomic) MNTableViewCellStyle *peopleCellStyle; // @synthesize peopleCellStyle=_peopleCellStyle;
@property(readonly, nonatomic) MNPeopleSearchResultsDataSource *searchResultsDataSource; // @synthesize searchResultsDataSource=_searchResultsDataSource;
@property(nonatomic) __weak id <MNPeopleSearchControllerRTCDelegate> rtcDelegate; // @synthesize rtcDelegate=_rtcDelegate;
@property(nonatomic) __weak id <MNPeopleSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)inviteButtonTappedForConversationContact:(id)arg1;
- (void)callButtonTappedForConversationContact:(id)arg1 isVideoCall:(BOOL)arg2;
- (void)contextTappedForConversationContact:(id)arg1;
- (void)didWriteUpdatesToSyncStoreInvalidatingFriendList;
- (void)updateLoadingIndicator;
- (void)didPickResult:(id)arg1;
- (BOOL)shouldHideResult:(id)arg1;
- (void)didFinishSearch:(id)arg1;
- (void)search;
- (void)removeScrollingListener:(id)arg1;
- (void)addScrollingListener:(id)arg1;
- (void)stopObserving;
- (void)startObserving;
- (void)selectedResult:(id)arg1 withAnalyticsExtras:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_newCellWithReuseIdentifier:(id)arg1;
- (void)unbindFromTableView:(id)arg1;
- (void)bindToTableView:(id)arg1;
- (void)configureWithPeopleCellStyle:(id)arg1;
- (void)cancelSearch;
- (void)startSearch;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

