//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError;

@protocol FBHttpRetryPolicy
@property(readonly, nonatomic) float retryGrowthFactor;
@property(readonly, nonatomic) unsigned long long maxRetryDelayNanos;
@property(readonly, nonatomic) unsigned long long noReachabilityRetryDelayNanos;
@property(readonly, nonatomic) unsigned long long initialRetryDelayNanos;
@property(readonly, nonatomic) unsigned int maxNonTransientFailures;
- (unsigned long long)computeDelayNanos:(unsigned int)arg1;
- (double)socketTimeoutForAttempts:(unsigned int)arg1;
- (int)retryClassForHttpStatus:(unsigned int)arg1;
- (int)retryClassForError:(NSError *)arg1;
@end

