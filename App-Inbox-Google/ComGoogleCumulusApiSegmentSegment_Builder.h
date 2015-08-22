//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusApiQuerySettings, ComGoogleCumulusApiQuerySpec, ComGoogleCumulusQueryQueryProto_Result_Segment_Builder, NSString;

@interface ComGoogleCumulusApiSegmentSegment_Builder : NSObject
{
    ComGoogleCumulusQueryQueryProto_Result_Segment_Builder *segmentBuilder_;
    id <JavaUtilSet> segmentObjects_;
    ComGoogleCumulusApiQuerySettings *querySettings_;
    ComGoogleCumulusApiQuerySpec *querySpec_;
    NSString *rank_;
    NSString *snippet_;
    BOOL built_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_snippet_;
+ (id)__annotations_rank_;
+ (id)__annotations_getQuerySpec;
+ (void)initialize;
- (void)dealloc;
- (id)init;
- (id)build;
- (BOOL)getHasMore;
- (id)setHasMoreWithBoolean:(BOOL)arg1;
- (id)getSegmentId;
- (id)setSegmentIdWithNSString:(id)arg1;
- (id)setSnippetWithNSString:(id)arg1;
- (id)getRank;
- (id)setRankWithNSString:(id)arg1;
- (id)getQuerySpec;
- (id)setQuerySpecWithComGoogleCumulusApiQuerySpec:(id)arg1;
- (id)getQuerySettings;
- (id)setQuerySettingsWithComGoogleCumulusApiQuerySettings:(id)arg1;
- (id)getObjectInfoList;
- (id)setIdWithNSString:(id)arg1;
- (int)getObjectInfoCount;
- (id)addObjectInfoWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg1;

@end

