//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, TAGDiskLoadCallback, TAGManager, TAGNetworkLoadCallback, TAGPSupplementedResource, TAGResourceLoaderScheduler, TAGRuntime;

@interface TAGContainer : NSObject
{
    NSString *_ctfeServerAddress;
    BOOL _diskLoadFinished;
    NSString *_containerId;
    id <TAGResourceStorage> _resourceStorage;
    TAGManager *_tagManager;
    NSString *_ctfeUrlPathAndQuery;
    unsigned int _numTokens;
    TAGPSupplementedResource *_lastLoadedSupplementedResource;
    TAGNetworkLoadCallback *_networkLoadCallback;
    TAGDiskLoadCallback *_diskLoadCallback;
    TAGResourceLoaderScheduler *_networkLoadScheduler;
    TAGRuntime *_runtime;
    NSMutableDictionary *_functionCallTagHandlers;
    NSMutableDictionary *_functionCallMacroHandlers;
    NSString *_resourceVersion;
    int _resourceFormatVersion;
    double _lastRefreshTime;
    double _lastRefreshMethodCalledTime;
}

+ (int)maximumTokenCount;
+ (double)minimumRefreshPeriodInBurstMode;
+ (double)minimumRefreshPeriod;
+ (double)refreshPeriodOnFailure;
+ (double)refreshPeriodOnSuccess;
@property double lastRefreshMethodCalledTime; // @synthesize lastRefreshMethodCalledTime=_lastRefreshMethodCalledTime;
@property int resourceFormatVersion; // @synthesize resourceFormatVersion=_resourceFormatVersion;
@property(copy) NSString *resourceVersion; // @synthesize resourceVersion=_resourceVersion;
@property BOOL diskLoadFinished; // @synthesize diskLoadFinished=_diskLoadFinished;
@property(retain) NSMutableDictionary *functionCallMacroHandlers; // @synthesize functionCallMacroHandlers=_functionCallMacroHandlers;
@property(retain) NSMutableDictionary *functionCallTagHandlers; // @synthesize functionCallTagHandlers=_functionCallTagHandlers;
@property(retain) TAGRuntime *runtime; // @synthesize runtime=_runtime;
@property(retain) TAGResourceLoaderScheduler *networkLoadScheduler; // @synthesize networkLoadScheduler=_networkLoadScheduler;
@property(retain) TAGDiskLoadCallback *diskLoadCallback; // @synthesize diskLoadCallback=_diskLoadCallback;
@property(retain) TAGNetworkLoadCallback *networkLoadCallback; // @synthesize networkLoadCallback=_networkLoadCallback;
@property(retain) TAGPSupplementedResource *lastLoadedSupplementedResource; // @synthesize lastLoadedSupplementedResource=_lastLoadedSupplementedResource;
@property unsigned int numTokens; // @synthesize numTokens=_numTokens;
@property(copy, nonatomic) NSString *ctfeUrlPathAndQuery; // @synthesize ctfeUrlPathAndQuery=_ctfeUrlPathAndQuery;
@property(retain) TAGManager *tagManager; // @synthesize tagManager=_tagManager;
@property(retain) id <TAGResourceStorage> resourceStorage; // @synthesize resourceStorage=_resourceStorage;
@property double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property(readonly, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
- (void).cxx_destruct;
- (BOOL)useAvailableTokenWithCurrentTime:(double)arg1;
- (BOOL)isDefaultContainerRefreshMode;
@property(copy, nonatomic) NSString *ctfeServerAddress;
- (void)createInitialContainer;
- (double)currentTimeInMilliseconds;
- (void)setupEvaluatorsWithExpandedResource:(id)arg1;
- (void)setSupplementals:(id)arg1;
- (void)setupEvaluatorsWithResource:(id)arg1;
- (void)saveResourceToDisk:(id)arg1;
- (void)loadAfterDelay:(double)arg1;
- (void)loadWithCallback:(id)arg1 resourceLoaderScheduler:(id)arg2;
- (void)loadWithCallback:(id)arg1;
- (void)evaluateTags:(id)arg1;
- (id)functionCallMacroHandlerForMacro:(id)arg1;
- (id)functionCallTagHandlerForTag:(id)arg1;
- (void)registerFunctionCallMacroHandler:(id)arg1 forMacro:(id)arg2;
- (void)registerFunctionCallTagHandler:(id)arg1 forTag:(id)arg2;
- (BOOL)isDefault;
- (void)close;
- (void)refresh;
- (id)stringForKey:(id)arg1;
- (long long)int64ForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (BOOL)booleanForKey:(id)arg1;
- (id)initWithId:(id)arg1 tagManager:(id)arg2;
- (id)initWithId:(id)arg1 tagManager:(id)arg2 resourceStorage:(id)arg3;

@end

