//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusQueryQueryProto_Subscription, ComGoogleCumulusSyncClientRangeTracker, ComGoogleCumulusSyncClientSubscriptionStatusImpl, ComGoogleCumulusSyncClientSyncRangeTracker, ComGoogleCumulusSyncSyncProto_StoredSubscription_StateEnum;

@interface ComGoogleCumulusSyncClientSyncSubscriptionRegistry_SubscriptionRegistration : NSObject
{
    int count_;
    int speculativeCount_;
    ComGoogleCumulusSyncSyncProto_StoredSubscription_StateEnum *state_;
    id <JavaUtilCollection> previousVersions_;
    BOOL stateChangedBeforeInitialized_;
    ComGoogleCumulusQueryQueryProto_Subscription *subscription_;
    ComGoogleCumulusSyncClientSyncRangeTracker *syncedRanges_;
    ComGoogleCumulusSyncClientRangeTracker *confirmedRanges_;
    ComGoogleCumulusSyncClientSubscriptionStatusImpl *subscriptionStatus_;
}

- (void)dealloc;
- (BOOL)hasSyncedRanges;
- (void)restart;
- (BOOL)hasLimits;
- (int)getMaxSubscriptionCount;
- (BOOL)isDoneSyncing;
- (id)findRangeToSync;
- (id)computeSubscriptionStatusWithComGoogleCumulusSyncClientForwardSyncTracker:(id)arg1;
- (id)getSubscriptionStatusWithComGoogleCumulusSyncClientForwardSyncTracker:(id)arg1;
- (BOOL)computeSubscriptionStatusChangeWithComGoogleCumulusSyncClientForwardSyncTracker:(id)arg1;
- (id)toStoredSubscriptionWithNSString:(id)arg1;
- (BOOL)maybeCleanupSubscription;
- (void)confirmRangeWithComGoogleCumulusSyncSyncProto_BackwardRange:(id)arg1 withComGoogleCumulusSyncSyncProto_BackwardRange:(id)arg2;
- (void)finishRangeWithComGoogleCumulusSyncSyncProto_BackwardRange:(id)arg1;
- (void)changeSpeculativeCountWithInt:(int)arg1;
- (void)changeCountWithInt:(int)arg1;
- (int)getSpeculativeCount;
- (id)getPreviousVersions;
- (id)getState;
- (int)getCount;
- (id)getQuery;
- (id)getSubscription;
- (id)getKey;
- (BOOL)setNotificationStateWithComGoogleCumulusQueryQueryProto_Subscription_NotificationStateEnum:(id)arg1 withBoolean:(BOOL)arg2;
- (void)initializeFromStoreWithComGoogleCumulusSyncSyncProto_StoredSubscription:(id)arg1;
- (BOOL)hasPreviousVersions;
- (BOOL)hasPermanentError;
- (BOOL)isPendingRemoval;
- (BOOL)isNormalState;
- (BOOL)maybeSetToNormalStateWithJavaUtilCollection:(id)arg1;
- (void)setPermanentError;
- (void)setPendingRemoval;
- (id)resetPendingRemovalSubscription;
- (id)resetSubscription;
- (void)setCompletelyInitialized;
- (BOOL)updateSubscriptionWithComGoogleCumulusQueryQueryProto_Subscription:(id)arg1;
- (id)initWithComGoogleCumulusQueryQueryProto_Subscription:(id)arg1;
- (void)log;

@end

