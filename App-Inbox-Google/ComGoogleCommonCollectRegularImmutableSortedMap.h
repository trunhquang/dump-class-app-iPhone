//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableSortedMap.h"

@class ComGoogleCommonCollectImmutableList, ComGoogleCommonCollectRegularImmutableSortedSet;

@interface ComGoogleCommonCollectRegularImmutableSortedMap : ComGoogleCommonCollectImmutableSortedMap
{
    ComGoogleCommonCollectRegularImmutableSortedSet *keySet_RegularImmutableSortedMap_;
    ComGoogleCommonCollectImmutableList *valueList_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getWithId__params;
- (void)dealloc;
- (id)createDescendingMap;
- (id)tailMapWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)headMapWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)getSubMapWithInt:(int)arg1 withInt:(int)arg2;
- (id)getWithId:(id)arg1;
- (id)values;
- (id)keySet;
- (id)createEntrySet;
- (id)initWithComGoogleCommonCollectRegularImmutableSortedSet:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2 withComGoogleCommonCollectImmutableSortedMap:(id)arg3;
- (id)initWithComGoogleCommonCollectRegularImmutableSortedSet:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;

@end

