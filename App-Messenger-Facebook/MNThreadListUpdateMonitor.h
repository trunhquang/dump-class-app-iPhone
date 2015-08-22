//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMMQTTReadStateHandlerListener.h"
#import "FBMMQTTThreadDeleteEventHandlerListener.h"
#import "FBMMessageReceivedListening.h"
#import "FBMMessageSenderListener.h"
#import "FBMSPThreadListFqlRefreshListener.h"
#import "FBMThreadActionHandlerListener.h"
#import "FBMThreadCreationListener.h"
#import "FBMThreadModelControllerDelegate.h"
#import "MNThreadSummaryUpdateListening.h"

@class FBAnalytics, FBMMessageSenderListenerAnnouncer, FBMPendingThreadQueueSender, FBMSPErrorRetryManager, FBMThreadActionHandler, FBMThreadModelController, MNThreadListUpdateMonitorListenerAnnouncer, MNThreadSummaryUpdateListeningAnnouncer, NSString;

@interface MNThreadListUpdateMonitor : NSObject <FBMMessageSenderListener, FBMThreadCreationListener, FBMSPThreadListFqlRefreshListener, FBMThreadModelControllerDelegate, FBMThreadActionHandlerListener, MNThreadSummaryUpdateListening, FBMMQTTReadStateHandlerListener, FBMMQTTThreadDeleteEventHandlerListener, FBMMessageReceivedListening>
{
    MNThreadListUpdateMonitorListenerAnnouncer *_announcer;
    MNThreadSummaryUpdateListeningAnnouncer *_threadSummaryUpdateAnnouncer;
    FBMMessageSenderListenerAnnouncer *_messageSenderAnnouncer;
    FBMPendingThreadQueueSender *_pendingThreadQueueSender;
    FBMSPErrorRetryManager *_spErrorRetryManager;
    FBMThreadModelController *_threadModelController;
    FBMThreadActionHandler *_threadActionHandler;
    FBAnalytics *_analytics;
}

- (void).cxx_destruct;
- (void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2;
- (id)analyticsModule;
- (void)threadModelController:(id)arg1 didFailLeaveGroupThreadWithFbId:(id)arg2 error:(id)arg3;
- (void)threadModelController:(id)arg1 didLeaveGroupThread:(id)arg2;
- (void)threadModelController:(id)arg1 willLeaveGroupThread:(id)arg2;
- (void)threadModelController:(id)arg1 didFailMuteThread:(id)arg2 error:(id)arg3;
- (void)threadModelController:(id)arg1 didMuteThread:(id)arg2;
- (void)threadModelController:(id)arg1 willMuteThread:(id)arg2 withOption:(long long)arg3;
- (void)threadModelController:(id)arg1 didFailToMarkThread:(id)arg2 action:(id)arg3 error:(id)arg4;
- (void)threadModelController:(id)arg1 didMarkThread:(id)arg2 action:(id)arg3;
- (void)threadModelController:(id)arg1 willMarkThread:(id)arg2 action:(id)arg3;
- (void)threadModelController:(id)arg1 didDeleteMessagesFromThread:(id)arg2;
- (void)threadModelController:(id)arg1 didFailToDeleteThreadsInThreadList:(unsigned int)arg2 error:(id)arg3;
- (void)threadModelController:(id)arg1 didFinishDeleteThreadsInThreadList:(unsigned int)arg2;
- (void)threadModelController:(id)arg1 willDeleteThreadsInThreadList:(unsigned int)arg2;
- (void)threadModelController:(id)arg1 didFailToDeleteBatchThreadsWithThreadKeys:(id)arg2 error:(id)arg3;
- (void)threadModelController:(id)arg1 didFinishDeleteBatchWithSuccessfulKeys:(id)arg2 failedKeys:(id)arg3;
- (void)threadModelController:(id)arg1 willDeleteBatchThreadsWithThreadKeys:(id)arg2;
- (void)threadModelController:(id)arg1 didFailDeleteThreadSummary:(id)arg2 error:(id)arg3;
- (void)threadModelController:(id)arg1 didFinishDeleteThreadSummary:(id)arg2;
- (void)threadModelController:(id)arg1 willDeleteThread:(id)arg2;
- (void)threadModelController:(id)arg1 didFinishDeleteThreads:(id)arg2;
- (void)threadModelControllerDidFinishProcessingSyncProtocolDeltas:(id)arg1;
- (void)threadModelControllerDidFailToFetchAdditionalInformation:(id)arg1;
- (void)threadModelControllerDidFinishFetchAdditionalInformation:(id)arg1;
- (void)threadModelControllerDidFailFetchMoreThreads:(id)arg1 error:(id)arg2;
- (void)threadModelControllerDidFinishFetchMoreThreads:(id)arg1;
- (void)threadModelControllerWillFetchMoreThreads:(id)arg1;
- (void)threadModelControllerDidFinishDeltaRequest:(id)arg1;
- (void)threadModelControllerDidFailFetch:(id)arg1 error:(id)arg2;
- (void)threadModelControllerDidFinishFetch:(id)arg1;
- (void)threadModelController:(id)arg1 willFetchWithOptions:(unsigned int)arg2;
- (void)threadActionHandler:(id)arg1 didFailToDeleteThreadSummary:(id)arg2 error:(id)arg3;
- (void)threadActionHandler:(id)arg1 didFinishDeleteThreadSummary:(id)arg2;
- (void)threadActionHandler:(id)arg1 willDeleteThreadSummary:(id)arg2;
- (void)syncProtocolThreadListAdditionalInformationRefreshSucceeded;
- (void)syncProtocolThreadListFqlRefreshFailedWithError:(id)arg1;
- (void)syncProtocolThreadListFqlRefreshSucceeded;
- (void)syncProtocolWillPerformThreadListFqlRefresh;
- (id)_existingThreadKeysForThreads:(id)arg1;
- (id)_localThreadKeyForThreadSummary:(id)arg1;
- (id)_localThreadKeyForThread:(id)arg1;
- (void)didAddMessage:(id)arg1 toQueueForPendingThreadWithOfflineID:(id)arg2;
- (void)didCancelCreatingThreadWithOfflineID:(id)arg1;
- (void)didFailToCreateThreadWithOfflineID:(id)arg1 withMessage:(id)arg2 error:(id)arg3;
- (void)didCreateThread:(id)arg1 withMessage:(id)arg2 forPendingThreadWithOfflineID:(id)arg3;
- (void)willCreateThreadWithOfflineID:(id)arg1 withMessage:(id)arg2;
- (void)_threadListDidChangeThreadWithLocalThreadKey:(id)arg1;
- (void)thread:(id)arg1 didCancelSendingMessage:(id)arg2;
- (void)thread:(id)arg1 couldNotSendMessage:(id)arg2 error:(id)arg3;
- (void)thread:(id)arg1 didSendMessage:(id)arg2;
- (void)thread:(id)arg1 willRetrySendingMessage:(id)arg2 error:(id)arg3;
- (void)thread:(id)arg1 didEnqueueMessage:(id)arg2;
- (void)mqttReadStateDidChangeToUnreadThreads:(id)arg1;
- (void)mqttReadStateDidChangeToReadThreads:(id)arg1;
- (void)mqttDidReceiveThreadDeleteEvent:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_stopObservers;
- (void)_startObservers;
- (void)dealloc;
- (void)configureWithThreadModelController:(id)arg1;
- (id)initWithMessageSenderAnnouncer:(id)arg1 threadSummaryUpdateListeningAnnouncer:(id)arg2 pendingThreadQueueSender:(id)arg3 notificationCenter:(id)arg4 spErrorRetryManager:(id)arg5 threadActionHandler:(id)arg6 analytics:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
