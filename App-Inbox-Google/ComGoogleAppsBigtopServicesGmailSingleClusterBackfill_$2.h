//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleAppsBigtopServicesGmailClusterCache, ComGoogleAppsBigtopServicesGmailLocalQueryResultBuilder, ComGoogleAppsBigtopServicesGmailSingleClusterBackfill, ComGoogleCumulusApiPluginQueryProcessorResult_Builder, NSString;

@interface ComGoogleAppsBigtopServicesGmailSingleClusterBackfill_$2 : NSObject <JavaLangRunnable>
{
    ComGoogleAppsBigtopServicesGmailSingleClusterBackfill *this$0_;
    id <JavaUtilList> masterObjectInfoList_;
    id <ComGoogleCumulusApiPluginMultiPassQueryRunner_Accumulator> val$childAccumulator_;
    ComGoogleAppsBigtopServicesGmailClusterCache *val$clusterCache_;
    ComGoogleAppsBigtopServicesGmailLocalQueryResultBuilder *val$resultBuilder_;
    int val$numThreadsToReturn_;
    ComGoogleCumulusApiPluginQueryProcessorResult_Builder *val$queryProcessorResult_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopServicesGmailSingleClusterBackfill:(id)arg1 withComGoogleCumulusApiPluginMultiPassQueryRunner_Accumulator:(id)arg2 withComGoogleAppsBigtopServicesGmailClusterCache:(id)arg3 withComGoogleAppsBigtopServicesGmailLocalQueryResultBuilder:(id)arg4 withInt:(int)arg5 withComGoogleCumulusApiPluginQueryProcessorResult_Builder:(id)arg6;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

