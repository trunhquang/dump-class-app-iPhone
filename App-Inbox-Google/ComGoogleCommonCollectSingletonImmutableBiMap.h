//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableBiMap.h"

@interface ComGoogleCommonCollectSingletonImmutableBiMap : ComGoogleCommonCollectImmutableBiMap
{
    id singleKey_;
    id singleValue_;
    ComGoogleCommonCollectImmutableBiMap *inverse_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_containsValueWithId__params;
+ (id)__annotations_containsKeyWithId__params;
+ (id)__annotations_getWithId__params;
- (void)dealloc;
- (id)inverse;
- (id)createKeySet;
- (id)createEntrySet;
- (BOOL)isPartialView;
- (BOOL)containsValueWithId:(id)arg1;
- (BOOL)containsKeyWithId:(id)arg1;
- (int)size;
- (id)getWithId:(id)arg1;
- (id)initWithJavaUtilMap_Entry:(id)arg1;
- (id)initWithId:(id)arg1 withId:(id)arg2 withComGoogleCommonCollectImmutableBiMap:(id)arg3;
- (id)initWithId:(id)arg1 withId:(id)arg2;

@end

