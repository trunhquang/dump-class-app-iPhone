//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTIClustersClusterConfigFactory;

@interface JBTIClustersClusterConfigElementProducerFactory : NSObject
{
    id <ComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducerFactory> syncedDataElementProducerFactory_;
    JBTIClustersClusterConfigFactory *clusterConfigFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducerFactory_withJBTIClustersClusterConfigFactory_;
+ (id)__annotations;
- (void)dealloc;
- (id)createWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTICommonCachedQueryId:(id)arg2 withJBTCBigTopCommonEnums_MetricEnum:(id)arg3;
- (id)createForAllClustersList;
- (id)createForStartupCacheUpdater;
- (id)createForClusterFetcherWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config_QueryModeEnum:(id)arg1;
- (id)createForClusterFetcherLocalOnly;
- (id)createForClusterFetcher;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducerFactory:(id)arg1 withJBTIClustersClusterConfigFactory:(id)arg2;

@end

