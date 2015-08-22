//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_ApplyChangesRequest, ComGoogleAppsBigtopDataItemsItemsProto_ApplyUndoRequest, ComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListItemServerPermIdsRequest, ComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListSizeRequest, ComGoogleAppsBigtopDataItemsItemsProto_GetClusterListRequest, ComGoogleAppsBigtopDataItemsItemsProto_GetItemListRequest, ComGoogleAppsBigtopDataItemsItemsProto_GetItemMessageListRequest, ComGoogleAppsBigtopDataItemsItemsProto_GetSyncStatusRequest, ComGoogleAppsBigtopDataItemsItemsProto_ProcessLocalBulkOpWorkRequest, ComGoogleAppsBigtopDataItemsItemsProto_RefreshItemListRequest, ComGoogleAppsBigtopDataItemsItemsProto_RunEvictionRequest, ComGoogleAppsBigtopDataItemsItemsProto_StartItemListRequest, ComGoogleAppsBigtopDataItemsItemsProto_StartItemMessageListRequest, ComGoogleAppsBigtopDataItemsItemsProto_StopItemListRequest, ComGoogleAppsBigtopDataItemsItemsProto_SyncRequest, ComGoogleAppsXplatRpcRpcClientContext;

@protocol ComGoogleAppsBigtopDataItemsApiMissingItemsProto_ItemsService_ClientInterface <NSObject, JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)processLocalBulkOpWorkWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ProcessLocalBulkOpWorkRequest:(ComGoogleAppsBigtopDataItemsItemsProto_ProcessLocalBulkOpWorkRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)runEvictionWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_RunEvictionRequest:(ComGoogleAppsBigtopDataItemsItemsProto_RunEvictionRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getSyncStatusWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_GetSyncStatusRequest:(ComGoogleAppsBigtopDataItemsItemsProto_GetSyncStatusRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)syncWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_SyncRequest:(ComGoogleAppsBigtopDataItemsItemsProto_SyncRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)applyUndoWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ApplyUndoRequest:(ComGoogleAppsBigtopDataItemsItemsProto_ApplyUndoRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)applyChangesWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ApplyChangesRequest:(ComGoogleAppsBigtopDataItemsItemsProto_ApplyChangesRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getItemMessageListWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_GetItemMessageListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_GetItemMessageListRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)startItemMessageListWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_StartItemMessageListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_StartItemMessageListRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getClusterListWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_GetClusterListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_GetClusterListRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getItemListWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_GetItemListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_GetItemListRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)refreshItemListWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_RefreshItemListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_RefreshItemListRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)changeItemListItemServerPermIdsWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListItemServerPermIdsRequest:(ComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListItemServerPermIdsRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)changeItemListSizeWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListSizeRequest:(ComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListSizeRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)stopItemListWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_StopItemListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_StopItemListRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)startItemListWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_StartItemListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_StartItemListRequest *)arg2;
@end

