//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTClientAPISettings;

@interface JBTSapiSystemModule : NSObject
{
    JBTClientAPISettings *clientAPISettings_;
    double applicationStartTime_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_provideInitialDataSetLoadedCallback;
+ (id)__annotations_provideInitialDataSet;
+ (id)__annotations_provideLatencyMeasurementsWithComGoogleAppsBigtopSyncClientLoggingEventLoggingComponent_;
+ (id)__annotations_provideEventLoggersWithComGoogleAppsBigtopSyncClientLoggingEventLoggingComponent_;
+ (id)__annotations_provideLoggingManagerWithComGoogleAppsBigtopSyncClientLoggingEventLoggingComponent_;
+ (id)__annotations_provideEventLoggingComponent;
+ (id)__annotations_provideClientProvidedMediaSources;
+ (id)__annotations_provideMediaListTypes;
+ (id)__annotations_provideServerJobSetTag;
+ (id)__annotations_provideCustomMonogramUrl;
+ (id)__annotations_provideBuildLabel;
+ (id)__annotations_provideClientID;
+ (id)__annotations_provideHasPersistentStore;
+ (id)__annotations_provideZeroStateSuggestFetcherDisabled;
+ (id)__annotations_provideBuildChangeList;
+ (id)__annotations_provideInboxChangeBatchingDelayMs;
+ (id)__annotations_provideHypercollapseOffset;
+ (id)__annotations_provideHypercollapseThreshold;
+ (id)__annotations_provideContactsFetcherCacheSize;
+ (id)__annotations_provideSmartMailTranslator;
+ (id)__annotations_provideClusterRankComparator;
+ (id)__annotations_provideClusterIdentifier;
+ (id)__annotations_provideDateTimeFormatter;
+ (id)__annotations_provideSettingsWriter;
+ (id)__annotations_provideSettingsReader;
+ (id)__annotations_provideExtraSettingsToPreload;
+ (id)__annotations_provideTutorialHelper;
+ (id)__annotations_provideSysTraceService;
+ (id)__annotations_provideImageMetadataFetcher;
+ (id)__annotations_provideUserLocaleHelper;
+ (id)__annotations_provideBigTopApplicationInfo;
+ (id)__annotations_provideTranslationHelper;
+ (id)__annotations_provideI18nComparator;
+ (id)__annotations_provideSupportedSmartMailTypes;
+ (id)__annotations_provideSearchDebugChannel;
+ (id)__annotations_provideCheckReindexDueDatesNeededChannel;
+ (id)__annotations_provideTaskAssistChannel;
+ (id)__annotations_provideTaskLogChannel;
+ (id)__annotations_provideTaskSuggestChannel;
+ (id)__annotations_providePreloadedSettingsForTest;
+ (id)__annotations_provideZeroStateSuggestChannel;
+ (id)__annotations_providePlidDecryptChannel;
+ (id)__annotations_provideSendInviteChannel;
+ (id)__annotations_provideSearchWarmUpChannel;
+ (id)__annotations_provideClickMetricsChannel;
+ (id)__annotations_provideSearchSuggestChannel;
+ (id)__annotations_provideSearchChannelWithComGoogleCumulusApiMetricsSpan_Factory_;
+ (id)__annotations_provideCumulusCounterGroupFactoryWithComGoogleCumulusApiClient_;
+ (id)__annotations_provideCumulusSpanFactoryWithComGoogleCumulusApiClient_;
+ (id)__annotations_provideMultiLoginUrlRewriter;
+ (id)__annotations_providePreloadedResults;
+ (id)__annotations_provideShutdownHandlerWithComGoogleCumulusApiClient_;
+ (id)__annotations_provideProtoHelper;
+ (id)__annotations_provideLocationHelper;
+ (id)__annotations_provideInternalTimeService;
+ (id)__annotations_provideTimeService;
+ (id)__annotations_provideTimeHelper;
+ (id)__annotations_provideClock;
+ (id)__annotations_provideUserInfo;
+ (id)__annotations_provideExperimentsProvider;
+ (id)__annotations_provideWorkerRpcPipelineWithComGoogleCumulusApiClient_;
+ (id)__annotations_provideClientWorkQueueWithComGoogleCumulusApiClient_;
+ (id)__annotations_provideNetControllerWithComGoogleCumulusApiClient_;
+ (id)__annotations_provideCumulusClient;
+ (id)__annotations_provideApplicationStartTime;
+ (id)__annotations;
- (void)dealloc;
- (id)provideInitialDataSetLoadedCallback;
- (id)provideInitialDataSet;
- (id)provideLatencyMeasurementsWithComGoogleAppsBigtopSyncClientLoggingEventLoggingComponent:(id)arg1;
- (id)provideEventLoggersWithComGoogleAppsBigtopSyncClientLoggingEventLoggingComponent:(id)arg1;
- (id)provideLoggingManagerWithComGoogleAppsBigtopSyncClientLoggingEventLoggingComponent:(id)arg1;
- (id)provideEventLoggingComponent;
- (id)provideClientProvidedMediaSources;
- (id)provideMediaListTypes;
- (id)provideServerJobSetTag;
- (id)provideCustomMonogramUrl;
- (id)provideBuildLabel;
- (id)provideClientID;
- (BOOL)provideHasPersistentStore;
- (BOOL)provideZeroStateSuggestFetcherDisabled;
- (int)provideBuildChangeList;
- (int)provideInboxChangeBatchingDelayMs;
- (int)provideHypercollapseOffset;
- (int)provideHypercollapseThreshold;
- (int)provideContactsFetcherCacheSize;
- (id)provideSmartMailTranslator;
- (id)provideClusterRankComparator;
- (id)provideClusterIdentifier;
- (id)provideDateTimeFormatter;
- (id)provideSettingsWriter;
- (id)provideSettingsReader;
- (id)provideExtraSettingsToPreload;
- (id)provideTutorialHelper;
- (id)provideSysTraceService;
- (id)provideImageMetadataFetcher;
- (id)provideUserLocaleHelper;
- (id)provideBigTopApplicationInfo;
- (id)provideTranslationHelper;
- (id)provideI18nComparator;
- (id)provideSupportedSmartMailTypes;
- (id)provideSearchDebugChannel;
- (id)provideCheckReindexDueDatesNeededChannel;
- (id)provideTaskAssistChannel;
- (id)provideTaskLogChannel;
- (id)provideTaskSuggestChannel;
- (id)providePreloadedSettingsForTest;
- (id)provideZeroStateSuggestChannel;
- (id)providePlidDecryptChannel;
- (id)provideSendInviteChannel;
- (id)provideSearchWarmUpChannel;
- (id)provideClickMetricsChannel;
- (id)provideSearchSuggestChannel;
- (id)provideSearchChannelWithComGoogleCumulusApiMetricsSpan_Factory:(id)arg1;
- (id)provideCumulusCounterGroupFactoryWithComGoogleCumulusApiClient:(id)arg1;
- (id)provideCumulusSpanFactoryWithComGoogleCumulusApiClient:(id)arg1;
- (id)provideMultiLoginUrlRewriter;
- (id)providePreloadedResults;
- (id)provideShutdownHandlerWithComGoogleCumulusApiClient:(id)arg1;
- (id)provideProtoHelper;
- (id)provideLocationHelper;
- (id)provideInternalTimeService;
- (id)provideTimeService;
- (id)provideTimeHelper;
- (id)provideClock;
- (id)provideUserInfo;
- (id)provideExperimentsProvider;
- (id)provideWorkerRpcPipelineWithComGoogleCumulusApiClient:(id)arg1;
- (id)provideClientWorkQueueWithComGoogleCumulusApiClient:(id)arg1;
- (id)provideNetControllerWithComGoogleCumulusApiClient:(id)arg1;
- (id)provideCumulusClient;
- (double)provideApplicationStartTime;
- (id)initWithJBTClientAPISettings:(id)arg1 withDouble:(double)arg2;

@end

