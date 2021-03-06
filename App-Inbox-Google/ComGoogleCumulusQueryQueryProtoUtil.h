//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleCumulusQueryQueryProtoUtil : NSObject
{
}

+ (void)initialize;
+ (BOOL)shouldExecuteOptimisticallyWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
+ (id)createPreloadedResultWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusApiPluginQueryProcessorResult:(id)arg2;
+ (int)getMaxObjectsWithComGoogleCumulusQueryQueryProto_Constraints:(id)arg1 withInt:(int)arg2;
+ (void)validateResultHasMoreWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (void)checkQueryResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withNSObjectArray:(id)arg2;
+ (BOOL)hasAllSyncObjectsWithComGoogleCumulusApiPluginQueryProcessorResult:(id)arg1;
+ (id)flattenWithJavaUtilCollection:(id)arg1;
+ (BOOL)isRemoteWithComGoogleCumulusQueryQueryProto_Result_SourceEnum:(id)arg1;
+ (BOOL)isLocalWithComGoogleCumulusQueryQueryProto_Result_SourceEnum:(id)arg1;
+ (BOOL)getIsStrictlyRemoteResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
+ (BOOL)getIsLocalResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
+ (BOOL)canSatisfyQueryRefWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1 withComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg2 withBoolean:(BOOL)arg3;
+ (id)getFullQueryVersionWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
+ (id)getFullQueryVersionWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
+ (id)newQueryErrorWithNSString:(id)arg1 withJavaLangInteger:(id)arg2 withComGoogleCumulusCommonErrorProto_ErrorCodeEnum:(id)arg3 withNSString:(id)arg4 withJavaLangThrowable:(id)arg5 withBoolean:(BOOL)arg6 withBoolean:(BOOL)arg7;
+ (id)newPermanentErrorWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withJavaLangInteger:(id)arg2 withNSString:(id)arg3 withJavaLangThrowable:(id)arg4;
+ (id)newTemporaryErrorWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withJavaLangInteger:(id)arg2 withNSString:(id)arg3 withJavaLangThrowable:(id)arg4;
+ (id)newTimeoutErrorWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
+ (id)createKeyWithNSString:(id)arg1 withInt:(int)arg2;
+ (id)appendPredicateWithJavaLangStringBuilder:(id)arg1 withComGoogleCumulusQueryQueryProto_Query_Predicate:(id)arg2;
+ (id)dumpResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
+ (void)appendObjectInfoCompactWithJavaLangStringBuilder:(id)arg1 withJavaUtilCollection:(id)arg2;
+ (void)appendObjectInfoWithJavaLangStringBuilder:(id)arg1 withJavaUtilCollection:(id)arg2;
+ (void)appendSourceAnnotationWithJavaLangStringBuilder:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg2;
+ (id)dumpKeyWithComGoogleCumulusQueryQueryProto_QueryKey:(id)arg1;
+ (void)appendKeyWithJavaLangStringBuilder:(id)arg1 withComGoogleCumulusQueryQueryProto_QueryKey:(id)arg2;
+ (void)appendWithJavaLangStringBuilder:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (void)appendWithJavaLangStringBuilder:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2;
+ (id)newDumperWithNSString:(id)arg1 withComGoogleCumulusQueryQueryProto_Response:(id)arg2;
+ (id)newDumperWithNSString:(id)arg1 withComGoogleCumulusQueryQueryProto_Request:(id)arg2;
+ (id)dumpWithNSString:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (id)dumpWithNSString:(id)arg1 withComGoogleCumulusQueryQueryProto_Response:(id)arg2;
+ (id)dumpWithNSString:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2;
+ (id)dumpWithNSString:(id)arg1 withComGoogleCumulusQueryQueryProto_Request:(id)arg2;
+ (BOOL)canSliceWithComGoogleCumulusApiPluginSyncObject:(id)arg1 withJavaUtilCollection:(id)arg2;
+ (id)formatNetworkResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withJavaUtilMap:(id)arg2 withJavaUtilMap:(id)arg3 withComGoogleCumulusApiPluginSlicer:(id)arg4 withComGoogleCumulusSyncObjectRefCache:(id)arg5;
+ (id)splitAvailableResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCommonBaseFunction:(id)arg2;
+ (int)compareSourceWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg2;
+ (int)compareVersionAndSourceToWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg2;
+ (id)filterIdsWithJavaUtilSet:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (BOOL)hasRemovedObjectsWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
+ (id)findRemovedIdsWithJavaLangIterable:(id)arg1 withJavaLangIterable:(id)arg2;
+ (id)findRemovedIdsWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (int)determineAbsoluteCountWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (id)computeDeltaListWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2 withBoolean:(BOOL)arg3;
+ (id)calculateDeltaResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2 withBoolean:(BOOL)arg3;
+ (id)getObjectInfoIdWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg1;
+ (id)getObjectInfoIdWithComGoogleCumulusQueryQueryProto_Result_Segment:(id)arg1;
+ (id)getObjectInfoIdWithNSString:(id)arg1;
+ (id)calculateDeltaResultIgnoringSourceWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (id)calculateDeltaResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (id)filterDeltaResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 withBoolean:(BOOL)arg5;
+ (id)filterDeltaResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (id)mergeDeltaListsWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2;
+ (id)mergeDeltaResultsWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (BOOL)isObjectInfoDeltaWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg2;
+ (id)getStringObjectIdWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg1;
+ (id)getLoadContextWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
+ (id)getQueryPriorityComparator;
+ (BOOL)isPreemptiveWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
+ (int)getPriorityWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
+ (id)getRankComparator;
+ (id)getSomeKindOfIdWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg1;
+ (id)getSomeKindOfIdWithComGoogleCumulusCommonBaseProto_ObjectId:(id)arg1;
+ (BOOL)rankLessThanOrEqualWithNSString:(id)arg1 withNSString:(id)arg2;
+ (BOOL)rankLessThanWithNSString:(id)arg1 withNSString:(id)arg2;
+ (int)compareRanksWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getQueryRequestBatchWithJavaUtilCollection:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (BOOL)shouldNotExecuteRemotelyWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
+ (id)createQueryBuilder;
+ (id)getCanonicalQuerySpecWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
- (id)init;

@end

