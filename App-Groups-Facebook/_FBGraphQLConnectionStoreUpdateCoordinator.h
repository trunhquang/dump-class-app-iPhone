//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphQLConnectionStore, FBGraphQLConsistentLookasideCache, NSMapTable, _FBGraphQLConnectionStoreUpdate;

@interface _FBGraphQLConnectionStoreUpdateCoordinator : NSObject
{
    FBGraphQLConsistentLookasideCache *_lookasideCache;
    NSMapTable *_handlesToEdges;
    NSMapTable *_edgesToHandles;
    _FBGraphQLConnectionStoreUpdate *_inProgressUpdate;
    struct map<FBConsistentLookasideCacheObservationHandle *, FBMemModelObject *, std::__1::less<FBConsistentLookasideCacheObservationHandle *>, std::__1::allocator<std::__1::pair<FBConsistentLookasideCacheObservationHandle *const, FBMemModelObject *>>> _coalescingUpdates;
    const struct FBGraphQLFieldSet *_fieldSet;
    FBGraphQLConnectionStore *_store;
}

@property(readonly, nonatomic) __weak FBGraphQLConnectionStore *store; // @synthesize store=_store;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_mungeMapsForUpdate:(id)arg1;
- (void)_updateObserversForTransition:(id)arg1;
- (void)_processCoalescingUpdatedEdgesIfNeeded;
- (void)_didReceiveUpdatedEdge:(id)arg1 forHandle:(id)arg2;
- (void)storeDidApplyTransition:(id)arg1 forModification:(id)arg2;
- (id)initWithStore:(id)arg1 consistentLookasideCache:(id)arg2 fieldSet:(const struct FBGraphQLFieldSet *)arg3;
- (id)init;

@end

