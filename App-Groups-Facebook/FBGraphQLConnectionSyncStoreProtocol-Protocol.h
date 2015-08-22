//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBScenePath, NSArray;

@protocol FBGraphQLConnectionSyncStoreProtocol <NSObject>
@property(retain, nonatomic) FBScenePath *scenePath;
- (void)updateNodes:(NSArray *)arg1;
- (void)applyFilter:(id <FBGraphQLConnectionSyncStoreFilter>)arg1;
- (void)removeListener:(id <FBGraphQLConnectionSyncStoreListener>)arg1;
- (void)addListener:(id <FBGraphQLConnectionSyncStoreListener>)arg1;
- (id)nodeAtIndex:(unsigned int)arg1;
- (BOOL)nodeIsSynced:(id)arg1;
- (unsigned int)indexOfNode:(id)arg1;
- (unsigned int)countOfNodes;
- (NSArray *)allNodes;
- (void)forceRefresh:(void (^)(NSError *, id))arg1;
- (void)syncPrevious:(void (^)(NSError *, id))arg1;
- (void)syncNext:(void (^)(NSError *, id))arg1;
- (BOOL)isSyncing;
- (BOOL)canSyncMorePrevious;
- (BOOL)canSyncMoreNext;
- (void)cancelSync;
@end

