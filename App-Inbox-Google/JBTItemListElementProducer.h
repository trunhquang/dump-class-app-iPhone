//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig, ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config, ComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_ProducerModeEnum, JBTCMessageVisibilityHelper, JBTCTypeIdStringUtil, JBTIClustersClusterConfigFactory, JBTIClustersClusteredItemsFactory, JBTICommonSapiSpan_Factory, JBTIConversationConversationFactory, JBTIItemsQueryMetadataFactory, JBTITasksTaskFactory, JBTSapiMainThreadHelper, NSString;

@interface JBTItemListElementProducer : ComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer
{
    JBTSapiMainThreadHelper *mainThreadHelper_;
    id <ComGoogleAppsBigtopDataItemsApiMissingItemsProto_ItemsService_ClientInterface> itemsService_;
    ComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig *itemListConfig_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *config_;
    JBTIConversationConversationFactory *conversationFactory_;
    JBTITasksTaskFactory *taskFactory_;
    JBTIClustersClusterConfigFactory *clusterConfigFactory_;
    JBTIClustersClusteredItemsFactory *clusteredItemsFactory_;
    JBTIItemsQueryMetadataFactory *queryMetadataFactory_;
    JBTCMessageVisibilityHelper *messageVisibilityHelper_;
    id <ComGoogleAppsXplatPubsubSubscriber> itemListVersionChangeSubscriber_;
    NSString *itemListId_;
    ComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_ProducerModeEnum *producerMode_;
    JBTCTypeIdStringUtil *typeIdStringUtil_;
    id <JavaUtilSet> currentItemIds_;
    id <ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener> listener_;
    BOOL started_;
    BOOL getItemListInProgress_;
    BOOL hasMore_;
    BOOL isBackfillInProgress_;
    int itemListVersion_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getItemsWithJBTSpan__params;
+ (id)__annotations_setQueryUpdateListenerWithJBTICommonListener__params;
+ (id)__annotations_configErrorWithNSString_withJBTSpan__params;
+ (id)__annotations_updateConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config_withJBTSpan__params;
+ (void)initialize;
- (void)dealloc;
- (id)localPresortedViewForViewTypeWithComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum:(id)arg1;
- (id)createQueryMetadataForExpandedClusterWithComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum:(id)arg1;
- (id)createClusteredItemWithJBTId:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ItemListEntry:(id)arg2;
- (id)createItemWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg2 withNSString:(id)arg3;
- (id)convertEntryToItemWithJBTId:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ItemListEntry:(id)arg2;
- (id)getClustersItemIdWithNSString:(id)arg1;
- (id)getGmailItemIdWithNSString:(id)arg1;
- (id)getItemIdWithComGoogleAppsBigtopDataItemsItemsProto_ItemListEntry:(id)arg1;
- (id)convertItemListEntriesToChangesWithComGoogleAppsBigtopDataItemsItemsProto_GetItemListResponse:(id)arg1;
- (void)notifyListenerWithChangeListWithJavaUtilList:(id)arg1 withJBTSpan:(id)arg2;
- (void)subscribeToItemListChanges;
- (id)getItemsWithJBTSpan:(id)arg1;
- (void)setQueryUpdateListenerWithJBTICommonListener:(id)arg1;
- (void)setBackFillWithBoolean:(BOOL)arg1;
- (void)setIsImmediateQueryWithBoolean:(BOOL)arg1;
- (void)setContinuousQueryWithBoolean:(BOOL)arg1;
- (void)setIsObjectFetchWithBoolean:(BOOL)arg1;
- (void)enableIntermediateResults;
- (id)getQueryStrings;
- (id)getConfig;
- (void)addResetGetItemListInProgressOnFailureCallbackWithComGoogleCommonUtilConcurrentListenableFuture:(id)arg1 withNSString:(id)arg2;
- (void)refreshItemList;
- (void)changeItemIds;
- (void)changeItemListSize;
- (void)configErrorWithNSString:(id)arg1 withJBTSpan:(id)arg2;
- (void)updateConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTSpan:(id)arg2;
- (void)setListenerWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener:(id)arg1;
- (BOOL)hasMore;
- (BOOL)isExpectingMoreChanges;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startWithJBTSpan:(id)arg1;
- (void)acceptVisitorWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Visitor:(id)arg1;
- (id)initWithJBTSapiMainThreadHelper:(id)arg1 withComGoogleAppsBigtopDataItemsApiMissingItemsProto_ItemsService_ClientInterface:(id)arg2 withComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg3 withJBTICommonSapiSpan_Factory:(id)arg4 withComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg5 withJBTIConversationConversationFactory:(id)arg6 withJBTITasksTaskFactory:(id)arg7 withJBTIClustersClusterConfigFactory:(id)arg8 withJBTIClustersClusteredItemsFactory:(id)arg9 withJBTIItemsQueryMetadataFactory:(id)arg10 withJBTCMessageVisibilityHelper:(id)arg11 withComGoogleAppsXplatPubsubSubscriber:(id)arg12 withComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_ProducerModeEnum:(id)arg13 withJBTCTypeIdStringUtil:(id)arg14;

@end

