//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphQLConnectionInterface.h"
#import "FBGraphQLConnectionStoreListener.h"

@class FBGraphQLConnectionControllerListenerAnnouncer, FBGraphQLConnectionControllerState, FBGraphQLConnectionStore, NSString;

@interface FBGraphQLConnectionController : NSObject <FBGraphQLConnectionInterface, FBGraphQLConnectionStoreListener>
{
    FBGraphQLConnectionControllerState *_state;
    CDUnknownFunctionPointerType _queryFactory;
    id <FBGraphQLService> _service;
    id <FBGraphQLConnectionControllerConfiguration> _controllerConfiguration;
    FBGraphQLConnectionControllerListenerAnnouncer *_announcer;
    FBGraphQLConnectionStore *_store;
}

- (void).cxx_destruct;
- (void)_sendQueriesAtLocation:(id)arg1 requestedLocation:(id)arg2 order:(unsigned int)arg3 limits:(id)arg4 userInfo:(id)arg5 beforeCursor:(id)arg6;
- (id)store;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)registerEdgeFilter:(id)arg1 withPriority:(int)arg2;
- (void)asynchronouslyApplyStateModification:(id)arg1;
- (void)synchronouslyApplyStateModification:(id)arg1;
- (void)cancelLoadAtLocation:(id)arg1;
- (void)loadEdgesAtLocation:(id)arg1 order:(unsigned int)arg2 limits:(id)arg3 userInfo:(id)arg4;
- (void)loadEdgesWithLimits:(id)arg1 userInfo:(id)arg2;
- (id)state;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousStateByUpdatingLocation:(id)arg2;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned int)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned int)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStoreDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithQueryFactory:(CDUnknownFunctionPointerType)arg1 service:(id)arg2 controllerConfiguration:(id)arg3 storeConfiguration:(id)arg4 consistentLookasideCache:(id)arg5 fieldSet:(const struct FBGraphQLFieldSet *)arg6 persistenceCoordinator:(id)arg7;
- (void)deleteChunksFromIndex:(unsigned int)arg1;
- (id)addEdgesFromConnectionPage:(id)arg1 atLocation:(id)arg2 userInfo:(id)arg3;
- (void)removeConnectionListener:(id)arg1;
- (void)addConnectionListener:(id)arg1;
- (id)connectionState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

