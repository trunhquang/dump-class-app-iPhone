//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonSubscriptions.h"

@class ComGoogleCumulusCommonConfigConfiguration, NSString;

@interface ComGoogleCumulusFrameworkConfigClientSubscriptionsBackProxy : NSObject <ComGoogleCumulusCommonSubscriptions>
{
    ComGoogleCumulusCommonConfigConfiguration *config_;
    id <ComGoogleCumulusCommonSubscriptions> subscriptions_;
}

- (void)dealloc;
- (id)getSubscriptions;
- (void)metadataResyncWithJavaUtilCollection:(id)arg1;
- (void)resumeSync;
- (void)pauseSync;
- (void)stopSync;
- (void)triggerSyncIterationWithJavaUtilCollection:(id)arg1 withInt:(int)arg2 withComGoogleCumulusApiMetricsAppContext:(id)arg3 withComGoogleCumulusCommonSubscriptionMutator_SyncResponseCallback:(id)arg4;
- (void)triggerSyncWithJavaUtilCollection:(id)arg1 withInt:(int)arg2 withComGoogleCumulusApiMetricsAppContext:(id)arg3 withComGoogleCumulusCommonSubscriptionMutator_SyncResponseCallback:(id)arg4;
- (void)triggerSyncWithInt:(int)arg1 withComGoogleCumulusApiMetricsAppContext:(id)arg2 withComGoogleCumulusCommonSubscriptionMutator_SyncResponseCallback:(id)arg3;
- (void)checkForNewDataWithJavaUtilCollection:(id)arg1;
- (void)removeSubscriptionWithNSString:(id)arg1;
- (BOOL)addSubscriptionWithComGoogleCumulusQueryQueryProto_Subscription:(id)arg1;
- (void)setSubscriptionNotificationStateWithNSString:(id)arg1 withComGoogleCumulusQueryQueryProto_Subscription_NotificationStateEnum:(id)arg2;
- (id)getSyncStatus;
- (id)getIds;
- (id)getAllSubscriptions;
- (id)getSubscriptionStatusByIdWithNSString:(id)arg1;
- (id)getSubscriptionByIdWithNSString:(id)arg1;
- (id)getSubscriptionWithComGoogleCumulusQueryQueryProto_QueryKey:(id)arg1;
- (BOOL)isInError;
- (BOOL)isInitialized;
- (void)unregisterChangeHandlerWithComGoogleCumulusCommonSubscriptions_ChangeHandler:(id)arg1;
- (void)registerChangeHandlerWithComGoogleCumulusCommonSubscriptions_ChangeHandler:(id)arg1;
- (id)initWithComGoogleCumulusCommonConfigConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

