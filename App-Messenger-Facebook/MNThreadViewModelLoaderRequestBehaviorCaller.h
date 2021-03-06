//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNThreadViewModelLoaderStateMachineListening.h"

@class NSMutableDictionary, NSString;

@interface MNThreadViewModelLoaderRequestBehaviorCaller : NSObject <MNThreadViewModelLoaderStateMachineListening>
{
    NSMutableDictionary *_requestIdToBehaviorMap;
}

- (void).cxx_destruct;
- (void)didCleanUpViewModelRequestWithId:(long long)arg1;
- (void)stateForViewModelRequest:(long long)arg1 didUpdateFromUserRequestState:(unsigned int)arg2 toUserRequestState:(unsigned int)arg3 threadRequestState:(unsigned int)arg4 threadViewModel:(id)arg5 error:(id)arg6;
- (void)stateForViewModelRequest:(long long)arg1 didUpdateFromThreadRequestState:(unsigned int)arg2 toThreadRequestState:(unsigned int)arg3 userRequestState:(unsigned int)arg4 threadViewModel:(id)arg5 error:(id)arg6;
- (void)manageBehaviorForRequest:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 progressBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

