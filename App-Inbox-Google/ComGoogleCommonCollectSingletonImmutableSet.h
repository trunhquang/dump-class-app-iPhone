//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableSet.h"

@interface ComGoogleCommonCollectSingletonImmutableSet : ComGoogleCommonCollectImmutableSet
{
    id element_;
    int cachedHashCode_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)description;
- (BOOL)isHashCodeFast;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)copyIntoArrayWithNSObjectArray:(id)arg1 withInt:(int)arg2;
- (BOOL)isPartialView;
- (id)iterator;
- (BOOL)containsWithId:(id)arg1;
- (BOOL)isEmpty;
- (int)size;
- (id)initWithId:(id)arg1 withInt:(int)arg2;
- (id)initWithId:(id)arg1;

@end

