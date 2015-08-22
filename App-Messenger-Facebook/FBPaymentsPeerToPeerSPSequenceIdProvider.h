//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPaymentsPeerToPeerSPSnapshotControllerListener.h"
#import "MNSyncProtocolSequenceIdProviding.h"

@class FBPaymentsPeerToPeerPersistentStoreCoordinator, FBPaymentsPeerToPeerSPSnapshotController, NSString;

@interface FBPaymentsPeerToPeerSPSequenceIdProvider : NSObject <FBPaymentsPeerToPeerSPSnapshotControllerListener, MNSyncProtocolSequenceIdProviding>
{
    FBPaymentsPeerToPeerSPSnapshotController *_snapshotController;
    FBPaymentsPeerToPeerPersistentStoreCoordinator *_persistentStoreCoordinator;
    CDUnknownBlockType _fetchSnapshotAndSequenceIdSuccessCallback;
    CDUnknownBlockType _fetchSnapshotAndSequenceIdFailureCallback;
}

- (void).cxx_destruct;
- (void)_cleanupCallbacks;
- (void)snapshotController:(id)arg1 didFailToFetchSnapshotWithError:(id)arg2 isCancelled:(BOOL)arg3;
- (void)snapshotController:(id)arg1 didFetchSnapshotWithSequenceId:(long long)arg2;
- (void)fetchLatestSequenceIdAndSnapshotWithSuccessCallback:(CDUnknownBlockType)arg1 failureCallback:(CDUnknownBlockType)arg2;
- (void)getPersistedSequenceIdWithSuccessCallback:(CDUnknownBlockType)arg1 failureCallback:(CDUnknownBlockType)arg2;
- (id)initWithSnapshotController:(id)arg1 persistentStoreCoordinator:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
