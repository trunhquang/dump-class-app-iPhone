//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class JavaUtilConcurrentTimeUnitEnum, NSString;

@interface ComGoogleCommonUtilConcurrentMoreExecutors_Application_$1 : NSObject <JavaLangRunnable>
{
    id <JavaUtilConcurrentExecutorService> val$service_;
    long long val$terminationTimeout_;
    JavaUtilConcurrentTimeUnitEnum *val$timeUnit_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJavaUtilConcurrentExecutorService:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(id)arg3;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

