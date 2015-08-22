//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataItemsFetchdetailsThreadDetailsFetcher, ComGoogleAppsXplatUtilConcurrentExecutionGuard, NSString;

@interface ComGoogleAppsBigtopDataItemsMemoryItemMessageList : NSObject
{
    NSString *itemId_;
    NSString *listId_;
    id <JavaUtilConcurrentExecutor> executor_;
    ComGoogleAppsBigtopDataItemsFetchdetailsThreadDetailsFetcher *threadDetailsFetcher_;
    id <ComGoogleAppsXplatPubsubPublisher> itemMessageListVersionChangePublisher_;
    id <ComGoogleAppsXplatPubsubSubscriber> itemsStorageUpdatesSubscriber_;
    ComGoogleAppsXplatUtilConcurrentExecutionGuard *startGuard_;
    ComGoogleAppsXplatUtilConcurrentExecutionGuard *reloadFromDatabaseGuard_;
    id lock_;
    id <JavaUtilList> messages_;
    int version__;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (void)subscribeToItemsStorageUpdates;
- (void)updateEntriesWithJavaUtilList:(id)arg1;
- (id)getItemMessageListWithNSString:(id)arg1;
- (id)guardedLoadMessagesFromDatabase;
- (id)loadMessagesFromDatabase;
- (id)toGetItemMessageListResponse;
- (id)toStartItemMessageListResponse;
- (id)guardedStart;
- (id)start;
- (id)description;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withJavaUtilConcurrentExecutor:(id)arg3 withComGoogleAppsBigtopDataItemsFetchdetailsThreadDetailsFetcher:(id)arg4 withComGoogleAppsXplatPubsubPublisher:(id)arg5 withComGoogleAppsXplatPubsubSubscriber:(id)arg6;

@end

