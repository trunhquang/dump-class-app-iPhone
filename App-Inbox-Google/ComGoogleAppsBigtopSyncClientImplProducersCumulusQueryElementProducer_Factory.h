//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplProducersEntityElementProducerFactory.h"
#import "ComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducerFactory.h"

@class JBTICommonSapiSpan_Factory, JBTIMetricsCounterManager, NSString;

@interface ComGoogleAppsBigtopSyncClientImplProducersCumulusQueryElementProducer_Factory : NSObject <ComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducerFactory, ComGoogleAppsBigtopSyncClientImplProducersEntityElementProducerFactory>
{
    id <ComGoogleCumulusApiBigSet> bigSet_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    id <JBTICommonTransactionHistory> transactionHistory_;
    JBTIMetricsCounterManager *counterManager_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)createWithInt:(int)arg1 withJBTCBigTopCommonEnums_TypeIdEnum:(id)arg2 withJavaUtilCollection:(id)arg3 withJBTICommonCachedQueryId:(id)arg4 withJBTCBigTopCommonEnums_MetricEnum:(id)arg5 withComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_ElementAdaptor:(id)arg6 withComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_SegmentAdaptor:(id)arg7 withComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_QueryMetadataAdaptor:(id)arg8 withComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_ResultMetadataAdaptor:(id)arg9 withComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg10 withComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_EntityAdapter:(id)arg11;
- (id)createWithInt:(int)arg1 withJBTCBigTopCommonEnums_TypeIdEnum:(id)arg2 withJavaUtilCollection:(id)arg3 withJBTICommonCachedQueryId:(id)arg4 withJBTCBigTopCommonEnums_MetricEnum:(id)arg5 withComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_ElementAdaptor:(id)arg6 withComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_SegmentAdaptor:(id)arg7 withComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_QueryMetadataAdaptor:(id)arg8 withComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_ResultMetadataAdaptor:(id)arg9 withComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg10 withComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg11 withComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer_ProducerModeEnum:(id)arg12;
- (id)initWithComGoogleCumulusApiBigSet:(id)arg1 withJBTICommonSapiSpan_Factory:(id)arg2 withJBTICommonTransactionHistory:(id)arg3 withJBTIMetricsCounterManager:(id)arg4 withComGoogleCumulusCommonUtilClock:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

