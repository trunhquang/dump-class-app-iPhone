//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusQueryClientCQUpdateQueue_DelayedRunner, ComGoogleCumulusQueryClientCQUpdateQueue_LatestUpdateStates, ComGoogleCumulusQueryClientCQUpdateQueue_Task, JavaUtilArrayList;

@interface ComGoogleCumulusQueryClientCQUpdateQueue : NSObject
{
    id <JavaUtilMap> objectUpdateMap_;
    ComGoogleCumulusQueryClientCQUpdateQueue_LatestUpdateStates *latestUpdateStates_;
    JavaUtilArrayList *updateQueues_;
    id <JCGCuDelayedWorkQueue> workQueue_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    int queueBudget_;
    int fallbackLocalQueryDelayMs_;
    id <ComGoogleCumulusApiPluginCommandCostOracle> commandCostOracle_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    id <JavaUtilList> localQueryList_;
    BOOL noFallbackQueryDelay_;
    ComGoogleCumulusQueryClientCQUpdateQueue_DelayedRunner *delayedRunner_;
    id <ComGoogleCumulusQueryClientCQUpdateQueue_MatchUpdater> matchUpdater_;
    ComGoogleCumulusQueryClientCQUpdateQueue_Task *runningTask_;
    BOOL workLoopRunning_;
    int queuedTaskCost_;
    id <JavaLangRunnable> queuedRunner_;
}

+ (void)initialize;
- (void)dealloc;
- (id)peek;
- (id)poll;
- (void)removeWithComGoogleCumulusQueryClientCQUpdateQueue_Task:(id)arg1;
- (void)offerWithComGoogleCumulusQueryClientCQUpdateQueue_Task:(id)arg1;
- (void)considerDoingWorkWithBoolean:(BOOL)arg1;
- (void)cancelFallbackQueryDelay;
- (void)addAllToLocalQueryListWithJavaUtilList:(id)arg1;
- (void)flushQueueAndBuildLocalQueryList;
- (void)addUpdateAfterQueueCheckWithComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg1 withComGoogleCumulusQueryClientCQUpdateQueue_PriorityEnum:(id)arg2 withBoolean:(BOOL)arg3 withJavaUtilList:(id)arg4 withComGoogleCumulusCommonUpdateObserver_Update:(id)arg5;
- (void)taskDone;
- (void)addCompletionWithComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg1 withJavaUtilList:(id)arg2 withNSString:(id)arg3 withComGoogleCumulusApiMetricsSpan:(id)arg4;
- (void)addUpdateWithComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg1 withBoolean:(BOOL)arg2 withJavaUtilList:(id)arg3 withComGoogleCumulusCommonUpdateObserver_Update:(id)arg4;
- (id)getWorkQueue;
- (void)initializeMatchUpdaterWithComGoogleCumulusQueryClientCQUpdateQueue_MatchUpdater:(id)arg1;
- (BOOL)isCachedDataEmpty;
- (BOOL)isEmpty;
- (id)description;
- (id)initWithJCGCuDelayedWorkQueue:(id)arg1 withComGoogleCumulusCommonUtilClock:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withComGoogleCumulusApiPluginCommandCostOracle:(id)arg5 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg6;

@end

