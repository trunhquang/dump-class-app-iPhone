//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectMaps_ImprovedAbstractMap.h"

@interface ComGoogleCommonCollectMaps_AbstractFilteredMap : ComGoogleCommonCollectMaps_ImprovedAbstractMap
{
    id <JavaUtilMap> unfiltered_;
    id <ComGoogleCommonBasePredicate> predicate_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_applyWithId_withId__params;
- (void)dealloc;
- (id)createValues;
- (id)removeWithId:(id)arg1;
- (BOOL)isEmpty;
- (id)getWithId:(id)arg1;
- (BOOL)containsKeyWithId:(id)arg1;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (BOOL)applyWithId:(id)arg1 withId:(id)arg2;
- (id)initWithJavaUtilMap:(id)arg1 withComGoogleCommonBasePredicate:(id)arg2;

@end

