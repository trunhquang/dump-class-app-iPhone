//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusCommonNetProto_ChannelTypeEnum, ComGoogleCumulusCommonUtilBox, ComGoogleCumulusSyncClientCommandAborter, ComGoogleCumulusSyncClientCommandProtoHandler, ComGoogleCumulusSyncClientLoadIntent, JavaUtilLoggingLevel;

@interface ComGoogleCumulusSyncClientLogResponseGroupProcessor : NSObject
{
    ComGoogleCumulusSyncClientLoadIntent *frontendReceiverIntent_;
    id <JavaUtilMap> responseMap_;
    id <JavaUtilMap> cqUpdateMap_;
    id <ComGoogleCumulusApiMetricsSpan> responseProcessingSpan_;
    double groupProcessingStartTimeMs_;
    BOOL foundResponseForRetry_;
    JavaUtilLoggingLevel *logLevel_;
    id <JCGCuCallback> groupCompleteCallback_;
    BOOL busyProcessing_;
    id <ComGoogleCumulusSyncClientObjectManager_ObjectGroup> queuedGroup_;
    BOOL storeHasWritePressure_;
    BOOL waitingForWritePressureChange_;
    ComGoogleCumulusCommonNetProto_ChannelTypeEnum *channelType_;
    int priority_;
    ComGoogleCumulusSyncClientCommandProtoHandler *commandProtoHandler_;
    id <ComGoogleCumulusSyncClientObjectManager> objectManager_;
    id <ComGoogleCumulusSyncClientMissingObjectIntentManager> missingObjectIntentManager_;
    id <ComGoogleCumulusApiTypeCommandProcessor> commandProcessor_;
    id <JavaUtilList> updateObservers_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    id <ComGoogleCumulusCommonClientRetryPolicy> commandRetryPolicy_;
    id <ComGoogleCumulusCommonClientRetryPolicy> backgroundRetryPolicy_;
    id <ComGoogleCumulusSyncClientObjectSyncer> backgroundSyncer_;
    ComGoogleCumulusSyncClientCommandAborter *commandAborter_;
    id <JCGCuPrioritizedWorkQueue> workQueue_;
    id <ComGoogleCommonBaseReceiver> workerEventBus_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    ComGoogleCumulusCommonUtilBox *currentProcessingRequest_;
    id <ComGoogleCumulusSyncClientObjectStore> objectStore_;
    id <JavaLangRunnable> continuationRunnable_;
    id <ComGoogleCommonBaseReceiver> writePressureReceiver_;
}

+ (void)initialize;
- (void)dealloc;
- (void)finishCqUpdateProcessingWithJavaUtilMap:(id)arg1 withComGoogleCumulusApiMetricsSpan:(id)arg2;
- (void)processCqUpdateWithJavaUtilMap:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg2 withComGoogleCumulusCommonUpdateObserver_Update:(id)arg3;
- (id)processSingleResponseWithComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg1 withNSString:(id)arg2 withComGoogleCumulusCommandCommandProto_LogResponse:(id)arg3 withJavaUtilMap:(id)arg4 withComGoogleCumulusApiMetricsSpan:(id)arg5 withJavaUtilLoggingLevel:(id)arg6;
- (id)completeObjectGroupWithComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg1;
- (id)processSoidListWithComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg1 withJavaUtilCollection:(id)arg2;
- (void)waitForWritePressureToClearWithComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg1;
- (void)scheduleGroupContinuationWithComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg1;
- (id)getRetryPolicyWithNSString:(id)arg1 withComGoogleCumulusSyncPrioritizedSyncState_SyncReasonEnum:(id)arg2;
- (BOOL)isResponseRetryWithNSString:(id)arg1;
- (BOOL)isOverProcessingTimeLimit;
- (id)processLoadedGroupWhileAbleWithComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg1;
- (id)getCurrentPendingRequests;
- (void)processLoadedGroupWithComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg1;
- (void)processLogResponseGroupWithJavaUtilList:(id)arg1 withNSString:(id)arg2 withJCGCuCallback:(id)arg3;
- (id)getThrashingLogLevel;
- (BOOL)getHadResponseForRetry;
- (BOOL)isProcessing;
- (BOOL)shouldThrottleOnWritePressure;
- (id)initWithComGoogleCumulusCommonNetProto_ChannelTypeEnum:(id)arg1 withComGoogleCumulusSyncClientCommandProtoHandler:(id)arg2 withComGoogleCumulusSyncClientObjectManager:(id)arg3 withComGoogleCumulusSyncClientMissingObjectIntentManager:(id)arg4 withComGoogleCumulusApiTypeCommandProcessor:(id)arg5 withComGoogleCumulusCommonUtilBox:(id)arg6 withJavaUtilList:(id)arg7 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg8 withComGoogleCumulusCommonClientRetryPolicy:(id)arg9 withComGoogleCumulusCommonClientRetryPolicy:(id)arg10 withComGoogleCumulusSyncClientObjectSyncer:(id)arg11 withComGoogleCumulusSyncClientCommandAborter:(id)arg12 withJCGCuPrioritizedWorkQueue:(id)arg13 withComGoogleCommonBaseReceiver:(id)arg14 withComGoogleCumulusCommonUtilClock:(id)arg15 withComGoogleCumulusSyncClientObjectStore:(id)arg16;
- (id)initWithComGoogleCumulusCommonNetProto_ChannelTypeEnum:(id)arg1 withComGoogleCumulusSyncClientCommandProtoHandler:(id)arg2 withComGoogleCumulusSyncClientObjectManager:(id)arg3 withComGoogleCumulusSyncClientMissingObjectIntentManager:(id)arg4 withComGoogleCumulusApiTypeCommandProcessor:(id)arg5 withComGoogleCumulusCommonUtilBox:(id)arg6 withJavaUtilList:(id)arg7 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg8 withComGoogleCumulusCommonClientRetryPolicy:(id)arg9 withComGoogleCumulusCommonClientRetryPolicy:(id)arg10 withComGoogleCumulusSyncClientObjectSyncer:(id)arg11 withComGoogleCumulusSyncClientCommandAborter:(id)arg12 withJCGCuPrioritizedWorkQueue:(id)arg13 withComGoogleCommonBaseReceiver:(id)arg14 withComGoogleCumulusSyncClientObjectStore:(id)arg15;

@end

