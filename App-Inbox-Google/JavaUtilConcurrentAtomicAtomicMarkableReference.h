//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JavaUtilConcurrentAtomicAtomicMarkableReference : NSObject
{
    // Error parsing type: A^v, name: pair_
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)__javaClone;
- (void)dealloc;
- (BOOL)weakCasPairWithJavaUtilConcurrentAtomicAtomicMarkableReference_Pair:(id)arg1 withJavaUtilConcurrentAtomicAtomicMarkableReference_Pair:(id)arg2;
- (BOOL)casPairWithJavaUtilConcurrentAtomicAtomicMarkableReference_Pair:(id)arg1 withJavaUtilConcurrentAtomicAtomicMarkableReference_Pair:(id)arg2;
- (BOOL)attemptMarkWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (void)setWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (BOOL)compareAndSetWithId:(id)arg1 withId:(id)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4;
- (BOOL)weakCompareAndSetWithId:(id)arg1 withId:(id)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4;
- (id)getWithBooleanArray:(id)arg1;
- (BOOL)isMarked;
- (id)getReference;
- (id)initWithId:(id)arg1 withBoolean:(BOOL)arg2;

@end

