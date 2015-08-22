//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataItemsStorageClustersTableController, ComGoogleAppsBigtopDataItemsStorageItemChangesToSyncUpTableController, ComGoogleAppsBigtopDataItemsStorageItemsTableController, ComGoogleAppsXplatSqlSqlDatabase, ComGoogleAppsXplatUtilConcurrentExecutionGuard;

@interface ComGoogleAppsBigtopDataItemsStorageItemsSyncStatusManager : NSObject
{
    ComGoogleAppsBigtopDataItemsStorageClustersTableController *clustersTableController_;
    ComGoogleAppsBigtopDataItemsStorageItemChangesToSyncUpTableController *itemChangesToSyncUpTableController_;
    ComGoogleAppsBigtopDataItemsStorageItemsTableController *itemsTableController_;
    id <ComGoogleAppsXplatPubsubPublisher> itemsSyncStatusPublisher_;
    ComGoogleAppsXplatSqlSqlDatabase *database_;
    id <JavaUtilConcurrentExecutor> executor_;
    id lock_;
    ComGoogleAppsXplatUtilConcurrentExecutionGuard *updateCountsGuard_;
    BOOL isBackfillInProgress_;
    BOOL isSyncInProgress_;
    int numItemsInStorage_;
    int numClustersInStorage_;
    int numPendingItemChanges_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithComGoogleAppsBigtopDataItemsStorageClustersTableController_withComGoogleAppsBigtopDataItemsStorageItemChangesToSyncUpTableController_withComGoogleAppsBigtopDataItemsStorageItemsTableController_withComGoogleAppsXplatPubsubPubSubHub_withComGoogleAppsXplatSqlSqlDatabase_withJavaUtilConcurrentExecutor_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (id)getSyncStatusSnapshot;
- (id)publish;
- (id)updateAndGetSyncStatus;
- (id)guardedUpdateCounts;
- (id)updateCounts;
- (id)updateCountsThenPublish;
- (id)localChangeAdded;
- (id)evictionFinished;
- (id)syncFinished;
- (void)syncStarted;
- (id)backfillFinished;
- (void)backfillStarted;
- (id)initWithComGoogleAppsBigtopDataItemsStorageClustersTableController:(id)arg1 withComGoogleAppsBigtopDataItemsStorageItemChangesToSyncUpTableController:(id)arg2 withComGoogleAppsBigtopDataItemsStorageItemsTableController:(id)arg3 withComGoogleAppsXplatPubsubPubSubHub:(id)arg4 withComGoogleAppsXplatSqlSqlDatabase:(id)arg5 withJavaUtilConcurrentExecutor:(id)arg6;

@end

