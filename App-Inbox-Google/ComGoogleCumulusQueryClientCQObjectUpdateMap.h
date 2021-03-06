//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusQueryQueryProto_Result;

@interface ComGoogleCumulusQueryClientCQObjectUpdateMap : NSObject
{
    id <ComGoogleCumulusApiPluginSegmentRanker> segmentRanker_;
    id <ComGoogleCumulusApiPluginSegmentSnippetGenerator> segmentSnippetGenerator_;
    id <ComGoogleCumulusQuerySegmentSpecifierInternal> segmentSpecifier_;
    ComGoogleCumulusQueryQueryProto_Result *lastFull_;
    id <JavaUtilMap> objectPositionMap_;
    id <JavaUtilMap> segmentResultMap_;
    id <JavaUtilMap> segmentLoadMap_;
    id <JavaUtilMap> segmentUpdateMap_;
    id <JavaUtilSet> rootObjectInfos_;
    id <JavaUtilList> unrankedSegments_;
}

+ (BOOL)preserveRemoteInfoWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
- (void)dealloc;
- (void)addObjectWithNSString:(id)arg1 withComGoogleCumulusQueryClientCQObjectUpdateMap_ObjectPosition:(id)arg2;
- (void)addToSegmentWithNSString:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg2;
- (id)ensureObjectInfoOfTypeWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg2 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo_ChangeTypeEnum:(id)arg3;
- (void)addSegmentedMatchingObjectInfoWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg3 withJavaUtilSet:(id)arg4 withBoolean:(BOOL)arg5 withBoolean:(BOOL)arg6;
- (void)addRootMatchingObjectInfoWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3;
- (id)getPositionListWithNSString:(id)arg1;
- (void)maybeAddSegmentRankAndSnippetWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo_Builder:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2 withComGoogleCumulusQueryQueryProto_Result_Segment:(id)arg3 withComGoogleCommonBasePair:(id)arg4;
- (id)getSegmentObjectIds;
- (id)computeResultDeltaWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg2 withJavaUtilMap:(id)arg3 withBoolean:(BOOL)arg4 withNSString:(id)arg5;
- (void)computeSegmentUpdatesAndMissingObjectsWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
- (void)addMatchObjectInfoToResultWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg3 withJavaUtilSet:(id)arg4 withBoolean:(BOOL)arg5;
- (void)addObjectInfoToResultWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2;
- (id)getObjectRefWithNSString:(id)arg1;
- (id)initWithComGoogleCumulusApiPluginSegmentRanker:(id)arg1 withComGoogleCumulusApiPluginSegmentSnippetGenerator:(id)arg2 withComGoogleCumulusQuerySegmentSpecifierInternal:(id)arg3 withComGoogleCumulusQueryQueryProto_Result:(id)arg4;

@end

