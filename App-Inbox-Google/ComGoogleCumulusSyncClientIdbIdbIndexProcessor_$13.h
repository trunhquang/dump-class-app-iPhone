//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JCGCuThrowingCallback.h"

@class ComGoogleCumulusCommonUtilBox_Counter, ComGoogleCumulusSyncClientIdbIdbIndexProcessor, ComGoogleCumulusSyncClientIdbIdbIndexProcessor_BucketTrancheList, JavaLangInteger, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbIndexProcessor_$13 : JCGCuThrowingCallback
{
    ComGoogleCumulusSyncClientIdbIdbIndexProcessor *this$0_;
    NSString *val$fieldName_;
    int val$bucketId_;
    int val$finalVersion_;
    id <JavaUtilList> val$mutations_;
    id <JavaUtilSet> val$processingTrancheSet_;
    ComGoogleCumulusCommonUtilBox_Counter *val$totalTrancheDataSize_;
    JavaLangInteger *val$startVersion_;
    int val$maxVersion_;
    ComGoogleCumulusCommonUtilBox_Counter *val$processTrancheCount_;
    ComGoogleCumulusSyncClientIdbIdbIndexProcessor_BucketTrancheList *val$trancheList_;
    id <ComGoogleCumulusCommonIndexIdbAdapter_ObjectStore> val$indexLogStore_;
    id <JavaLangRunnable> val$callback_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientIdbIdbIndexProcessor:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaUtilList:(id)arg5 withJavaUtilSet:(id)arg6 withComGoogleCumulusCommonUtilBox_Counter:(id)arg7 withJavaLangInteger:(id)arg8 withInt:(int)arg9 withComGoogleCumulusCommonUtilBox_Counter:(id)arg10 withComGoogleCumulusSyncClientIdbIdbIndexProcessor_BucketTrancheList:(id)arg11 withComGoogleCumulusCommonIndexIdbAdapter_ObjectStore:(id)arg12 withJavaLangRunnable:(id)arg13;
- (void)onSuccessWithId:(id)arg1;

@end

