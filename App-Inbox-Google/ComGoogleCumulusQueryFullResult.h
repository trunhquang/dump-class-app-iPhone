//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusQueryObjectInfoGroup.h"

@class ComGoogleCumulusQueryQueryProto_Result;

@interface ComGoogleCumulusQueryFullResult : ComGoogleCumulusQueryObjectInfoGroup
{
    ComGoogleCumulusQueryQueryProto_Result *resultMetadata_;
}

+ (id)mergeFullResultsWithComGoogleCumulusQueryFullResult:(id)arg1 withComGoogleCumulusQueryFullResult:(id)arg2;
- (void)dealloc;
- (id)computeDropMapWithComGoogleCumulusCommonObjectChecker:(id)arg1 withJavaUtilMap:(id)arg2 withComGoogleCumulusQueryFullResult:(id)arg3;
- (id)filterDeltaResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4;
- (id)filterDeltaResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
- (void)applyDeltaResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withJavaUtilCollection:(id)arg2 withJavaUtilCollection:(id)arg3;
- (BOOL)removeSoidsWithJavaUtilSet:(id)arg1 withJavaUtilCollection:(id)arg2;
- (id)hasMore;
- (int)getQueryVersion;
- (id)getResultMetadata;
- (id)toResultProto;
- (id)init;
- (id)initWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;

@end

