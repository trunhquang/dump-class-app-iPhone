//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilConcurrentAbstractExecutorService.h"

@class IOSObjectArray, NSString;

@interface JavaUtilConcurrentForkJoinPool : JavaUtilConcurrentAbstractExecutorService
{
    // Error parsing type: Aq, name: pad00_
    // Error parsing type: Aq, name: pad01_
    // Error parsing type: Aq, name: pad02_
    // Error parsing type: Aq, name: pad03_
    // Error parsing type: Aq, name: pad04_
    // Error parsing type: Aq, name: pad05_
    // Error parsing type: Aq, name: pad06_
    // Error parsing type: Aq, name: stealCount_
    // Error parsing type: Aq, name: ctl_
    // Error parsing type: Ai, name: plock_
    // Error parsing type: Ai, name: indexSeed_
    short parallelism_;
    short mode_;
    IOSObjectArray *workQueues_;
    id <JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory> factory_;
    id <JavaLangThread_UncaughtExceptionHandler> ueh_;
    NSString *workerNamePrefix_;
    // Error parsing type: A^v, name: pad10_
    // Error parsing type: A^v, name: pad11_
    // Error parsing type: A^v, name: pad12_
    // Error parsing type: A^v, name: pad13_
    // Error parsing type: A^v, name: pad14_
    // Error parsing type: A^v, name: pad15_
    // Error parsing type: A^v, name: pad16_
    // Error parsing type: A^v, name: pad17_
    // Error parsing type: A^v, name: pad18_
    // Error parsing type: A^v, name: pad19_
    // Error parsing type: A^v, name: pad1a_
    // Error parsing type: A^v, name: pad1b_
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)makeCommonPool;
+ (void)managedBlockWithJavaUtilConcurrentForkJoinPool_ManagedBlocker:(id)arg1;
+ (void)quiesceCommonPool;
+ (int)getCommonPoolParallelism;
+ (id)commonPool;
+ (id)checkFactoryWithJavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory:(id)arg1;
+ (int)checkParallelismWithInt:(int)arg1;
+ (id)commonSubmitterQueue;
+ (int)getSurplusQueuedTaskCount;
+ (int)nextPoolId;
+ (void)checkPermission;
- (void)__javaClone;
- (void)dealloc;
- (id)newTaskForWithJavaUtilConcurrentCallable:(id)arg1;
- (id)newTaskForWithJavaLangRunnable:(id)arg1 withId:(id)arg2;
- (BOOL)awaitQuiescenceWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(id)arg2;
- (BOOL)awaitTerminationWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(id)arg2;
- (BOOL)isShutdown;
- (BOOL)isTerminating;
- (BOOL)isTerminated;
- (id)shutdownNow;
- (void)shutdown;
- (id)description;
- (int)drainTasksToWithJavaUtilCollection:(id)arg1;
- (id)pollSubmission;
- (BOOL)hasQueuedSubmissions;
- (int)getQueuedSubmissionCount;
- (long long)getQueuedTaskCount;
- (long long)getStealCount;
- (BOOL)isQuiescent;
- (int)getActiveThreadCount;
- (int)getRunningThreadCount;
- (BOOL)getAsyncMode;
- (int)getPoolSize;
- (int)getParallelism;
- (id)getUncaughtExceptionHandler;
- (id)getFactory;
- (id)invokeAllWithJavaUtilCollection:(id)arg1;
- (id)submitWithJavaLangRunnable:(id)arg1;
- (id)submitWithJavaLangRunnable:(id)arg1 withId:(id)arg2;
- (id)submitWithJavaUtilConcurrentCallable:(id)arg1;
- (id)submitWithJavaUtilConcurrentForkJoinTask:(id)arg1;
- (void)executeWithJavaLangRunnable:(id)arg1;
- (void)executeWithJavaUtilConcurrentForkJoinTask:(id)arg1;
- (id)invokeWithJavaUtilConcurrentForkJoinTask:(id)arg1;
- (id)initWithInt:(int)arg1 withJavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory:(id)arg2 withJavaLangThread_UncaughtExceptionHandler:(id)arg3 withInt:(int)arg4 withNSString:(id)arg5;
- (id)initWithInt:(int)arg1 withJavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory:(id)arg2 withJavaLangThread_UncaughtExceptionHandler:(id)arg3 withBoolean:(BOOL)arg4;
- (id)initWithInt:(int)arg1;
- (id)init;
- (int)externalHelpCompleteWithJavaUtilConcurrentCountedCompleter:(id)arg1;
- (BOOL)tryExternalUnpushWithJavaUtilConcurrentForkJoinTask:(id)arg1;
- (BOOL)tryTerminateWithBoolean:(BOOL)arg1 withBoolean:(BOOL)arg2;
- (id)nextTaskForWithJavaUtilConcurrentForkJoinPool_WorkQueue:(id)arg1;
- (void)helpQuiescePoolWithJavaUtilConcurrentForkJoinPool_WorkQueue:(id)arg1;
- (id)findNonEmptyStealQueue;
- (void)helpJoinOnceWithJavaUtilConcurrentForkJoinPool_WorkQueue:(id)arg1 withJavaUtilConcurrentForkJoinTask:(id)arg2;
- (int)awaitJoinWithJavaUtilConcurrentForkJoinPool_WorkQueue:(id)arg1 withJavaUtilConcurrentForkJoinTask:(id)arg2;
- (BOOL)tryCompensateWithLong:(long long)arg1;
- (int)helpCompleteWithJavaUtilConcurrentForkJoinPool_WorkQueue:(id)arg1 withJavaUtilConcurrentCountedCompleter:(id)arg2;
- (int)tryHelpStealerWithJavaUtilConcurrentForkJoinPool_WorkQueue:(id)arg1 withJavaUtilConcurrentForkJoinTask:(id)arg2;
- (void)helpReleaseWithLong:(long long)arg1 withJavaUtilConcurrentForkJoinPool_WorkQueueArray:(id)arg2 withJavaUtilConcurrentForkJoinPool_WorkQueue:(id)arg3 withJavaUtilConcurrentForkJoinPool_WorkQueue:(id)arg4 withInt:(int)arg5;
- (int)awaitWorkWithJavaUtilConcurrentForkJoinPool_WorkQueue:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (int)scanWithJavaUtilConcurrentForkJoinPool_WorkQueue:(id)arg1 withInt:(int)arg2;
- (void)runWorkerWithJavaUtilConcurrentForkJoinPool_WorkQueue:(id)arg1;
- (void)signalWorkWithJavaUtilConcurrentForkJoinPool_WorkQueueArray:(id)arg1 withJavaUtilConcurrentForkJoinPool_WorkQueue:(id)arg2;
- (void)incrementActiveCount;
- (void)fullExternalPushWithJavaUtilConcurrentForkJoinTask:(id)arg1;
- (void)externalPushWithJavaUtilConcurrentForkJoinTask:(id)arg1;
- (void)deregisterWorkerWithJavaUtilConcurrentForkJoinWorkerThread:(id)arg1 withJavaLangThrowable:(id)arg2;
- (id)registerWorkerWithJavaUtilConcurrentForkJoinWorkerThread:(id)arg1;
- (void)tryAddWorker;
- (void)releasePlockWithInt:(int)arg1;
- (int)acquirePlock;

@end

