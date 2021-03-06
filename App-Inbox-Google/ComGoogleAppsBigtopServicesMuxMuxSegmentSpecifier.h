//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiPluginSegmentRanker.h"
#import "ComGoogleCumulusApiPluginSegmentSnippetGenerator.h"
#import "ComGoogleCumulusApiSegmentSpecifier.h"

@class ComGoogleAppsBigtopServicesMuxMuxClientRegistry, NSString;

@interface ComGoogleAppsBigtopServicesMuxMuxSegmentSpecifier : NSObject <ComGoogleCumulusApiSegmentSpecifier, ComGoogleCumulusApiPluginSegmentRanker, ComGoogleCumulusApiPluginSegmentSnippetGenerator>
{
    ComGoogleAppsBigtopServicesMuxMuxClientRegistry *muxRegistry_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getSnippetWithComGoogleCumulusQueryQueryProto_Query_withComGoogleCumulusQueryQueryProto_Result_Segment_withComGoogleCommonBasePair__params;
+ (id)__annotations_getRankWithComGoogleCumulusQueryQueryProto_Query_withComGoogleCumulusQueryQueryProto_Result_Segment_withComGoogleCommonBasePair_withNSString__params;
+ (id)__annotations_getObjectIdForSegmentIdWithComGoogleCumulusQueryQueryProto_Query_withNSString_;
- (void)dealloc;
- (id)getSnippetWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_Segment:(id)arg2 withComGoogleCommonBasePair:(id)arg3;
- (id)getRankWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_Segment:(id)arg2 withComGoogleCommonBasePair:(id)arg3 withNSString:(id)arg4;
- (id)getObjectIdForSegmentIdWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withNSString:(id)arg2;
- (id)getSegmentSpecificationWithComGoogleCumulusApiTypeObjectId:(id)arg1 withComGoogleCumulusTypeTypeProto_BaseObject:(id)arg2 withNSString:(id)arg3 withComGoogleCumulusQueryQueryProto_Query:(id)arg4;
- (id)initWithComGoogleAppsBigtopServicesMuxMuxClientRegistry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

