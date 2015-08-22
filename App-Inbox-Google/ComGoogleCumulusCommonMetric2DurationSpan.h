//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiMetricsSpan.h"

@class NSString;

@interface ComGoogleCumulusCommonMetric2DurationSpan : NSObject <ComGoogleCumulusApiMetricsSpan>
{
    id <ComGoogleCumulusApiMetricsCounterGroup> counterGroup_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    int key_;
    double startTimeMs_;
}

+ (id)createInactiveDurationSpanWithComGoogleCumulusApiMetricsCounterGroup:(id)arg1 withComGoogleCumulusCommonUtilClock:(id)arg2 withNSString:(id)arg3;
- (void)dealloc;
- (void)sysTraceWithNSString:(id)arg1;
- (void)extendWithComGoogleProtobufExtensionLite:(id)arg1 withId:(id)arg2;
- (void)stopAtWithDouble:(double)arg1;
- (void)stop;
- (id)startChildAtWithComGoogleCumulusCommonMetricsProto_ComponentEnum:(id)arg1 withInt:(int)arg2 withDouble:(double)arg3;
- (id)startChildWithComGoogleCumulusCommonMetricsProto_ComponentEnum:(id)arg1 withInt:(int)arg2;
- (BOOL)isNullSpan;
- (id)getId;
- (id)initWithComGoogleCumulusApiMetricsCounterGroup:(id)arg1 withComGoogleCumulusCommonUtilClock:(id)arg2 withInt:(int)arg3;
- (id)initWithComGoogleCumulusApiMetricsCounterGroup:(id)arg1 withComGoogleCumulusCommonUtilClock:(id)arg2 withInt:(int)arg3 withDouble:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

