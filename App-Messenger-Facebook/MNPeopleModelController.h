//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNFriendsFetcherAggregatorDelegate.h"

@class FBLocalizedIndexedCollation, FBMPresenceObserver, FBMessengerChatFavoriteManager, FBUserSession, MNContactsSegmentInPeopleTabExperimentContext, MNFriendsFetcherAggregatedResults, MNFriendsFetcherAggregator, MNOnlineStatusManager, MNPeopleRankingExperimentContext, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface MNPeopleModelController : NSObject <MNFriendsFetcherAggregatorDelegate, FBClassProvidable>
{
    id <FBMAppProperties> _appProperties;
    MNFriendsFetcherAggregator *_friendsFetcherAggregator;
    FBMessengerChatFavoriteManager *_favoriteManager;
    MNOnlineStatusManager *_onlineStatusManager;
    NSArray *_sectionTitles;
    NSArray *_sectionIndexTitles;
    FBUserSession *_session;
    NSObject<OS_dispatch_queue> *_collationQueue;
    MNPeopleRankingExperimentContext *_peopleRankingExperimentContext;
    MNContactsSegmentInPeopleTabExperimentContext *_contactsSegmentInPeopleTabExperimentContext;
    BOOL _friendsLoaded;
    BOOL _hasMessengerSections;
    id <MNPeopleModelControllerDelegate> _delegate;
    NSArray *_messengerFriends;
    NSArray *_activeFriends;
    NSArray *_messengerSectionTitles;
    FBLocalizedIndexedCollation *_currentCollation;
    FBMPresenceObserver *_presenceObserver;
    MNFriendsFetcherAggregatedResults *_friendFetchResults;
}

@property(retain, nonatomic) MNFriendsFetcherAggregatedResults *friendFetchResults; // @synthesize friendFetchResults=_friendFetchResults;
@property(retain, nonatomic) FBMPresenceObserver *presenceObserver; // @synthesize presenceObserver=_presenceObserver;
@property(retain, nonatomic) FBLocalizedIndexedCollation *currentCollation; // @synthesize currentCollation=_currentCollation;
@property(nonatomic) BOOL hasMessengerSections; // @synthesize hasMessengerSections=_hasMessengerSections;
@property(copy, nonatomic) NSArray *messengerSectionTitles; // @synthesize messengerSectionTitles=_messengerSectionTitles;
@property(copy, nonatomic) NSArray *activeFriends; // @synthesize activeFriends=_activeFriends;
@property(copy, nonatomic) NSArray *messengerFriends; // @synthesize messengerFriends=_messengerFriends;
@property(nonatomic) BOOL friendsLoaded; // @synthesize friendsLoaded=_friendsLoaded;
@property(readonly, nonatomic) MNOnlineStatusManager *onlineStatusManager; // @synthesize onlineStatusManager=_onlineStatusManager;
@property(nonatomic) __weak id <MNPeopleModelControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_facebookFilterSectionHeaderTitle;
- (unsigned int)numberOfFavorites;
- (BOOL)shouldEnablePeopleRanking;
- (BOOL)isLoggedInUserOnlineForChat;
- (unsigned int)friendsCountForFilter:(unsigned int)arg1;
- (unsigned int)topFriendsCountForFilter:(unsigned int)arg1;
- (id)conversationPersonForIndexPath:(id)arg1 forFilter:(unsigned int)arg2;
- (int)sectionForSectionIndexTitle:(id)arg1 atIndex:(int)arg2 forFilter:(unsigned int)arg3;
- (id)sectionIndexTitlesforFilter:(unsigned int)arg1;
- (id)conversationInitiatorForSection:(unsigned int)arg1 forFilter:(unsigned int)arg2;
- (id)titleForHeaderInSection:(unsigned int)arg1 forFilter:(unsigned int)arg2;
- (BOOL)shouldDisplayHeaderInSection:(unsigned int)arg1 forFilter:(unsigned int)arg2;
- (unsigned int)numberOfRowsInSection:(unsigned int)arg1 forFilter:(unsigned int)arg2;
- (unsigned int)numberOfSectionsForFilter:(unsigned int)arg1;
- (unsigned int)lastVisibleSectionIndex:(unsigned int)arg1;
- (BOOL)hasAnyFriends;
- (void)didUpdateAggregatedFriends:(id)arg1 aggregatedResults:(id)arg2;
@property(readonly, nonatomic) BOOL presenceLoaded;
- (void)_buildTableViewSectionData;
- (void)clearSectionData;
- (void)reloadFriends;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithAppProperties:(id)arg1 onlineStatusManager:(id)arg2 session:(id)arg3 presenceObserver:(id)arg4 friendsFetcherAggregator:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

