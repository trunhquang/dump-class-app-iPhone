//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplRpcRpcCallback.h"

@class ComGoogleAppsBigtopSyncClientImplRpcRpcClientContext, NSString;

@interface JBTINetworkCumulusNetworkImpl_$2 : NSObject <ComGoogleAppsBigtopSyncClientImplRpcRpcCallback>
{
    id <JBTCallback> val$callback_;
    ComGoogleAppsBigtopSyncClientImplRpcRpcClientContext *val$ctx_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTCallback:(id)arg1 withComGoogleAppsBigtopSyncClientImplRpcRpcClientContext:(id)arg2;
- (void)failure;
- (void)successWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

