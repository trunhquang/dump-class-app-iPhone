//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopServicesGmailSerialExecutor_SerialRunnable.h"

@class ComGoogleAppsBigtopServicesGmailClusterThrottlingHelper, ComGoogleAppsBigtopServicesGmailGmailSegmentFinder, ComGoogleCumulusQueryQueryProto_Query, JBTCGmailLocalResultHelper;

@interface ComGoogleAppsBigtopServicesGmailLinearScanForClusterFill : ComGoogleAppsBigtopServicesGmailSerialExecutor_SerialRunnable
{
    ComGoogleAppsBigtopServicesGmailGmailSegmentFinder *gmailSegmentFinder_;
    ComGoogleAppsBigtopServicesGmailClusterThrottlingHelper *clusterThrottlingHelper_;
    id <ComGoogleCumulusApiPluginMultiPassQueryRunner> multiPassQueryRunner_;
    ComGoogleCumulusQueryQueryProto_Query *query_;
    id <ComGoogleCumulusCommonIndexIndexIterable> rootIterable_;
    JBTCGmailLocalResultHelper *localResultHelper_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (void)processOrphanWithComGoogleAppsBigtopServicesGmailLocalQueryResultBuilder:(id)arg1 withComGoogleCumulusApiPluginMultiPassQueryRunner_RankedObject:(id)arg2;
- (void)processMatchWithComGoogleAppsBigtopServicesGmailLocalQueryResultBuilder:(id)arg1 withComGoogleAppsBigtopServicesGmailClusterCache_ClusterState:(id)arg2 withComGoogleCumulusApiPluginMultiPassQueryRunner_RankedObject:(id)arg3;
- (void)processObjectsAfterLoadingWithComGoogleAppsBigtopServicesGmailSerialExecutor_RunnableContext:(id)arg1 withComGoogleCumulusApiPluginMultiPassQueryRunner_Accumulator:(id)arg2 withJavaUtilList:(id)arg3;
- (id)getAllClustersAssociationWithComGoogleCumulusApiPluginMultiPassQueryRunner_Accumulator:(id)arg1;
- (void)fetchAndCategorizeMoreItemsWithComGoogleAppsBigtopServicesGmailSerialExecutor_RunnableContext:(id)arg1 withComGoogleCumulusApiPluginMultiPassQueryRunner_Accumulator:(id)arg2;
- (void)runWithComGoogleAppsBigtopServicesGmailSerialExecutor_RunnableContext:(id)arg1;
- (id)initWithComGoogleAppsBigtopServicesGmailClusterThrottlingHelper:(id)arg1 withComGoogleCumulusApiPluginMultiPassQueryRunner:(id)arg2 withComGoogleCumulusQueryQueryProto_Query:(id)arg3 withComGoogleCumulusCommonIndexIndexIterable:(id)arg4 withComGoogleAppsBigtopServicesGmailGmailSegmentFinder:(id)arg5 withJBTCGmailLocalResultHelper:(id)arg6;

@end

