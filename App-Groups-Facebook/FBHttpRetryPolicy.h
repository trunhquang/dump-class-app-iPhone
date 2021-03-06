//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBHttpRetryPolicy.h"

@class FBReachabilityAnnouncer;

@interface FBHttpRetryPolicy : NSObject <FBHttpRetryPolicy>
{
    FBReachabilityAnnouncer *_announcer;
    unsigned int _maxNonTransientFailures;
    float _retryGrowthFactor;
    unsigned long long _initialRetryDelayNanos;
    unsigned long long _noReachabilityRetryDelayNanos;
    unsigned long long _maxRetryDelayNanos;
}

+ (id)defaultPolicy;
@property(readonly, nonatomic) float retryGrowthFactor; // @synthesize retryGrowthFactor=_retryGrowthFactor;
@property(readonly, nonatomic) unsigned long long maxRetryDelayNanos; // @synthesize maxRetryDelayNanos=_maxRetryDelayNanos;
@property(readonly, nonatomic) unsigned long long noReachabilityRetryDelayNanos; // @synthesize noReachabilityRetryDelayNanos=_noReachabilityRetryDelayNanos;
@property(readonly, nonatomic) unsigned long long initialRetryDelayNanos; // @synthesize initialRetryDelayNanos=_initialRetryDelayNanos;
@property(readonly, nonatomic) unsigned int maxNonTransientFailures; // @synthesize maxNonTransientFailures=_maxNonTransientFailures;
- (void).cxx_destruct;
- (unsigned long long)computeDelayNanos:(unsigned int)arg1;
- (double)socketTimeoutForAttempts:(unsigned int)arg1;
- (int)retryClassForError:(id)arg1;
- (int)retryClassForHttpStatus:(unsigned int)arg1;
- (id)initWithReachability:(id)arg1;

@end

