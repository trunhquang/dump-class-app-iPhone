//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher.h"

@class JBTCTypeIdStringUtil, JBTICommonSapiSpan_Factory, JBTSapiMainThreadHelper;

@interface JBTSettingsFetcherImpl : ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher
{
    id <ComGoogleAppsBigtopDataEntitiesMissingEntitiesProto_EntityService_ClientInterface> settingsClient_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    JBTSapiMainThreadHelper *mainThreadHelper_;
    JBTCTypeIdStringUtil *typeIdStringUtil_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations;
- (void)dealloc;
- (id)fetchModeToGetStrategyWithJBTFetchModeEnum:(id)arg1;
- (void)invokeSettingsFetchWithJavaUtilSet:(id)arg1 withJavaUtilMap:(id)arg2 withJBTFetchModeEnum:(id)arg3 withComGoogleCumulusApiQuerySettings_PriorityEnum:(id)arg4 withJBTSpan:(id)arg5 withJBTICommonSapiCallback:(id)arg6;
- (id)initWithComGoogleAppsBigtopDataEntitiesMissingEntitiesProto_EntityService_ClientInterface:(id)arg1 withJBTICommonSapiSpan_Factory:(id)arg2 withJBTSapiMainThreadHelper:(id)arg3 withJCGCuDelayedWorkQueue:(id)arg4 withComGoogleAppsBigtopSyncClientImplSettingsSettingsCache:(id)arg5 withJavaUtilSet:(id)arg6 withJBTCTypeIdStringUtil:(id)arg7;

@end

