//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusApiPluginQueryMatcher_MatchTypeEnum;

@interface ComGoogleCumulusApiPluginSegmentedQueryMatcher_Result : NSObject
{
    ComGoogleCumulusApiPluginQueryMatcher_MatchTypeEnum *matchType_;
    id <JavaUtilSet> segmentIds_;
}

+ (void)initialize;
+ (id)fromMatchTypeWithComGoogleCumulusApiPluginQueryMatcher_MatchTypeEnum:(id)arg1;
+ (id)matchWithSegmentsWithJavaUtilCollection:(id)arg1;
+ (id)matchWithNoSegments;
+ (id)noMatch;
+ (id)indeterminate;
- (void)dealloc;
- (id)description;
- (id)getSegmentIds;
- (BOOL)isMatch;
- (id)getMatchType;
- (id)initWithComGoogleCumulusApiPluginQueryMatcher_MatchTypeEnum:(id)arg1 withJavaUtilCollection:(id)arg2;

@end

