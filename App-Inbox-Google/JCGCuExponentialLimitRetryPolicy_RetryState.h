//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JCGCuWorkUtil_CancellableRunnable;

@interface JCGCuExponentialLimitRetryPolicy_RetryState : NSObject
{
    int retryCount_;
    BOOL isSuspended_;
    JCGCuWorkUtil_CancellableRunnable *retryRunnable_;
    BOOL maxHit_;
}

- (void)dealloc;
- (void)setMaxHitWithBoolean:(BOOL)arg1;
- (BOOL)isMaxHit;
- (id)getRetryRunnable;
- (void)setRetryRunnableWithJCGCuWorkUtil_CancellableRunnable:(id)arg1;
- (BOOL)isSuspended;
- (void)setSuspendedWithBoolean:(BOOL)arg1;
- (int)incrementCount;
- (int)getRetryCount;
- (id)initWithJCGCuExponentialLimitRetryPolicy:(id)arg1;

@end

