//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol FBGraphQLConnectionInterface <NSObject>
- (void)registerEdgeFilter:(id <FBGraphQLConnectionStoreEdgeFiltering>)arg1 withPriority:(int)arg2;
- (void)asynchronouslyApplyStateModification:(id <FBGraphQLConnectionStoreStateModifying>)arg1;
- (void)synchronouslyApplyStateModification:(id <FBGraphQLConnectionStoreStateModifying>)arg1;
- (void)deleteChunksFromIndex:(unsigned int)arg1;
- (id <FBGraphQLConnectionLocationInterface>)addEdgesFromConnectionPage:(id <FBGraphQLConnectionPageProtocol>)arg1 atLocation:(id <FBGraphQLConnectionLocationInterface>)arg2 userInfo:(NSDictionary *)arg3;
- (void)removeConnectionListener:(id <FBGraphQLConnectionStoreListener><FBGraphQLConnectionControllerListener>)arg1;
- (void)addConnectionListener:(id <FBGraphQLConnectionStoreListener><FBGraphQLConnectionControllerListener>)arg1;
- (id <FBGraphQLConnectionStateInterface>)connectionState;
@end

