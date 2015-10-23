//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSDictionary, NSHashTable, NSManagedObjectContext, NSMutableDictionary, NSMutableSet;

@interface AFContentAccessManager : NSObject
{
    BOOL _batchUpdating;
    NSManagedObjectContext *_context;
    NSCache *_cachedResults;
    NSHashTable *_badgeDelegates;
    NSHashTable *_purchasableLocationDelegates;
    NSDictionary *_purchasableOrderingCache;
    NSMutableDictionary *_purchasableInfoCache;
    NSDictionary *_badgeStateCache;
    NSMutableSet *_currentMovedObjectsSet;
}

+ (id)supportedEntityNames;
+ (id)supportedContentTypes;
@property(nonatomic, getter=isBatchUpdating) BOOL batchUpdating; // @synthesize batchUpdating=_batchUpdating;
@property(retain, nonatomic) NSMutableSet *currentMovedObjectsSet; // @synthesize currentMovedObjectsSet=_currentMovedObjectsSet;
@property(retain, nonatomic) NSDictionary *badgeStateCache; // @synthesize badgeStateCache=_badgeStateCache;
@property(retain, nonatomic) NSMutableDictionary *purchasableInfoCache; // @synthesize purchasableInfoCache=_purchasableInfoCache;
@property(retain, nonatomic) NSDictionary *purchasableOrderingCache; // @synthesize purchasableOrderingCache=_purchasableOrderingCache;
@property(retain, nonatomic) NSHashTable *purchasableLocationDelegates; // @synthesize purchasableLocationDelegates=_purchasableLocationDelegates;
@property(retain, nonatomic) NSHashTable *badgeDelegates; // @synthesize badgeDelegates=_badgeDelegates;
@property(retain, nonatomic) NSCache *cachedResults; // @synthesize cachedResults=_cachedResults;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (BOOL)objIsPurchasable:(id)arg1;
- (id)managedObjectsForInfoCaches:(id)arg1;
- (id)indexPathForStatus:(int)arg1 index:(int)arg2;
- (id)infoCacheForPurchasable:(id)arg1;
- (int)indexForInfoCache:(id)arg1 inOrderingArray:(id)arg2 entityName:(id)arg3;
- (int)indexOfInfoCache:(id)arg1;
- (int)removeInfoCache:(id)arg1;
- (int)insertInfoCache:(id)arg1;
- (void)invalidateCacheForEntity:(id)arg1 withStatus:(int)arg2;
- (id)globalCacheForStatus:(int)arg1;
- (id)cacheKeyForEntity:(id)arg1 withStatus:(int)arg2;
- (void)allocatePurchasableStateCaches;
- (void)populatePurchasableStateCaches;
- (void)notifyPurchasableStatusDelegatesOfLocationUpdateForPurchasable:(id)arg1 startLocation:(id)arg2 endLocation:(id)arg3;
- (void)notifyPurchasableStatusDelegatesOfPurchasableRefresh:(id)arg1;
- (void)notifyPurchasableStatusDelegatesOfUpdateEnded;
- (void)notifyPurchasableStatusDelegatesOfUpdateBegan;
- (void)notifyBadgeDelegatesOfUpdate;
- (void)processMovedObjects;
- (void)processUpdatedObjects:(id)arg1;
- (void)processInsertedObjects:(id)arg1;
- (void)processUpdateDictionary:(id)arg1;
- (void)managedObjectContextDidChange:(id)arg1;
- (void)endBatchUpdates;
- (void)beginBatchUpdates;
- (id)nextMessageToDisplay;
- (int)badgeCountForPurchasableClass:(Class)arg1;
- (id)purchasablesWithEntity:(id)arg1 status:(int)arg2;
- (id)allAvailablePurchasablesWithClass:(Class)arg1;
- (id)unavailablePurchasablesWithClass:(Class)arg1;
- (id)unlockedPurchasablesWithClass:(Class)arg1;
- (id)lockedPurchasablesWithClass:(Class)arg1;
- (id)originalItemForContentPackClass:(Class)arg1;
- (id)purchasablesWithClass:(Class)arg1 withPredicate:(id)arg2;
- (id)purchasableWithIdentifier:(id)arg1;
- (void)removePurchasableStatusDelegate:(id)arg1;
- (void)removeBadgeDelegate:(id)arg1;
- (void)addPurchasableStatusDelegate:(id)arg1;
- (void)addBadgeDelegate:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)dealloc;

@end

