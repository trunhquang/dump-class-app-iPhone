//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilConcurrentCallable.h"

@class ComGoogleAppsXplatRpcRpcMethod, ComGoogleAppsXplatRpcRpcServerContext, ComGoogleAppsXplatRpcSubmittingRpcDispatcher, NSString;

@interface ComGoogleAppsXplatRpcSubmittingRpcDispatcher_$1 : NSObject <JavaUtilConcurrentCallable>
{
    ComGoogleAppsXplatRpcSubmittingRpcDispatcher *this$0_;
    NSString *val$requestId_;
    NSString *val$requestName_;
    ComGoogleAppsXplatRpcRpcServerContext *val$ctx_;
    ComGoogleAppsXplatRpcRpcMethod *val$method_;
    id val$request_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsXplatRpcSubmittingRpcDispatcher:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withComGoogleAppsXplatRpcRpcServerContext:(id)arg4 withComGoogleAppsXplatRpcRpcMethod:(id)arg5 withId:(id)arg6;
- (id)call;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

