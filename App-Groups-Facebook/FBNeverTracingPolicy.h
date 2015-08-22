//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMobileTracePolicy.h"

@class NSString;

@interface FBNeverTracingPolicy : NSObject <FBMobileTracePolicy>
{
}

- (unsigned int)sampleRateForTraceSite:(int)arg1;
- (unsigned long long)thresholdForTraceSite:(int)arg1;
- (BOOL)shouldSampleForTraceSite:(int)arg1;
- (unsigned long long)defaultThreshold;
- (BOOL)tracingEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

