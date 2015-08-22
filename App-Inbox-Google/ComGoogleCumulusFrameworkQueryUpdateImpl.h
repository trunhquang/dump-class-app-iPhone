//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiQueryUpdate.h"

@class ComGoogleCumulusApiQueryError, ComGoogleCumulusApiQueryUpdate_UpdateTypeEnum, NSString;

@interface ComGoogleCumulusFrameworkQueryUpdateImpl : NSObject <ComGoogleCumulusApiQueryUpdate>
{
    ComGoogleCumulusApiQueryUpdate_UpdateTypeEnum *type_;
    id <ComGoogleCumulusApiQuery> query_;
    id <ComGoogleCumulusApiQueryResult> fullResult_;
    id <ComGoogleCumulusApiQueryResult> deltaResult_;
    ComGoogleCumulusApiQueryError *error_;
    id <ComGoogleCumulusApiMetricsSpan> span_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_error_;
+ (id)__annotations_deltaResult_;
+ (id)__annotations_fullResult_;
+ (id)__annotations_initWithComGoogleCumulusApiQuery_withComGoogleCumulusApiQueryResult_withComGoogleCumulusApiQueryResult_withComGoogleCumulusApiMetricsSpan__params;
+ (id)__annotations_newResultUpdateWithComGoogleCumulusApiQuery_withComGoogleCumulusApiQueryResult_withComGoogleCumulusApiQueryResult_withComGoogleCumulusApiMetricsSpan__params;
+ (id)newFailedUpdateWithComGoogleCumulusApiQuery:(id)arg1 withComGoogleCumulusApiQueryError:(id)arg2 withComGoogleCumulusApiMetricsSpan:(id)arg3;
+ (id)newResultUpdateWithComGoogleCumulusApiQuery:(id)arg1 withComGoogleCumulusApiQueryResult:(id)arg2 withComGoogleCumulusApiQueryResult:(id)arg3 withComGoogleCumulusApiMetricsSpan:(id)arg4;
+ (id)newStartedUpdateWithComGoogleCumulusApiQuery:(id)arg1 withBoolean:(BOOL)arg2 withComGoogleCumulusApiMetricsSpan:(id)arg3;
- (void)dealloc;
- (id)getSpan;
- (id)getError;
- (id)getDeltaResult;
- (id)getResult;
- (BOOL)hasError;
- (BOOL)hasDeltaResult;
- (BOOL)hasResult;
- (id)getQuery;
- (id)getUpdateType;
- (id)initWithComGoogleCumulusApiQuery:(id)arg1 withComGoogleCumulusApiQueryError:(id)arg2 withComGoogleCumulusApiMetricsSpan:(id)arg3;
- (id)initWithComGoogleCumulusApiQuery:(id)arg1 withComGoogleCumulusApiQueryUpdate_UpdateTypeEnum:(id)arg2 withComGoogleCumulusApiMetricsSpan:(id)arg3;
- (id)initWithComGoogleCumulusApiQuery:(id)arg1 withComGoogleCumulusApiQueryResult:(id)arg2 withComGoogleCumulusApiQueryResult:(id)arg3 withComGoogleCumulusApiMetricsSpan:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

