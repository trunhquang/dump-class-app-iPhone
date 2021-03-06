//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplProducersChangeReducer, JBTICommonLifecycleTracker, JBTICommonSapiSpan_Factory;

@interface ComGoogleAppsBigtopSyncClientImplSettingsSettingsCachePersistenceManager : NSObject
{
    id <ComGoogleAppsBigtopSyncClientImplSettingsSettingsReader> reader_;
    id <ComGoogleAppsBigtopSyncClientImplSettingsSettingsWriter> writer_;
    id <DaggerLazy> producer_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    ComGoogleAppsBigtopSyncClientImplProducersChangeReducer *changeReducer_;
    id <ComGoogleCommonBaseReceiver> appControlReceiver_;
    id <ComGoogleCumulusCommonUtilEventDispatcher> appControlDispatcher_;
    JBTICommonLifecycleTracker *lifecycleTracker_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_appControlReceiver_;
+ (id)__annotations_producer_;
+ (id)__annotations_extractSettingKeyOrNullWithComGoogleAppsBigtopServicesSettingsBigTopSetting_;
+ (void)initialize;
- (void)dealloc;
- (id)extractSettingKeyOrNullWithComGoogleAppsBigtopServicesSettingsBigTopSetting:(id)arg1;
- (void)acceptAppControlEventWithComGoogleCumulusCommonAppControlProto_AppControlEvent:(id)arg1;
- (void)delete__;
- (void)writeSettingsMap;
- (void)stop;
- (void)startWithJBTICommonSapiSpan:(id)arg1;
- (void)registerReceivers;
- (void)readSettingsIntoEmptyCacheWithComGoogleAppsBigtopSyncClientImplSettingsSettingsCache:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)initWithComGoogleAppsBigtopSyncClientImplSettingsSettingsReader:(id)arg1 withComGoogleAppsBigtopSyncClientImplSettingsSettingsWriter:(id)arg2 withDaggerLazy:(id)arg3 withComGoogleCumulusCommonUtilEventDispatcher:(id)arg4 withJBTICommonSapiSpan_Factory:(id)arg5;

@end

