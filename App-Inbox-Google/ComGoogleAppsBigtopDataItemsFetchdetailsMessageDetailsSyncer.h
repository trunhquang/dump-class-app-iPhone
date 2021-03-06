//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsFetchQueue, ComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsFetchQueueProcessor, ComGoogleAppsBigtopDataItemsStorageItemsCoordinator, ComGoogleAppsXplatSqlSqlDatabase;

@interface ComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsSyncer : NSObject
{
    ComGoogleAppsXplatSqlSqlDatabase *database_;
    ComGoogleAppsBigtopDataItemsStorageItemsCoordinator *itemsCoordinator_;
    ComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsFetchQueue *queue_;
    ComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsFetchQueueProcessor *queueProcessor_;
    id <JavaUtilConcurrentExecutor> executor_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithComGoogleAppsXplatSqlSqlDatabase_withComGoogleAppsBigtopDataItemsStorageItemsCoordinator_withComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsFetchQueue_withComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsFetchQueueProcessor_withJavaUtilConcurrentExecutor_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (id)resumeSyncingFromDatabaseStateWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)createMessageFetchWithComGoogleAppsBigtopDataItemsStorageItemMessage:(id)arg1 withNSString:(id)arg2;
- (void)enqueueAnyMissingMessagesWithJavaUtilList:(id)arg1 withNSString:(id)arg2 withComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsFetchQueue_PriorityEnum:(id)arg3;
- (id)fetchThreadWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2 withComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsFetchQueue_PriorityEnum:(id)arg3;
- (id)fetchThreadsWithJavaUtilList:(id)arg1 withComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsFetchQueue_PriorityEnum:(id)arg2;
- (id)syncMessagesWithJavaUtilList:(id)arg1;
- (id)prefetchMessagesWithJavaUtilList:(id)arg1;
- (id)initWithComGoogleAppsXplatSqlSqlDatabase:(id)arg1 withComGoogleAppsBigtopDataItemsStorageItemsCoordinator:(id)arg2 withComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsFetchQueue:(id)arg3 withComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsFetchQueueProcessor:(id)arg4 withJavaUtilConcurrentExecutor:(id)arg5;

@end

