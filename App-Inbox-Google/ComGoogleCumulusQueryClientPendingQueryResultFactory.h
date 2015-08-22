//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusQueryClientObjectUpdateObserver_UpdateOnlyQueryRegistry, ComGoogleCumulusQueryClientRemoteObjectReconciler;

@interface ComGoogleCumulusQueryClientPendingQueryResultFactory : NSObject
{
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    id <ComGoogleCumulusSyncClientObjectManager> objectManager_;
    id <ComGoogleCumulusQueryClientWorkerQueryRegistry> registry_;
    ComGoogleCumulusQueryClientObjectUpdateObserver_UpdateOnlyQueryRegistry *updateOnlyRegistry_;
    id <ComGoogleCumulusCommonClientRetryPolicy> queryRetryPolicy_;
    ComGoogleCumulusQueryClientRemoteObjectReconciler *remoteObjectReconciler_;
    id <ComGoogleCumulusApiPluginSegmentedQueryMatcherFactory> queryMatcherFactory_;
    id <JCGCuDelayedWorkQueue> workerWorkQueue_;
    id <ComGoogleCumulusQueryClientQueryResultCache> resultCache_;
    id <ComGoogleCumulusQueryClientQueryBackfiller> queryBackfiller_;
}

+ (void)initialize;
+ (id)processMatchingResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryClientClientQueryProtoUtil_ObjectRemovalFunction:(id)arg2;
+ (id)computeLoadAndVersionCheckMapWithComGoogleCumulusQueryInternalResult:(id)arg1 withBoolean:(BOOL)arg2 withComGoogleCumulusCommonObjectChecker:(id)arg3 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg4;
- (void)dealloc;
- (id)getRegisteredQueryWithNSString:(id)arg1;
- (id)createWithBoolean:(BOOL)arg1 withComGoogleCommonBaseReceiver:(id)arg2 withComGoogleCommonBaseReceiver:(id)arg3 withComGoogleCumulusCommonProfileProto_ObjectPolicyEnum:(id)arg4;
- (id)initWithComGoogleCumulusCommonMetric2SpanHelper:(id)arg1 withComGoogleCumulusSyncClientObjectManager:(id)arg2 withComGoogleCumulusQueryClientWorkerQueryRegistry:(id)arg3 withComGoogleCumulusQueryClientObjectUpdateObserver_UpdateOnlyQueryRegistry:(id)arg4 withComGoogleCumulusCommonClientRetryPolicy:(id)arg5 withComGoogleCumulusQueryClientRemoteObjectReconciler:(id)arg6 withComGoogleCumulusApiPluginSegmentedQueryMatcherFactory:(id)arg7 withJCGCuDelayedWorkQueue:(id)arg8 withComGoogleCumulusQueryClientQueryResultCache:(id)arg9 withComGoogleCumulusQueryClientQueryBackfiller:(id)arg10;

@end

