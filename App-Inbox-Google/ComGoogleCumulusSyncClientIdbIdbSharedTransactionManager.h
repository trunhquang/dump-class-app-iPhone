//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonMetric2SpanHelper;

@interface ComGoogleCumulusSyncClientIdbIdbSharedTransactionManager : NSObject
{
    id <JavaUtilList> transactionWaiters_;
    id <JavaUtilList> completeWaiters_;
    id <JavaUtilList> abortWaiters_;
    id <ComGoogleCumulusCommonIndexIdbAdapter_Database> database_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    id <ComGoogleCumulusCommonMetric2SpanEventsSink_Flusher> spanEventsFlusher_;
    id <ComGoogleCumulusCommonIndexIdbAdapter> adapter_;
    id <ComGoogleCumulusCommonIndexIdbAdapter_Transaction> transaction_;
    BOOL active_;
    int txRelativeStartTimeMs_;
    BOOL hasWriteOperation_;
    BOOL hasFlush_;
    BOOL isClosed_;
    id <JCGCuCallback> onCloseCallback_;
}

+ (void)initialize;
- (void)dealloc;
- (void)createTransaction;
- (void)waitForAbortWithJavaLangRunnable:(id)arg1;
- (void)waitForCompleteWithJavaLangRunnable:(id)arg1;
- (void)ensureUsableTransactionWithComGoogleCumulusSyncClientIdbIdbSharedTransactionManager_Waiter:(id)arg1;
- (BOOL)isTransactionUsable;
- (void)setInactive;
- (void)setActive;
- (void)setHasFlush;
- (void)setHasWriteOperation;
- (BOOL)isTransactionTooOld;
- (BOOL)isClosing;
- (void)closeWithJCGCuCallback:(id)arg1;
- (id)initWithComGoogleCumulusCommonIndexIdbAdapter_Database:(id)arg1 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg2 withComGoogleCumulusCommonMetric2SpanEventsSink_Flusher:(id)arg3 withComGoogleCumulusCommonIndexIdbAdapter:(id)arg4;

@end

