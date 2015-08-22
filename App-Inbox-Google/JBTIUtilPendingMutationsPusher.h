//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonBaseReceiver.h"

@class NSString;

@interface JBTIUtilPendingMutationsPusher : NSObject <ComGoogleCommonBaseReceiver>
{
    id <ComGoogleCumulusApiClient> cumulusClient_;
    id <JCGCuDelayedWorkQueue> clientWorkQueue_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    id <JBTICommonTransactionHistory> transactionHistory_;
    int pendingModifiedCount_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_acceptWithComGoogleCumulusCommandCommandProto_SyncStatus__params;
+ (void)initialize;
+ (id)createPendingMutationsPusherWithComGoogleCumulusApiClient:(id)arg1 withJCGCuDelayedWorkQueue:(id)arg2 withJBTICommonCumulusTransactionHistory:(id)arg3 withComGoogleCumulusCommonUtilClock:(id)arg4 withComGoogleCumulusCommonUtilEventDispatcher:(id)arg5;
- (void)dealloc;
- (void)acceptWithId:(id)arg1;
- (void)pushWithInt:(int)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)initWithComGoogleCumulusApiClient:(id)arg1 withJCGCuDelayedWorkQueue:(id)arg2 withJBTICommonCumulusTransactionHistory:(id)arg3 withComGoogleCumulusCommonUtilClock:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

