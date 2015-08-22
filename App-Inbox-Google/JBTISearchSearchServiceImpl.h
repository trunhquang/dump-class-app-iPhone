//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplRpcServerInterface.h"

@class JBTICommonSapiSpan_Factory, JBTISearchSearchServiceImpl_DelayedRequest, JavaUtilHashMap, NSString;

@interface JBTISearchSearchServiceImpl : NSObject <ComGoogleAppsBigtopSyncClientImplRpcServerInterface>
{
    int requestsInFlight_;
    JBTISearchSearchServiceImpl_DelayedRequest *delayedRequest_;
    id <JCGCuChannel> channel_;
    JavaUtilHashMap *clientStates_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    int maxRequestsInFlight_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_delayedRequest_;
+ (void)initialize;
- (void)dealloc;
- (void)maybeSendDelayedRequestWithJBTISearchSearchServiceImpl_ClientState:(id)arg1;
- (id)getClientStateWithComGoogleAppsBigtopSyncClientImplRpcRpcServerContext:(id)arg1;
- (void)sendRequestWithComGoogleAppsBigtopSyncClientImplRpcRpcServerContext:(id)arg1 withComGoogleAppsBigtopServicesSearchBigTopClientSearchRequest:(id)arg2 withJBTISearchSearchServiceImpl_ClientState:(id)arg3 withJBTICommonSapiSpan:(id)arg4;
- (void)processWithComGoogleAppsBigtopSyncClientImplRpcRpcServerContext:(id)arg1 withComGoogleProtobufMessageLite:(id)arg2;
- (id)initWithJCGCuChannel:(id)arg1 withJBTICommonSapiSpan_Factory:(id)arg2 withInt:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

