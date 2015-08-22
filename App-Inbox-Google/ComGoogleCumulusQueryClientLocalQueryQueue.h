//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusQueryClientLocalQueryQueue_AsyncQueryExecutor, ComGoogleCumulusQueryClientLocalQueryResultReconciler, ComGoogleCumulusQueryClientWorkerQueryManager, JavaUtilPriorityQueue;

@interface ComGoogleCumulusQueryClientLocalQueryQueue : NSObject
{
    BOOL isScheduled_;
    BOOL isDisabled_;
    id <JavaUtilMap> queryMap_;
    JavaUtilPriorityQueue *queuedQueries_;
    id <JavaUtilSet> runningQueries_;
    id <JavaUtilMap> previousConstraintsMap_;
    id <ComGoogleCumulusApiPluginQueryProcessor> queryProcessor_;
    ComGoogleCumulusQueryClientWorkerQueryManager *resultDispatcher_;
    ComGoogleCumulusQueryClientLocalQueryResultReconciler *localResultReconciler_;
    id <JCGCuWorkQueue> workQueue_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    int maxConcurrentQueries_;
    BOOL isPreemptiveQueryRunning_;
    ComGoogleCumulusQueryClientLocalQueryQueue_AsyncQueryExecutor *asyncQueryExecutor_;
}

+ (void)initialize;
- (void)__javaClone;
- (void)dealloc;
- (void)removeRunningQueryWithComGoogleCumulusQueryClientLocalQueryQueue_ScheduledQuery:(id)arg1;
- (void)executeWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusQueryClientLocalQueryQueue_ScheduledQuery:(id)arg2;
- (id)updatePreviousQueryConstraintsWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
- (void)maybeRunQueuedQuery;
- (void)stopAcceptingAndRunningQueries;
- (void)stopWithNSString:(id)arg1;
- (void)enqueueScheduledQueryWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusQueryClientLocalQueryQueue_ScheduledQuery:(id)arg2;
- (void)enqueueWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
- (id)initWithComGoogleCumulusApiPluginQueryProcessor:(id)arg1 withComGoogleCumulusQueryClientWorkerQueryManager:(id)arg2 withComGoogleCumulusQueryClientLocalQueryResultReconciler:(id)arg3 withJCGCuWorkQueue:(id)arg4 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg5 withComGoogleCumulusCommonVarExporter:(id)arg6 withInt:(int)arg7;

@end

