//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectMaps_ImprovedAbstractMap.h"

@interface ComGoogleCommonCollectMaps_AsMapView : ComGoogleCommonCollectMaps_ImprovedAbstractMap
{
    id <JavaUtilSet> set_;
    id <ComGoogleCommonBaseFunction> function_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_removeWithId__params;
+ (id)__annotations_getWithId__params;
+ (id)__annotations_containsKeyWithId__params;
- (void)dealloc;
- (id)createEntrySet;
- (void)clear;
- (id)removeWithId:(id)arg1;
- (id)getWithId:(id)arg1;
- (BOOL)containsKeyWithId:(id)arg1;
- (int)size;
- (id)createValues;
- (id)createKeySet;
- (id)initWithJavaUtilSet:(id)arg1 withComGoogleCommonBaseFunction:(id)arg2;
- (id)backingSet;

@end

