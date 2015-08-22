//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCumulusCommonAppExtensionProto_AppExtension, ComGoogleCumulusQueryQueryProto_Constraints, ComGoogleCumulusQueryQueryProto_QueryKey, ComGoogleCumulusQueryQueryProto_Result_ObjectInfo, ComGoogleCumulusQueryQueryProto_Result_SourceEnum, ComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum, NSString;

@protocol ComGoogleCumulusQueryQueryProto_ResultOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum *)getSyncSource;
- (BOOL)hasSyncSource;
- (NSString *)getMetricId;
- (BOOL)hasMetricId;
- (ComGoogleCumulusCommonAppExtensionProto_AppExtension *)getAppExtensionWithInt:(int)arg1;
- (id <JavaUtilList>)getAppExtensionList;
- (int)getAppExtensionCount;
- (ComGoogleCumulusQueryQueryProto_Result_SourceEnum *)getSource;
- (BOOL)hasSource;
- (NSString *)getResultHighRankBound;
- (BOOL)hasResultHighRankBound;
- (NSString *)getResultLowRankBound;
- (BOOL)hasResultLowRankBound;
- (BOOL)getCanPageMore;
- (BOOL)hasCanPageMore;
- (BOOL)getSuppressBackfill;
- (BOOL)hasSuppressBackfill;
- (BOOL)getIsSplitResult;
- (BOOL)hasIsSplitResult;
- (BOOL)getIsRequery;
- (BOOL)hasIsRequery;
- (BOOL)getIsPreloadedResult;
- (BOOL)hasIsPreloadedResult;
- (BOOL)getHasMore;
- (BOOL)hasHasMore;
- (BOOL)getClearCachedResult;
- (BOOL)hasClearCachedResult;
- (NSString *)getSyncBatchId;
- (BOOL)hasSyncBatchId;
- (int)getLocalAbsoluteCount;
- (BOOL)hasLocalAbsoluteCount;
- (int)getAbsoluteCount;
- (BOOL)hasAbsoluteCount;
- (ComGoogleCumulusQueryQueryProto_Result_ObjectInfo *)getObjectInfoWithInt:(int)arg1;
- (id <JavaUtilList>)getObjectInfoList;
- (int)getObjectInfoCount;
- (ComGoogleCumulusQueryQueryProto_Constraints *)getConstraints;
- (BOOL)hasConstraints;
- (NSString *)getRequiredResultVersion;
- (BOOL)hasRequiredResultVersion;
- (BOOL)getIsContinuousUpdate;
- (BOOL)hasIsContinuousUpdate;
- (BOOL)getIsLocalResult;
- (BOOL)hasIsLocalResult;
- (BOOL)getIsFullResult;
- (BOOL)hasIsFullResult;
- (NSString *)getQueryResultVersion;
- (BOOL)hasQueryResultVersion;
- (ComGoogleCumulusQueryQueryProto_QueryKey *)getKey;
- (BOOL)hasKey;
@end

