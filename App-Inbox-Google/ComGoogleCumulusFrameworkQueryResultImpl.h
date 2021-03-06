//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiQueryResult.h"

@class ComGoogleCumulusQueryQueryProto_Result_SourceEnum, JavaLangBoolean, JavaLangInteger, NSString;

@interface ComGoogleCumulusFrameworkQueryResultImpl : NSObject <ComGoogleCumulusApiQueryResult>
{
    JavaLangInteger *absoluteCount_;
    id <JavaUtilList> objectInfos_;
    NSString *queryId_;
    NSString *fullQueryVersion_;
    NSString *resultVersion_;
    BOOL fullResult_;
    BOOL continuousUpdate_;
    ComGoogleCumulusQueryQueryProto_Result_SourceEnum *resultSource_;
    id <JavaUtilList> appExtensions_;
    BOOL isSplit_;
    BOOL pagingMore_;
    int totalDisplacementScore_;
    JavaLangBoolean *hasMore_;
    NSString *sourceBatchId_;
    NSString *spanId_;
    BOOL isPreloadedResult_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_spanId_;
+ (id)__annotations_sourceBatchId_;
+ (id)__annotations_hasMore_;
+ (id)__annotations_absoluteCount_;
+ (id)__annotations_ensureSegmentMapWithJavaUtilMap_withJavaUtilList__params;
+ (id)__annotations_calculateDeltaResultWithComGoogleCumulusFrameworkQueryResultImpl_withComGoogleCumulusFrameworkQueryResultImpl_withComGoogleCumulusFrameworkQueryResultImpl__params;
+ (id)__annotations_calculateFullResultListWithJavaUtilList_withJavaUtilList__params;
+ (id)__annotations_calculateFullResultWithComGoogleCumulusFrameworkQueryResultImpl_withComGoogleCumulusFrameworkQueryResultImpl__params;
+ (id)__annotations_equalsWithId__params;
+ (id)__annotations_getSpanId;
+ (id)__annotations_getSourceBatchId;
+ (id)__annotations_hasMore;
+ (id)__annotations_getAbsoluteCount;
+ (id)__annotations_initWithJavaLangInteger_withJavaUtilList_withNSString_withNSString_withNSString_withBoolean_withBoolean_withComGoogleCumulusQueryQueryProto_Result_SourceEnum_withJavaUtilList_withBoolean_withBoolean_withBoolean_withInt_withJavaLangBoolean_withNSString_withNSString__params;
+ (id)computeDeltaFromFullWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2;
+ (id)buildSegmentMapWithJavaUtilList:(id)arg1;
+ (id)ensureSegmentMapWithJavaUtilMap:(id)arg1 withJavaUtilList:(id)arg2;
+ (id)computeDeltaListFromDeltaWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2 withJavaUtilList:(id)arg3;
+ (id)getObjectsMapWithJavaUtilList:(id)arg1;
+ (id)getUniqueIdForObjectInfoWithComGoogleCumulusApiObjectInfo:(id)arg1;
+ (id)calculateDeltaResultWithComGoogleCumulusFrameworkQueryResultImpl:(id)arg1 withComGoogleCumulusFrameworkQueryResultImpl:(id)arg2 withComGoogleCumulusFrameworkQueryResultImpl:(id)arg3;
+ (id)convertListToNoneWithJavaUtilList:(id)arg1;
+ (id)calculateFullResultListWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2;
+ (id)calculateFullResultWithComGoogleCumulusFrameworkQueryResultImpl:(id)arg1 withComGoogleCumulusFrameworkQueryResultImpl:(id)arg2;
+ (id)convertInfoWithStateToObjectInfoWithComGoogleCumulusFrameworkObjectHandleManager:(id)arg1 withJavaUtilList:(id)arg2;
+ (id)createQueryResultWithComGoogleCumulusFrameworkObjectHandleManager:(id)arg1 withComGoogleCumulusQueryInternalResult:(id)arg2;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)getSource;
- (int)getTotalDisplacementScore;
- (BOOL)hasRemoteResult;
- (BOOL)hasLocalResult;
- (id)getAppExtensions;
- (id)getObjects;
- (id)getSpanId;
- (id)getSourceBatchId;
- (BOOL)pagingMore;
- (BOOL)isPreloadedResult;
- (BOOL)isSplitResult;
- (BOOL)isContinuousUpdate;
- (BOOL)isDeltaResult;
- (BOOL)isCompleteResultWithComGoogleCumulusApiQuery:(id)arg1;
- (BOOL)getIsRemoteCompleteResultWithComGoogleCumulusApiQuery:(id)arg1;
- (BOOL)getIsLocalCompleteResultWithComGoogleCumulusApiQuery:(id)arg1;
- (id)getResultVersion;
- (id)getQueryId;
- (id)getFullQueryVersion;
- (id)hasMore;
- (int)getObjectCount;
- (id)getAbsoluteCount;
- (id)initWithJavaLangInteger:(id)arg1 withJavaUtilList:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withBoolean:(BOOL)arg6 withBoolean:(BOOL)arg7 withComGoogleCumulusQueryQueryProto_Result_SourceEnum:(id)arg8 withJavaUtilList:(id)arg9 withBoolean:(BOOL)arg10 withBoolean:(BOOL)arg11 withBoolean:(BOOL)arg12 withInt:(int)arg13 withJavaLangBoolean:(id)arg14 withNSString:(id)arg15 withNSString:(id)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

