//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaUtilConcurrentFuture.h"

@class NSString;

@interface JavaUtilConcurrentForkJoinTask : NSObject <JavaUtilConcurrentFuture, JavaIoSerializable>
{
    // Error parsing type: Ai, name: status_
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)adaptWithJavaUtilConcurrentCallable:(id)arg1;
+ (id)adaptWithJavaLangRunnable:(id)arg1 withId:(id)arg2;
+ (id)adaptWithJavaLangRunnable:(id)arg1;
+ (id)pollTask;
+ (id)pollNextLocalTask;
+ (id)peekNextLocalTask;
+ (int)getSurplusQueuedTaskCount;
+ (int)getQueuedTaskCount;
+ (BOOL)inForkJoinPool;
+ (id)getPool;
+ (void)helpQuiesce;
+ (id)invokeAllWithJavaUtilCollection:(id)arg1;
+ (void)invokeAllWithJavaUtilConcurrentForkJoinTaskArray:(id)arg1;
+ (void)invokeAllWithJavaUtilConcurrentForkJoinTask:(id)arg1 withJavaUtilConcurrentForkJoinTask:(id)arg2;
+ (void)uncheckedThrowWithJavaLangThrowable:(id)arg1;
+ (void)rethrowWithJavaLangThrowable:(id)arg1;
+ (void)helpExpungeStaleExceptions;
+ (void)expungeStaleExceptions;
+ (void)cancelIgnoringExceptionsWithJavaUtilConcurrentForkJoinTask:(id)arg1;
- (id)init;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (BOOL)compareAndSetForkJoinTaskTagWithShort:(short)arg1 withShort:(short)arg2;
- (short)setForkJoinTaskTagWithShort:(short)arg1;
- (short)getForkJoinTaskTag;
- (BOOL)exec;
- (void)setRawResultWithId:(id)arg1;
- (id)getRawResult;
- (BOOL)tryUnfork;
- (void)reinitialize;
- (void)quietlyInvoke;
- (void)quietlyJoin;
- (id)getWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(id)arg2;
- (id)get;
- (void)quietlyComplete;
- (void)completeWithId:(id)arg1;
- (void)completeExceptionallyWithJavaLangThrowable:(id)arg1;
- (id)getException;
- (BOOL)isCompletedNormally;
- (BOOL)isCompletedAbnormally;
- (BOOL)isCancelled;
- (BOOL)isDone;
- (BOOL)cancelWithBoolean:(BOOL)arg1;
- (id)invoke;
- (id)join;
- (id)fork;
- (void)reportExceptionWithInt:(int)arg1;
- (id)getThrowableException;
- (void)clearExceptionalCompletion;
- (void)internalPropagateExceptionWithJavaLangThrowable:(id)arg1;
- (int)setExceptionalCompletionWithJavaLangThrowable:(id)arg1;
- (int)recordExceptionalCompletionWithJavaLangThrowable:(id)arg1;
- (int)doInvoke;
- (int)doJoin;
- (int)externalInterruptibleAwaitDone;
- (int)externalAwaitDone;
- (BOOL)trySetSignal;
- (int)doExec;
- (int)setCompletionWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

