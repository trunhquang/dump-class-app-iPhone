//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonMetric2SpanEventReceiver.h"

@class ComGoogleCumulusCommonMetric2SpanRecordStore, NSString;

@interface ComGoogleCumulusCommonMetric2SpanRecorder : NSObject <ComGoogleCumulusCommonMetric2SpanEventReceiver>
{
    ComGoogleCumulusCommonMetric2SpanRecordStore *store_;
}

- (void)dealloc;
- (void)recordHierarchyEventWithComGoogleCumulusCommonMetricsProto_SpanEvent:(id)arg1 withComGoogleCumulusCommonMetric2SpanRecord:(id)arg2;
- (void)acceptWithId:(id)arg1;
- (id)initWithComGoogleCumulusCommonMetric2SpanRecordStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

