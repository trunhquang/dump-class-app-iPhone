//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonCollectCircularBuffer, ComGoogleCumulusCommonMetric2SpanRecordFormatter;

@interface ComGoogleCumulusCommonVarExporter : NSObject
{
    id <JavaUtilMap> vars_;
    ComGoogleCumulusCommonCollectCircularBuffer *events_;
    id <ComGoogleCumulusCommonMetric2SpanEventsSink> spanEventsSink_;
    ComGoogleCumulusCommonMetric2SpanRecordFormatter *spanRecordFormatter_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    id <JavaUtilMap> components_;
}

+ (void)initialize;
- (void)dealloc;
- (void)logSpanTrees;
- (void)logEvents;
- (void)logVars;
- (void)logComponents;
- (void)logState;
- (void)addEventWithId:(id)arg1;
- (void)exportComponentWithNSString:(id)arg1 withNSString:(id)arg2 withId:(id)arg3;
- (id)getIntegerWithComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg1;
- (void)exportIntegerWithComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg1 withNSString:(id)arg2 withComGoogleCommonBaseSupplier:(id)arg3;
- (id)initWithComGoogleCumulusCommonMetric2SpanEventsSink:(id)arg1 withComGoogleCumulusCommonMetric2SpanRecordFormatter:(id)arg2 withComGoogleCumulusCommonUtilClock:(id)arg3;
- (id)init;

@end

