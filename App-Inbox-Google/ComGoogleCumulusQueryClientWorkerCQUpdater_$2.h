//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleCumulusQueryClientWorkerCQUpdater, ComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum, NSString;

@interface ComGoogleCumulusQueryClientWorkerCQUpdater_$2 : NSObject <JavaLangRunnable>
{
    ComGoogleCumulusQueryClientWorkerCQUpdater *this$0_;
    ComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum *val$syncSource_;
    id <JavaUtilCollection> val$updates_;
    id <ComGoogleCumulusApiMetricsSpan> val$parentSpan_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusQueryClientWorkerCQUpdater:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg2 withJavaUtilCollection:(id)arg3 withComGoogleCumulusApiMetricsSpan:(id)arg4;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

