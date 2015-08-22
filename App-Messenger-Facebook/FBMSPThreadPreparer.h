//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class FBAnalytics, FBMThreadStore, FBMobileConfigFactory, FBUserSession, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface FBMSPThreadPreparer : NSObject <FBClassProvidable>
{
    FBMThreadStore *_threadStore;
    FBAnalytics *_analyticsLogger;
    FBUserSession *_session;
    FBMobileConfigFactory *_mobileConfigFactory;
    NSMutableSet *_pendingThreadFetchIds;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_logThreadPreparationSucceededWithMissingThreadFilters:(id)arg1;
- (void)_logThreadPreparationFailedForThreads:(id)arg1 elapsedTime:(unsigned long long)arg2 error:(id)arg3;
- (void)_logThreadPreparationSucceededForThreads:(id)arg1 elapsedTime:(unsigned long long)arg2;
- (void)_cancelPendingRequests;
- (void)_cancelPendingRequestsAsync;
- (unsigned int)_numberOfMessagesToRequest;
- (unsigned int)_defaultThreadRequestOptions;
- (BOOL)_shouldOnlyPrepareThreadMetadata;
- (id)_singleThreadRequestFiltersFromThreadKeys:(id)arg1 forcedFetchThreadKeys:(id)arg2;
- (void)prepareThreadsWithThreadKeys:(id)arg1 forceFetchThreadKeys:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)stop;
- (void)start;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithThreadStore:(id)arg1 analyticsLogger:(id)arg2 session:(id)arg3 mobileConfigFactory:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
