//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentListenableFuture.h"

@class ComGoogleCommonUtilConcurrentAbstractFuture_Sync, ComGoogleCommonUtilConcurrentExecutionList, NSString;

@interface ComGoogleCommonUtilConcurrentAbstractFuture : NSObject <ComGoogleCommonUtilConcurrentListenableFuture>
{
    ComGoogleCommonUtilConcurrentAbstractFuture_Sync *sync_;
    ComGoogleCommonUtilConcurrentExecutionList *executionList_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_cancellationExceptionWithCauseWithNSString_withJavaLangThrowable__params;
+ (id)__annotations_setWithId__params;
+ (id)cancellationExceptionWithCauseWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2;
- (void)dealloc;
- (BOOL)setExceptionWithJavaLangThrowable:(id)arg1;
- (BOOL)setWithId:(id)arg1;
- (void)addListenerWithJavaLangRunnable:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2;
- (BOOL)wasInterrupted;
- (void)interruptTask;
- (BOOL)cancelWithBoolean:(BOOL)arg1;
- (BOOL)isCancelled;
- (BOOL)isDone;
- (id)get;
- (id)getWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

