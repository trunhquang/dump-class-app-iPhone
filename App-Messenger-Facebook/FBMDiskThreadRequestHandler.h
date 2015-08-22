//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBMThreadRequestHandling.h"

@class FBAnalytics, FBExperimentManager, FBMThreadRestorer, FBMThreadResultValidator, FBMThreadSet, FBMessagingStore, NSString;

@interface FBMDiskThreadRequestHandler : NSObject <FBMThreadRequestHandling, FBClassProvidable>
{
    id <FBMThreadRequestHandling> _nextRequestHandler;
    FBMessagingStore *_store;
    FBMThreadResultValidator *_resultValidator;
    FBMThreadRestorer *_restorer;
    FBMThreadSet *_threadSet;
    FBAnalytics *_analytics;
    FBExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (void)_processLoadThreadResultOnMainThread:(id)arg1 pendingResult:(id)arg2 request:(id)arg3 listener:(id)arg4;
- (void)_processLoadThreadsResult:(id)arg1 pendingResult:(id)arg2 request:(id)arg3 listener:(id)arg4;
- (void)handleBatchThreadRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3;
- (void)configureWithNextResponder:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithMessagingStore:(id)arg1 resultValidator:(id)arg2 threadRestorer:(id)arg3 threadSet:(id)arg4 analytics:(id)arg5 experimentManager:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
