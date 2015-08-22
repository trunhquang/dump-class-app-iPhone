//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusQueryClientWorkerQueryResultCache;

@interface ComGoogleCumulusQueryClientStartupResultCacheWriter : NSObject
{
    id <ComGoogleCumulusQueryQueryRegistry> queryRegistry_;
    ComGoogleCumulusQueryClientWorkerQueryResultCache *resultCache_;
    id <ComGoogleCumulusSyncClientObjectManager> objectManager_;
    id <ComGoogleCumulusApiPluginSlicer> slicer_;
    id <ComGoogleCumulusQueryClientStartupResultCacheWriter_StartupResultWriter> resultWriter_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
}

+ (void)initialize;
- (void)dealloc;
- (void)deleteStartupResults;
- (void)writeStartupResultsWithJavaLangRunnable:(id)arg1;
- (id)initWithComGoogleCumulusQueryQueryRegistry:(id)arg1 withComGoogleCumulusQueryClientWorkerQueryResultCache:(id)arg2 withComGoogleCumulusSyncClientObjectManager:(id)arg3 withComGoogleCumulusApiPluginSlicer:(id)arg4 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg5 withComGoogleCumulusQueryClientStartupResultCacheWriter_StartupResultWriter:(id)arg6;

@end

