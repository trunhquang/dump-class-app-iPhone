//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonMetricsProto_ComponentEnum;

@interface ComGoogleCumulusCommonMetric2SpanHelper : NSObject
{
    id <ComGoogleCumulusApiMetricsSpan_Factory> spanFactory_;
    id <ComGoogleCumulusApiMetricsSpan_Factory> durationSpanFactory_;
    ComGoogleCumulusCommonMetricsProto_ComponentEnum *component_;
    id <ComGoogleCumulusApiMetricsCounterGroup> counterGroup_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
}

+ (void)initialize;
- (void)dealloc;
- (id)nullSpan;
- (id)startTimerWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg3;
- (id)startTimerWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2;
- (void)addCountersToSpanWithComGoogleCumulusApiMetricsSpan:(id)arg1 withJavaUtilList:(id)arg2;
- (void)addCounterToSpanWithComGoogleCumulusApiMetricsSpan:(id)arg1 withComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg2 withDouble:(double)arg3;
- (void)addToGlobalCounterWithComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg1 withDouble:(double)arg2;
- (id)getClock;
- (id)getCounterGroup;
- (id)getSpanFactory;
- (void)recordDurationSpanOverThresholdWithComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg1 withInt:(int)arg2 withDouble:(double)arg3;
- (void)recordSpanOverThresholdWithComGoogleCumulusApiMetricsSpan:(id)arg1 withComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg2 withInt:(int)arg3 withDouble:(double)arg4;
- (id)startDurationSpanAtWithComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg1 withDouble:(double)arg2;
- (id)startDurationSpanWithComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg1;
- (id)startSpanAtWithNSString:(id)arg1 withComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg2 withDouble:(double)arg3;
- (id)startSpanAtWithComGoogleCumulusApiMetricsSpan:(id)arg1 withComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg2 withDouble:(double)arg3;
- (id)startSpanAtWithComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg1 withDouble:(double)arg2;
- (id)startSpanWithNSString:(id)arg1 withComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg2;
- (id)startSpanWithComGoogleCumulusApiMetricsSpan:(id)arg1 withComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg2;
- (id)startSpanWithComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg1;
- (void)checkCumulusComponent;
- (id)initWithComGoogleCumulusApiMetricsSpan_Factory:(id)arg1 withComGoogleCumulusApiMetricsSpan_Factory:(id)arg2 withComGoogleCumulusCommonMetricsProto_ComponentEnum:(id)arg3 withComGoogleCumulusApiMetricsCounterGroup:(id)arg4 withComGoogleCumulusCommonUtilClock:(id)arg5;

@end

