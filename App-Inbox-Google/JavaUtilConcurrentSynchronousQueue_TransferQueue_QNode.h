//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode : NSObject
{
    // Error parsing type: A^v, name: next_
    // Error parsing type: A^v, name: item_
    // Error parsing type: A^v, name: waiter_
    BOOL isData_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)__javaClone;
- (void)dealloc;
- (BOOL)isOffList;
- (BOOL)isCancelled;
- (void)tryCancelWithId:(id)arg1;
- (BOOL)casItemWithId:(id)arg1 withId:(id)arg2;
- (BOOL)casNextWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(id)arg1 withJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(id)arg2;
- (id)initWithId:(id)arg1 withBoolean:(BOOL)arg2;

@end

