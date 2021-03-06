//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsXplatUtilConcurrentScheduledExecutor.h"

@class ComGoogleCommonBaseStopwatch, NSString;

@interface JBTCumulusWorkQueueExecutor : NSObject <ComGoogleAppsXplatUtilConcurrentScheduledExecutor>
{
    id <JCGCuDelayedWorkQueue> workQueue_;
    ComGoogleCommonBaseStopwatch *stopwatch_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)scheduleWithJavaLangRunnable:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(id)arg3;
- (void)executeWithJavaLangRunnable:(id)arg1;
- (id)initWithJCGCuDelayedWorkQueue:(id)arg1 withComGoogleCommonBaseStopwatch:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

