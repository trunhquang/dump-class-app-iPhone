//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonNetMessageReceiver.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusCommonUtilBox, ComGoogleCumulusCommonUtilEventBus, ComGoogleCumulusSyncClientActiveActionRegistry, ComGoogleCumulusSyncClientCommandProtoHandler, ComGoogleCumulusSyncClientMutationOrderManager, ComGoogleCumulusSyncClientUnscopedMutationHandler, JavaLangInteger, JavaUtilPriorityQueue, NSString;

@interface ComGoogleCumulusSyncClientCommandRequestReceiver : NSObject <ComGoogleCumulusCommonNetMessageReceiver>
{
    ComGoogleCumulusCommonUtilBox *lastDone_;
    JavaUtilPriorityQueue *pendingCallbacks_;
    ComGoogleCumulusSyncClientActiveActionRegistry *remoteBackfillActionDelayer_;
    ComGoogleCumulusSyncClientUnscopedMutationHandler *unscopedMutationHandler_;
    NSString *clientId_;
    ComGoogleCumulusSyncClientCommandProtoHandler *commandProtoHandler_;
    id <ComGoogleCumulusSyncClientObjectManager> objectManager_;
    id <ComGoogleCumulusApiTypeCommandProcessor> commandProcessor_;
    id <ComGoogleCumulusApiPluginSlicer> slicer_;
    ComGoogleCumulusSyncClientMutationOrderManager *mutationOrderManager_;
    id <JavaUtilList> updateObservers_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    id <ComGoogleCumulusCommonClientRetryPolicy> commandRetryPolicy_;
    JavaLangInteger *currentAppMutationVersion_;
    ComGoogleCumulusCommonUtilEventBus *batchStatusBus_;
    id <ComGoogleCumulusSyncClientMutationSaveModeManager> saveModeManager_;
    int currentSequence_;
}

+ (void)initialize;
+ (id)toObjectMutationBackfillActionIdWithNSString:(id)arg1;
+ (void)notifyUpdateObserversWithNSString:(id)arg1 withJavaUtilCollection:(id)arg2 withJavaUtilSet:(id)arg3 withComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg4 withJavaUtilMap:(id)arg5 withNSString:(id)arg6 withComGoogleCumulusApiMetricsSpan:(id)arg7 withBoolean:(BOOL)arg8 withBoolean:(BOOL)arg9;
- (void)dealloc;
- (void)processBatchWithInt:(int)arg1 withJavaUtilCollection:(id)arg2 withComGoogleCumulusSyncClientLoadIntent:(id)arg3 withComGoogleCumulusCommandCommandProto_Batch_Builder:(id)arg4 withComGoogleCumulusApiMetricsSpan:(id)arg5 withComGoogleCumulusApiMetricsSpan:(id)arg6;
- (int)getDelayRemoteBackfillMsWithComGoogleCumulusCommandCommandProto_Batch_Builder:(id)arg1;
- (void)acceptWithId:(id)arg1;
- (id)initWithNSString:(id)arg1 withComGoogleCumulusSyncClientCommandProtoHandler:(id)arg2 withComGoogleCumulusSyncClientObjectManager:(id)arg3 withComGoogleCumulusApiTypeCommandProcessor:(id)arg4 withComGoogleCumulusSyncClientMutationOrderManager:(id)arg5 withComGoogleCumulusApiPluginSlicer:(id)arg6 withJavaUtilList:(id)arg7 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg8 withComGoogleCumulusSyncClientActiveActionRegistry:(id)arg9 withComGoogleCumulusSyncClientUnscopedMutationHandler:(id)arg10 withComGoogleCumulusCommonUtilEventDispatcher:(id)arg11 withJavaLangInteger:(id)arg12 withComGoogleCumulusCommonUtilEventBus:(id)arg13 withComGoogleCumulusSyncClientMutationSaveModeManager:(id)arg14 withComGoogleCumulusCommonClientRetryPolicy:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

