//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleCumulusApiPluginSweepFilter_EvictionPhaseEnum, ComGoogleCumulusSyncClientSyncCollectorWorkQueueProxies_SyncSweeperWorkQueueProxy, ComGoogleCumulusSyncSyncProto_StoredSubscription, NSString;

@interface ComGoogleCumulusSyncClientSyncCollectorWorkQueueProxies_SyncSweeperWorkQueueProxy_$1 : NSObject <JavaLangRunnable>
{
    ComGoogleCumulusSyncClientSyncCollectorWorkQueueProxies_SyncSweeperWorkQueueProxy *this$0_;
    ComGoogleCumulusSyncSyncProto_StoredSubscription *val$storedSubscription_;
    id <JavaUtilMap> val$subscriptionChangeMap_;
    ComGoogleCumulusApiPluginSweepFilter_EvictionPhaseEnum *val$evictionPhase_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientSyncCollectorWorkQueueProxies_SyncSweeperWorkQueueProxy:(id)arg1 withComGoogleCumulusSyncSyncProto_StoredSubscription:(id)arg2 withJavaUtilMap:(id)arg3 withComGoogleCumulusApiPluginSweepFilter_EvictionPhaseEnum:(id)arg4;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

