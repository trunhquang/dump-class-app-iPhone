//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JCGCuDispatchingSubscriptionRegistry, JCGCuWorkUtil_CancellableRunnable;

@interface JCGCuDispatchingSubscriptionRegistry_PendingSyncRequest : NSObject
{
    JCGCuDispatchingSubscriptionRegistry *this$0_;
    int id__;
    id <ComGoogleCumulusCommonSubscriptionMutator_SyncResponseCallback> callback_;
    JCGCuWorkUtil_CancellableRunnable *timeoutHandler_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)useCallback;
- (id)initWithJCGCuDispatchingSubscriptionRegistry:(id)arg1 withInt:(int)arg2 withComGoogleCumulusCommonSubscriptionMutator_SyncResponseCallback:(id)arg3 withInt:(int)arg4;

@end

