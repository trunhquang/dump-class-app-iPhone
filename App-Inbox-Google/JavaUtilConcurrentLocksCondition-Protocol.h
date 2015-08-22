//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JavaUtilConcurrentTimeUnitEnum, JavaUtilDate;

@protocol JavaUtilConcurrentLocksCondition <NSObject, JavaObject>
- (void)signalAll;
- (void)signal;
- (BOOL)awaitUntilWithJavaUtilDate:(JavaUtilDate *)arg1;
- (BOOL)awaitWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)arg2;
- (long long)awaitNanosWithLong:(long long)arg1;
- (void)awaitUninterruptibly;
- (void)await;
@end

