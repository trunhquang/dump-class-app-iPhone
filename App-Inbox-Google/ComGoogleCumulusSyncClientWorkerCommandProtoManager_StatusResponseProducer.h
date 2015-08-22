//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonBaseReceiver.h"
#import "ComGoogleCumulusCommonNetMessageProducer.h"

@class ComGoogleCumulusCommandCommandProto_SyncStatus, ComGoogleCumulusSyncClientWorkerCommandProtoManager, NSString;

@interface ComGoogleCumulusSyncClientWorkerCommandProtoManager_StatusResponseProducer : NSObject <ComGoogleCumulusCommonNetMessageProducer, ComGoogleCommonBaseReceiver>
{
    ComGoogleCumulusSyncClientWorkerCommandProtoManager *this$0_;
    NSString *clientId_;
    id <JavaUtilList> clientBatchStatusQueue_;
    BOOL statusResponseEnabled_;
    ComGoogleCumulusCommandCommandProto_SyncStatus *nextSyncStatus_;
    BOOL networkLogForwardingEnabled_;
    id <JavaUtilList> networkLogs_;
}

- (void)__javaClone;
- (void)dealloc;
- (void)addNetworkLogWithComGoogleCumulusCommonNetProto_ForwardingBundle:(id)arg1;
- (void)setNetworkLogResponseEnabledWithBoolean:(BOOL)arg1;
- (void)setNextSyncStatusWithComGoogleCumulusCommandCommandProto_SyncStatus:(id)arg1;
- (void)setSyncStatusResponseEnabledWithBoolean:(BOOL)arg1;
- (void)dispose;
- (id)produceMessageWithComGoogleCumulusCommonNetMessageProducer_PriorityEnum:(id)arg1;
- (void)acceptWithId:(id)arg1;
- (id)initWithComGoogleCumulusSyncClientWorkerCommandProtoManager:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

