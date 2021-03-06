//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusSyncClientIdbIdbIndexProcessor, ComGoogleCumulusSyncClientIdbIdbPostingListCache, ComGoogleCumulusSyncClientIdbIdbRangeTermsCollectorMap, ComGoogleCumulusSyncClientIdbIdbSharedTransactionManager;

@interface ComGoogleCumulusSyncClientIdbIdbRangeTermsCollectorProcessor : NSObject
{
    ComGoogleCumulusSyncClientIdbIdbRangeTermsCollectorMap *rangeTermsMap_;
    id <ComGoogleCumulusCommonIndexIdbAdapter> idbAdapter_;
    ComGoogleCumulusSyncClientIdbIdbSharedTransactionManager *sharedTransactionManager_;
    ComGoogleCumulusSyncClientIdbIdbIndexProcessor *indexProcessor_;
    ComGoogleCumulusSyncClientIdbIdbPostingListCache *postingListCache_;
    id <JCGCuPrioritizedWorkQueue> workQueue_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    BOOL isCleanupScheduled_;
}

- (void)dealloc;
- (id)tailListWithJavaUtilList:(id)arg1 withJavaLangComparable:(id)arg2 withBoolean:(BOOL)arg3;
- (id)headListWithJavaUtilList:(id)arg1 withJavaLangComparable:(id)arg2 withBoolean:(BOOL)arg3;
- (id)getEntryAfterWithJavaUtilList:(id)arg1 withComGoogleCumulusCommonCollectRange:(id)arg2 withJavaLangComparable:(id)arg3;
- (id)ensureCollectorsWithComGoogleCumulusCommonIndexFieldSpec:(id)arg1 withComGoogleCumulusCommonCollectRange:(id)arg2 withComGoogleCumulusCommonIndexIdbAdapter_Transaction:(id)arg3;
- (id)getRangeWithJavaLangComparable:(id)arg1 withJavaLangComparable:(id)arg2;
- (id)examineNextCollectorWithJavaUtilIterator:(id)arg1 withComGoogleCumulusCommonCollectRange:(id)arg2 withJavaLangComparable:(id)arg3 withJCGCuCallback:(id)arg4;
- (id)findNextTermWithComGoogleCumulusCommonIndexFieldSpec:(id)arg1 withJavaLangComparable:(id)arg2 withJavaLangComparable:(id)arg3 withJavaLangComparable:(id)arg4 withJCGCuCallback:(id)arg5;
- (id)findAllTermsWithComGoogleCumulusCommonIndexFieldSpec:(id)arg1 withJavaLangComparable:(id)arg2 withJavaLangComparable:(id)arg3 withJCGCuCallback:(id)arg4;
- (id)initWithComGoogleCumulusSyncClientIdbIdbRangeTermsCollectorMap:(id)arg1 withComGoogleCumulusCommonIndexIdbAdapter:(id)arg2 withComGoogleCumulusSyncClientIdbIdbSharedTransactionManager:(id)arg3 withComGoogleCumulusSyncClientIdbIdbIndexProcessor:(id)arg4 withComGoogleCumulusSyncClientIdbIdbPostingListCache:(id)arg5 withJCGCuPrioritizedWorkQueue:(id)arg6 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg7;

@end

