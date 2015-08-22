//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBInvalidating.h"

@class FBGraphQLConsistentLookasideCache, FBGroupsDataLoaderListenerAnnouncer, FBMemPageInfo, FBUserSession, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface FBGroupsDataLoader : NSObject <FBInvalidating>
{
    FBUserSession *_session;
    id <FBGroupsDataLoaderQueryProviderProtocol> _queryProvider;
    FBGraphQLConsistentLookasideCache *_cache;
    NSMutableArray *_allGroups;
    NSMutableArray *_filteredGroups;
    NSMutableArray *_serverFetchGroups;
    NSMutableDictionary *_observationHandles;
    int _downloadType;
    id _downloadHandle;
    FBMemPageInfo *_connectionPageInfo;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _disableCLCDataLoaderDelegateCallback;
    BOOL _bypassServerFetchGroups;
    BOOL _isRunning;
    int _state;
    int _cacheLoadingState;
    FBGroupsDataLoaderListenerAnnouncer *_announcer;
    BOOL _invalidated;
    BOOL _hideEmployeeGroups;
    BOOL _limitGroups;
    BOOL _disableCache;
    int _limitGroupsCount;
}

@property(nonatomic) BOOL disableCache; // @synthesize disableCache=_disableCache;
@property(nonatomic) int limitGroupsCount; // @synthesize limitGroupsCount=_limitGroupsCount;
@property(nonatomic) BOOL limitGroups; // @synthesize limitGroups=_limitGroups;
@property(nonatomic) BOOL hideEmployeeGroups; // @synthesize hideEmployeeGroups=_hideEmployeeGroups;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
- (void)_syncFavoriteGroupsToServer:(id)arg1;
- (id)_sortGroupsArray:(id)arg1 usingSortedArray:(id)arg2 preserveMissingGroups:(BOOL)arg3;
- (id)_reconstructResponseFromCachedData:(id)arg1;
- (void)_fetchCachedDataOnDiskForKey:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_cacheDataToDisk:(id)arg1 cacheKey:(id)arg2 callbackQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_reloadFilteredGroups;
- (void)refreshFiltersWithHideEmployeeGroups:(BOOL)arg1 limitGroups:(BOOL)arg2 limitGroupsCount:(int)arg3;
- (unsigned int)_findGroupID:(id)arg1;
- (void)_addFilteredGroups:(id)arg1;
- (void)syncFavoriteGroupsToCache:(id)arg1;
- (void)syncGroupsToCache;
- (void)_addGroup:(id)arg1;
- (void)_groupModelUpdated:(id)arg1;
- (void)_forceDelegateReloadWithError:(id)arg1;
- (void)_logStatupFinishedIfNeeded:(int)arg1;
- (void)_didSyncDiskCache;
- (BOOL)_needsUpdatesFetch;
- (BOOL)_needsFullFetch;
- (void)_cleanupUnusedCLCHandles;
- (BOOL)_isObservingCLCForGroupID:(id)arg1;
- (void)_stopObservingCLCForGroupID:(id)arg1;
- (void)_startObservingCLCforGroup:(id)arg1;
- (void)removeGroup:(id)arg1 bypassDelegate:(BOOL)arg2;
- (void)removeGroup:(id)arg1;
- (void)_syncGroupsToCache;
- (void)saveGroup:(id)arg1;
- (id)groupLoadedForID:(id)arg1;
- (unsigned int)indexForGroupID:(id)arg1;
- (id)groupForIndex:(unsigned int)arg1;
- (void)_downloadDeltas:(int)arg1;
- (void)_downloadUpdates:(int)arg1;
- (void)_downloadData:(int)arg1;
- (void)_loadDataFromCache;
- (BOOL)_isLoadingCache;
- (BOOL)_canDownloadDeltas;
- (BOOL)isDownloadingData;
@property(readonly, copy, nonatomic) NSArray *loadedObjects;
- (int)count;
- (BOOL)isInReadyState:(BOOL)arg1;
- (BOOL)_hasFullDataSet;
- (BOOL)hasData;
- (void)refreshUsingDeltas;
- (void)refreshUnreadCounts;
- (void)refreshIfStale;
- (void)reload;
- (void)cancelRequests;
- (void)stop;
- (BOOL)isRunning;
- (void)start;
- (void)setQueryProvider:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

