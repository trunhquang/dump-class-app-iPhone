//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilConcurrentForkJoinTask.h"

#import "JavaUtilConcurrentRunnableFuture.h"

@class NSString;

@interface JavaUtilConcurrentForkJoinTask_AdaptedRunnableAction : JavaUtilConcurrentForkJoinTask <JavaUtilConcurrentRunnableFuture>
{
    id <JavaLangRunnable> runnable_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)run;
- (BOOL)exec;
- (void)setRawResultWithId:(id)arg1;
- (id)getRawResult;
- (id)initWithJavaLangRunnable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

