//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsXplatRpcAbstractRpcClient_ServerInvocation.h"

@class ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncRequest, ComGoogleAppsBigtopDataEntitiesEntityServiceClient;

@interface ComGoogleAppsBigtopDataEntitiesEntityServiceClient_$1 : ComGoogleAppsXplatRpcAbstractRpcClient_ServerInvocation
{
    ComGoogleAppsBigtopDataEntitiesEntityServiceClient *this$0_;
    ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncRequest *val$request_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataEntitiesEntityServiceClient:(id)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncRequest:(id)arg2 withNSString:(id)arg3;
- (id)invokeWithComGoogleAppsXplatRpcRpcServerContext:(id)arg1;

@end

