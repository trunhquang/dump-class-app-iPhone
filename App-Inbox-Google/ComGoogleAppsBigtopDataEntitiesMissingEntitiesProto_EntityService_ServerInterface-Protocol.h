//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleAppsBigtopDataEntitiesEntitiesProto_ChangeEntityRequest, ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntityGetSyncStatusRequest, ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncRequest, ComGoogleAppsBigtopDataEntitiesEntitiesProto_GetEntityRequest, ComGoogleAppsBigtopDataEntitiesEntitiesProto_ListEntitiesRequest, ComGoogleAppsXplatRpcRpcServerContext;

@protocol ComGoogleAppsBigtopDataEntitiesMissingEntitiesProto_EntityService_ServerInterface <NSObject, JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getSyncStatusWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_EntityGetSyncStatusRequest:(ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntityGetSyncStatusRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)listEntitiesWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_ListEntitiesRequest:(ComGoogleAppsBigtopDataEntitiesEntitiesProto_ListEntitiesRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getEntityWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_GetEntityRequest:(ComGoogleAppsBigtopDataEntitiesEntitiesProto_GetEntityRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)syncWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncRequest:(ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)changeEntityWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_ChangeEntityRequest:(ComGoogleAppsBigtopDataEntitiesEntitiesProto_ChangeEntityRequest *)arg2;
@end

