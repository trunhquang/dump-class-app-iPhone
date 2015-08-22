//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilCollections_CheckedMap.h"

#import "JavaUtilSortedMap.h"

@class NSString;

@interface JavaUtilCollections_CheckedSortedMap : JavaUtilCollections_CheckedMap <JavaUtilSortedMap>
{
    id <JavaUtilSortedMap> sm_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)lastKey;
- (id)firstKey;
- (id)tailMapWithId:(id)arg1;
- (id)headMapWithId:(id)arg1;
- (id)subMapWithId:(id)arg1 withId:(id)arg2;
- (id)comparator;
- (id)initWithJavaUtilSortedMap:(id)arg1 withIOSClass:(id)arg2 withIOSClass:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

