//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTBackgroundSyncPoller.h"

@class ComGoogleCommonCollectImmutableList, JBTICommonEventListenersList, JBTICommonSapiSpan_Factory, JBTICommonScheduler, JBTSapiMainThreadHelper, JBTSyncRunner, JBTSyncStatusEnum, JavaLangInteger, JavaLangLong, NSString;

@interface JBTBigTopDataBackgroundSyncPoller : NSObject <JBTBackgroundSyncPoller>
{
    ComGoogleCommonCollectImmutableList *subscriptionsToSync_;
    JBTICommonEventListenersList *listeners_;
    id <ComGoogleCommonTimeClock> clock_;
    JBTICommonScheduler *scheduler_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    JBTSapiMainThreadHelper *mainThreadHelper_;
    JBTSyncRunner *syncRunner_;
    JBTSyncStatusEnum *syncStatus_;
    int pollingIntervalMs_;
    int initialPollDelayMs_;
    BOOL isStarted_;
    BOOL hasInitialPollHappened_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> currentSyncFuture_;
    JavaLangLong *startTimeMs_;
    JavaLangLong *lastPollTimeMs_;
    JavaLangInteger *nextPollSchedulerToken_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_nextPollSchedulerToken_;
+ (id)__annotations_lastPollTimeMs_;
+ (id)__annotations_startTimeMs_;
+ (id)__annotations_currentSyncFuture_;
+ (id)__annotations_stopWithJBTSpan__params;
+ (id)__annotations_startWithJBTSpan__params;
+ (void)initialize;
- (void)dealloc;
- (BOOL)hasListenerWithJBTEventListener:(id)arg1;
- (void)removeListenerWithJBTEventListener:(id)arg1;
- (void)addListenerWithJBTEventListener:(id)arg1;
- (id)getSyncStatus;
- (int)getCurrentPollingIntervalMs;
- (void)onPollingIntervalsUpdated;
- (void)setInitialPollDelaySecWithInt:(int)arg1;
- (void)setPollingIntervalSecWithInt:(int)arg1;
- (void)issueErrorEventWithJBTError:(id)arg1 withJBTSpan:(id)arg2;
- (void)issueSyncStatusChangedEventWithJBTSpan:(id)arg1;
- (void)scheduleNextPollWithDouble:(double)arg1;
- (void)scheduleNextPoll;
- (void)cancelScheduledPoll;
- (void)cancelCurrentSyncFuture;
- (void)poll;
- (BOOL)isSyncing;
- (void)stopWithJBTSpan:(id)arg1;
- (BOOL)isStarted;
- (void)startWithJBTSpan:(id)arg1;
- (id)getSubscriptionIds;
- (id)initWithComGoogleCommonTimeClock:(id)arg1 withJBTICommonScheduler:(id)arg2 withJBTICommonSapiSpan_Factory:(id)arg3 withJBTSapiMainThreadHelper:(id)arg4 withComGoogleCommonCollectImmutableList:(id)arg5 withJBTSyncRunner:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

