//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCacheLocalCache_WeakEntry.h"

@interface ComGoogleCommonCacheLocalCache_WeakWriteEntry : ComGoogleCommonCacheLocalCache_WeakEntry
{
    // Error parsing type: Aq, name: writeTime_
    id <ComGoogleCommonCacheLocalCache_ReferenceEntry> nextWrite_;
    id <ComGoogleCommonCacheLocalCache_ReferenceEntry> previousWrite_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithJavaLangRefReferenceQueue_withId_withInt_withComGoogleCommonCacheLocalCache_ReferenceEntry__params;
- (void)dealloc;
- (void)setPreviousInWriteQueueWithComGoogleCommonCacheLocalCache_ReferenceEntry:(id)arg1;
- (id)getPreviousInWriteQueue;
- (void)setNextInWriteQueueWithComGoogleCommonCacheLocalCache_ReferenceEntry:(id)arg1;
- (id)getNextInWriteQueue;
- (void)setWriteTimeWithLong:(long long)arg1;
- (long long)getWriteTime;
- (id)initWithJavaLangRefReferenceQueue:(id)arg1 withId:(id)arg2 withInt:(int)arg3 withComGoogleCommonCacheLocalCache_ReferenceEntry:(id)arg4;

@end

