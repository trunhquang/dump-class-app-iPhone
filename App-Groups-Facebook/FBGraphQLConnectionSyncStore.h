//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphQLConnectionStoreSimpleListener.h"
#import "FBGraphQLConnectionSyncStoreProtocol.h"

@class FBGraphQLConnectionStoreSimple, FBGraphQLConnectionSyncStoreListenerAnnouncer, FBGraphQLMemResponseCache, FBGraphQLMemResponseController, FBScenePath, NSString;

@interface FBGraphQLConnectionSyncStore : NSObject <FBGraphQLConnectionStoreSimpleListener, FBGraphQLConnectionSyncStoreProtocol>
{
    FBGraphQLConnectionSyncStoreListenerAnnouncer *_announcer;
    FBGraphQLMemResponseController *_memResponseController;
    FBGraphQLMemResponseCache *_graphQLMemResponseCache;
    BOOL _shouldDoFindRequest;
    BOOL _hasReachedEnd;
    BOOL _hasReachedBegin;
    BOOL _alwaysUseFirstCachedResponse;
    FBScenePath *_scenePath;
    id _requestID;
    FBGraphQLConnectionStoreSimple *_edgeStore;
    id <FBGraphQLConnectionSyncStoreRequestProvider> _requestProvider;
    int _networkRequestThresholdInSeconds;
}

+ (id)fbidForEdge:(id)arg1;
@property(nonatomic) BOOL alwaysUseFirstCachedResponse; // @synthesize alwaysUseFirstCachedResponse=_alwaysUseFirstCachedResponse;
@property(nonatomic) int networkRequestThresholdInSeconds; // @synthesize networkRequestThresholdInSeconds=_networkRequestThresholdInSeconds;
@property(retain, nonatomic) id <FBGraphQLConnectionSyncStoreRequestProvider> requestProvider; // @synthesize requestProvider=_requestProvider;
@property(retain, nonatomic) FBGraphQLConnectionStoreSimple *edgeStore; // @synthesize edgeStore=_edgeStore;
@property(retain, nonatomic) id requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
- (void).cxx_destruct;
- (void)_updateHasReachedEndOrBeginningWithConnectionPage:(id)arg1 requestType:(unsigned int)arg2;
- (void)updateNodes:(id)arg1;
- (void)_deleteRemainingInitialNodesIfNecessary;
- (void)_announceDidReachEndOrStartIfNecessary;
- (void)_performRequest:(id)arg1 insertLocation:(id)arg2 forceRefresh:(BOOL)arg3 requestType:(unsigned int)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_handleCachedResponse:(id)arg1 willDownloadFreshResponse:(BOOL)arg2 location:(id)arg3 requestType:(unsigned int)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_handleResponse:(id)arg1 error:(id)arg2 requestFinished:(BOOL)arg3 location:(id)arg4 replaceEdgeStore:(BOOL)arg5 requestType:(unsigned int)arg6 fromCache:(BOOL)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)_find:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)simpleConnectionStoreDidUpdatePageInfo:(id)arg1;
- (void)simpleConnectionStore:(id)arg1 didUpdateNodesAtIndexes:(id)arg2;
- (void)simpleConnectionStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2;
- (void)simpleConnectionStore:(id)arg1 didAddNodesAtIndexes:(id)arg2;
- (void)applyFilter:(id)arg1;
- (BOOL)nodeIsSynced:(id)arg1;
- (unsigned int)indexOfNode:(id)arg1;
- (unsigned int)countOfNodes;
- (id)nodeAtIndex:(unsigned int)arg1;
- (id)allNodes;
- (void)cancelSync;
- (BOOL)isSyncing;
- (void)forceRefresh:(CDUnknownBlockType)arg1;
- (void)syncNext:(CDUnknownBlockType)arg1;
- (void)syncPrevious:(CDUnknownBlockType)arg1;
- (BOOL)canSyncMorePrevious;
- (BOOL)canSyncMoreNext;
- (id)initWithEdgeStore:(id)arg1 graphQLMemResponseController:(id)arg2 graphQLMemResponseCache:(id)arg3 requestProvider:(id)arg4 networkRequestThresholdInSeconds:(int)arg5 alwaysUseFirstCachedResponse:(BOOL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

