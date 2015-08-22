//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JavaUtilConcurrentTimeUnitEnum;

@protocol JavaUtilConcurrentCompletionService <NSObject, JavaObject>
- (id <JavaUtilConcurrentFuture>)pollWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)arg2;
- (id <JavaUtilConcurrentFuture>)poll;
- (id <JavaUtilConcurrentFuture>)take;
- (id <JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id <JavaLangRunnable>)arg1 withId:(id)arg2;
- (id <JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id <JavaUtilConcurrentCallable>)arg1;
@end

