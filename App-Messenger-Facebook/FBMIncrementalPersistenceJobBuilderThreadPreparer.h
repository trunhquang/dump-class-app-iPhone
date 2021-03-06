//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNIncrementalPersistenceJobBuilderThreadPreparing.h"

@class FBMThreadStore, MNAsyncOperationTracker, NSString;

@interface FBMIncrementalPersistenceJobBuilderThreadPreparer : NSObject <MNIncrementalPersistenceJobBuilderThreadPreparing>
{
    FBMThreadStore *_threadStore;
    id <MNAuthenticationManager> _authManager;
    MNAsyncOperationTracker *_asyncOperationTracker;
}

- (void).cxx_destruct;
- (void)_finishRequestWithInternalId:(long long)arg1 andMostCompleteResponse:(id)arg2;
- (void)_handleFailureForRequestId:(long long)arg1;
- (void)_handleProgressForRequestId:(long long)arg1 withResponse:(id)arg2;
- (void)_handleFetchedForRequestId:(long long)arg1 withResponse:(id)arg2;
- (void)prepareLocalCopiesOfThreadsWithThreadKeys:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithThreadStore:(id)arg1 authManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

