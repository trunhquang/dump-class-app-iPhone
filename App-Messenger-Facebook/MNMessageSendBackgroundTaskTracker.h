//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMessageSendQueueMutationListening.h"

@class FBAnalytics, FBBackgroundTaskHandler, MNMessageSendQueueStore, NSString;

@interface MNMessageSendBackgroundTaskTracker : NSObject <MNMessageSendQueueMutationListening>
{
    FBBackgroundTaskHandler *_backgroundTaskHandler;
    MNMessageSendQueueStore *_sendQueueStore;
    FBAnalytics *_analytics;
    unsigned int _backgroundTaskId;
}

- (void).cxx_destruct;
- (void)_backgroundTaskExpired;
- (void)_endBackgroundTask;
- (void)_beginBackgroundTaskIfNecessary;
- (void)didRemoveMessageFromSendQueue:(id)arg1;
- (void)didAddMessageToSendQueue:(id)arg1 sendStateInfo:(id)arg2;
- (id)initWithBackgroundTaskHandler:(id)arg1 sendQueueStore:(id)arg2 analytics:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

