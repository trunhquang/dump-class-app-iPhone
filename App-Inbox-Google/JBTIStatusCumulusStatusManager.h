//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTIStatusStatusManager.h"

@class ComGoogleCommonBaseOptional, ComGoogleCumulusCommandCommandProto_SyncStatus, ComGoogleCumulusCommonNetStateProto_NetStateEvent, JBTICommonEventListenersList, JBTICommonSapiSpan_Factory, JBTIStatusNetStatusImpl, NSString;

@interface JBTIStatusCumulusStatusManager : NSObject <JBTIStatusStatusManager>
{
    JBTIStatusNetStatusImpl *netStatusImpl_;
    id <JBTICommonFeedbackLogger> rootFeedbackLogger_;
    id <ComGoogleCumulusApiClient> cumulusClient_;
    id <ComGoogleCumulusCommonUtilEventDispatcher> syncStatusDispatcher_;
    id <ComGoogleCommonBaseReceiver> syncStatusReceiver_;
    id <ComGoogleCumulusCommonUtilEventDispatcher> netStatusDispatcher_;
    id <ComGoogleCommonBaseReceiver> netStatusReceiver_;
    id <ComGoogleCumulusCommonUtilEventDispatcher> batchErrorDispatcher_;
    id <ComGoogleCommonBaseReceiver> batchErrorReceiver_;
    id <ComGoogleCumulusCommonUtilEventDispatcher> appControlDispatcher_;
    id <ComGoogleCommonBaseReceiver> appControlReceiver_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    JBTICommonEventListenersList *listeners_;
    id <JavaUtilList> appStateListeners_;
    id <JavaUtilList> bufferedEvents_;
    int buildChangeList_;
    NSString *buildLabel_;
    NSString *jobsetTag_;
    id <JCGCuDelayedWorkQueue> clientWorkQueue_;
    ComGoogleCumulusCommandCommandProto_SyncStatus *syncStatus_;
    ComGoogleCumulusCommonNetStateProto_NetStateEvent *netStateEvent_;
    BOOL isClientUpdatedRequired_;
    BOOL isRestartRequired_;
    BOOL isMutationSyncOnlyMode_;
    BOOL hasEncounteredFatalError_;
    ComGoogleCommonBaseOptional *isClientBigTopEnabled_;
    BOOL areEventsFlushed_;
    BOOL hasMutationSyncOnlyModeLostUserData_;
    BOOL wasNewStoreCreated_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getErrorCode;
+ (id)__annotations_isClientNotBigtopEnabled;
+ (id)__annotations_logDetailedStatusWithCallbackAndClientDataWithJBTCallback_withNSString__params;
+ (id)__annotations_logDetailedStatusWithCallbackWithJBTCallback__params;
+ (id)__annotations_logDetailedStatusWithCallbackWithJBTCallback_;
+ (id)__annotations_logDetailedStatus;
+ (void)initialize;
- (void)dealloc;
- (BOOL)wasNewStoreCreated;
- (BOOL)hasMutationSyncOnlyModeLostUserData;
- (BOOL)isMutationSyncOnlyMode;
- (BOOL)isImmediateRestartRequired;
- (void)logFeedbackWithXPLTLoggingApi:(id)arg1;
- (id)getNetworkQuality;
- (id)getNetworkState;
- (id)getStaticSummaryForDebugging;
- (id)getDynamicSummaryForDebugging;
- (id)getStatusSummaryForDebugging;
- (id)getErrorCode;
- (void)notifyAppStateListenersWithJBTStatus_AppStateEnum:(id)arg1 withJBTCBigTopCommonEnums_MetricEnum:(id)arg2;
- (void)setAppStateWithJBTStatus_AppStateEnum:(id)arg1;
- (BOOL)isClientOrUserMakingTooManyRequests;
- (void)checkIfBigTopIsEnabledWithComGoogleCumulusCommonNetStateProto_NetStateEvent:(id)arg1;
- (BOOL)isClientNotBigtopEnabled;
- (id)isClientBigTopEnabled;
- (BOOL)isClientAuthRequired;
- (BOOL)hasEncounteredFatalError;
- (BOOL)isClientUpdatedRequired;
- (BOOL)hasError;
- (BOOL)isRetryInProgress;
- (BOOL)isConnected;
- (BOOL)hasPendingModifiedObjects;
- (int)getPendingModifiedHighPriorityCount;
- (int)getPendingModifiedCount;
- (int)getBackgroundSyncActiveCount;
- (int)getBackgroundSyncPendingCount;
- (int)getBackgroundSyncObjectCount;
- (void)acceptAppControlEventWithComGoogleCumulusCommonAppControlProto_AppControlEvent:(id)arg1;
- (void)acceptNetStatusEventWithComGoogleCumulusCommonNetStateProto_NetStateEvent:(id)arg1;
- (void)logDetailedStatusWithCallbackAndClientDataWithJBTCallback:(id)arg1 withNSString:(id)arg2;
- (void)logDetailedStatusWithCallbackWithJBTCallback:(id)arg1;
- (void)logDetailedStatus;
- (void)logStatus;
- (void)acceptSyncStatusWithComGoogleCumulusCommandCommandProto_SyncStatus:(id)arg1;
- (void)stop;
- (void)start;
- (void)bufferedOnEventWithJBTEvent:(id)arg1;
- (void)flushEvents;
- (void)addAppStateListenerWithJBTIStatusStatusManager_AppStateListener:(id)arg1;
- (BOOL)hasListenerWithJBTEventListener:(id)arg1;
- (void)removeListenerWithJBTEventListener:(id)arg1;
- (void)addListenerWithJBTEventListener:(id)arg1;
- (void)logBatchErrorWithComGoogleCumulusApiBatchError:(id)arg1;
- (void)acceptBatchErrorWithComGoogleCumulusApiBatchError:(id)arg1;
- (id)initWithJBTIStatusNetStatusImpl:(id)arg1 withJBTICommonFeedbackLogger:(id)arg2 withComGoogleCumulusApiClient:(id)arg3 withJCGCuDelayedWorkQueue:(id)arg4 withJBTICommonSapiSpan_Factory:(id)arg5 withComGoogleCumulusCommonUtilEventDispatcher:(id)arg6 withComGoogleCumulusCommonUtilEventDispatcher:(id)arg7 withComGoogleCumulusCommonUtilEventDispatcher:(id)arg8 withComGoogleCumulusCommonUtilEventDispatcher:(id)arg9 withInt:(int)arg10 withNSString:(id)arg11 withNSString:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

