//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractNavigableMap.h"

@interface ComGoogleCommonCollectMaps_NavigableAsMapView : ComGoogleCommonCollectAbstractNavigableMap
{
    id <JavaUtilNavigableSet> set_;
    id <ComGoogleCommonBaseFunction> function_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getWithId__params;
+ (id)__annotations_getWithId_;
- (void)dealloc;
- (id)descendingMap;
- (int)size;
- (id)navigableKeySet;
- (id)descendingEntryIterator;
- (id)entryIterator;
- (void)clear;
- (id)getWithId:(id)arg1;
- (id)comparator;
- (id)tailMapWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)headMapWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)subMapWithId:(id)arg1 withBoolean:(BOOL)arg2 withId:(id)arg3 withBoolean:(BOOL)arg4;
- (id)initWithJavaUtilNavigableSet:(id)arg1 withComGoogleCommonBaseFunction:(id)arg2;

@end

