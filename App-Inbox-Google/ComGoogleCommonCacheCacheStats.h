//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleCommonCacheCacheStats : NSObject
{
    long long hitCount_;
    long long missCount_;
    long long loadSuccessCount_;
    long long loadExceptionCount_;
    long long totalLoadTime_;
    long long evictionCount_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)plusWithComGoogleCommonCacheCacheStats:(id)arg1;
- (id)minusWithComGoogleCommonCacheCacheStats:(id)arg1;
- (long long)evictionCount;
- (double)averageLoadPenalty;
- (long long)totalLoadTime;
- (double)loadExceptionRate;
- (long long)loadExceptionCount;
- (long long)loadSuccessCount;
- (long long)loadCount;
- (double)missRate;
- (long long)missCount;
- (double)hitRate;
- (long long)hitCount;
- (long long)requestCount;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withLong:(long long)arg5 withLong:(long long)arg6;

@end

