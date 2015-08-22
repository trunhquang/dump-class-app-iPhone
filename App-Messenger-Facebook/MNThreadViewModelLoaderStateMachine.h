//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAnalytics, MNAsyncOperationTracker, MNThreadViewModelLoaderStateMachineListeningAnnouncer;

@interface MNThreadViewModelLoaderStateMachine : NSObject
{
    MNThreadViewModelLoaderStateMachineListeningAnnouncer *_announcer;
    MNAsyncOperationTracker *_asyncOperationTracker;
    FBAnalytics *_analytics;
    id <MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate> _creatorDelegate;
    id <MNThreadViewModelLoaderStateMachineRequesterDelegate> _requestorDelegate;
}

@property(nonatomic) __weak id <MNThreadViewModelLoaderStateMachineRequesterDelegate> requestorDelegate; // @synthesize requestorDelegate=_requestorDelegate;
@property(nonatomic) __weak id <MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate> creatorDelegate; // @synthesize creatorDelegate=_creatorDelegate;
- (void).cxx_destruct;
- (void)_updateUserRequestStateTo:(unsigned int)arg1 request:(id)arg2;
- (void)_updateThreadRequestStateTo:(unsigned int)arg1 request:(id)arg2;
- (id)_requestForRequestId:(long long)arg1;
- (void)_cleanUpRequest:(id)arg1;
- (void)_cleanUpRequestIfCompleted:(id)arg1;
- (void)moveRequestToUserFetchFailed:(long long)arg1 error:(id)arg2;
- (void)moveRequestToUserFetchSucceeded:(long long)arg1 usersByUserId:(id)arg2;
- (void)moveRequestToUserFetchLongOperationDidBegin:(long long)arg1;
- (void)moveRequestToUserFetchProvisionalResultReceived:(long long)arg1 usersByUserId:(id)arg2;
- (void)moveRequestToUserFetchStartedState:(long long)arg1 requestedUserIds:(id)arg2;
- (void)moveRequestToThreadFetchFailed:(long long)arg1 error:(id)arg2;
- (void)moveRequestToThreadFetchSucceeded:(long long)arg1 thread:(id)arg2;
- (void)moveRequestToThreadFetchLongOperationDidBegin:(long long)arg1;
- (void)moveRequestToThreadFetchProvisionalResultReceived:(long long)arg1 thread:(id)arg2;
- (void)moveRequestToThreadFetchStartedState:(long long)arg1;
- (void)moveRequestToCanceled:(long long)arg1;
- (long long)initiateViewModelLoadRequestForDescriptor:(id)arg1 fetchConfiguration:(id)arg2 messagesLoadingConfiguration:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithAnalytics:(id)arg1;

@end
