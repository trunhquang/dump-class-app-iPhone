//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusApiSystemAbstractFactory.h"

@interface ComGoogleCumulusApiSystemClientClientFactory : ComGoogleCumulusApiSystemAbstractFactory
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_enableStartupResultCacheWithNSString_withInt_;
+ (id)__annotations_initWithComGoogleCumulusCommonNetClientRequestChannelProducer_withJCGCuDelayedWorkQueue__params;
- (id)enableStartupResultCacheWithNSString:(id)arg1 withInt:(int)arg2;
- (id)enableLoadingStartupResultCacheWithNSString:(id)arg1 withInt:(int)arg2;
- (id)setAppMessageReceiverWithComGoogleCommonBaseReceiver:(id)arg1;
- (id)setSysTraceServiceWithComGoogleCumulusCommonMetric2SysTraceService:(id)arg1;
- (id)setAppVersionWithJavaLangInteger:(id)arg1;
- (id)enablePreloadedResultsCaptorWithComGoogleCumulusFrameworkPreloadedResultsCaptor:(id)arg1;
- (id)enableSync;
- (id)enablePreloadedResultsWithJavaUtilList:(id)arg1;
- (id)setMetricsRequestProducerWithComGoogleCumulusCommonNetMessageProducer:(id)arg1;
- (id)setSpanFactoryWithComGoogleCumulusApiMetricsSpan_Factory:(id)arg1;
- (id)setSpanFactoryReceiverWithComGoogleCumulusCommonMetric2SpanEventReceiver:(id)arg1;
- (id)setSpanEventSinkSizeWithInt:(int)arg1;
- (id)enableMetrics2;
- (id)enableDurationSpans;
- (id)setSpanPolicyWithComGoogleCumulusCommonMetric2SpanPolicy:(id)arg1;
- (id)enableThreadGuardWithBoolean:(BOOL)arg1;
- (id)createClient;
- (id)initWithComGoogleCumulusCommonNetChannel:(id)arg1 withJCGCuDelayedWorkQueue:(id)arg2;
- (id)initWithComGoogleCumulusCommonNetClientRequestChannelProducer:(id)arg1 withJCGCuDelayedWorkQueue:(id)arg2;

@end

