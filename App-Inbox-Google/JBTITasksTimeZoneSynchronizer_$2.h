//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplRpcRpcCallback.h"

@class JBTITasksTimeZoneSynchronizer, NSString;

@interface JBTITasksTimeZoneSynchronizer_$2 : NSObject <ComGoogleAppsBigtopSyncClientImplRpcRpcCallback>
{
    JBTITasksTimeZoneSynchronizer *this$0_;
    id <TMLTimeZone> val$timeZone_;
    id <JBTCallback> val$syncCallback_;
    id <JBTICommonSapiSpan> val$syncSpan_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTITasksTimeZoneSynchronizer:(id)arg1 withTMLTimeZone:(id)arg2 withJBTCallback:(id)arg3 withJBTICommonSapiSpan:(id)arg4;
- (void)failure;
- (void)successWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

