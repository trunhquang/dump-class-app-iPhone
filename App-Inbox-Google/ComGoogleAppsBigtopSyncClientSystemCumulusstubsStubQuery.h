//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiQuery.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientSystemCumulusstubsStubQuery : NSObject <ComGoogleCumulusApiQuery>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_isExpectingResult;
+ (id)__annotations_getQueryVersion;
+ (id)__annotations_getQuerySpec;
+ (id)__annotations_updatePriorityWithComGoogleCumulusApiQuerySettings_PriorityEnum__params;
+ (id)__annotations_refreshWithComGoogleCumulusApiMetricsAppContext__params;
+ (id)__annotations_updateBoundsWithNSString_withNSString_withJavaLangInteger_withComGoogleCumulusApiQuerySpec_PageOrderEnum_withComGoogleCumulusApiMetricsAppContext__params;
+ (id)__annotations_updateRangeWithInt_withComGoogleCumulusApiMetricsAppContext__params;
+ (id)__annotations_updateQuerySpecWithComGoogleCumulusApiQuerySpec_withComGoogleCumulusApiMetricsAppContext__params;
- (id)init;
- (BOOL)isExpectingResult;
- (id)getQueryVersion;
- (int)getVersion;
- (id)getQueryId;
- (void)stop;
- (id)getQuerySpec;
- (void)updatePriorityWithComGoogleCumulusApiQuerySettings_PriorityEnum:(id)arg1;
- (void)refreshWithComGoogleCumulusApiMetricsAppContext:(id)arg1;
- (void)refresh;
- (id)updateBoundsWithNSString:(id)arg1 withNSString:(id)arg2 withJavaLangInteger:(id)arg3 withComGoogleCumulusApiQuerySpec_PageOrderEnum:(id)arg4 withComGoogleCumulusApiMetricsAppContext:(id)arg5;
- (id)updateRangeWithInt:(int)arg1 withComGoogleCumulusApiMetricsAppContext:(id)arg2;
- (id)updateRangeWithInt:(int)arg1;
- (void)updateQuerySpecWithComGoogleCumulusApiQuerySpec:(id)arg1 withComGoogleCumulusApiMetricsAppContext:(id)arg2;
- (void)updateQuerySpecWithComGoogleCumulusApiQuerySpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

