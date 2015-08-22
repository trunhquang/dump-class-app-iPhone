//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractMap.h"

#import "JavaIoSerializable.h"
#import "JavaUtilConcurrentConcurrentNavigableMap.h"
#import "NSCopying.h"

@class JavaUtilConcurrentConcurrentSkipListMap, JavaUtilConcurrentConcurrentSkipListMap_KeySet, NSString;

@interface JavaUtilConcurrentConcurrentSkipListMap_SubMap : JavaUtilAbstractMap <JavaUtilConcurrentConcurrentNavigableMap, NSCopying, JavaIoSerializable>
{
    JavaUtilConcurrentConcurrentSkipListMap *m_;
    id lo_;
    id hi_;
    BOOL loInclusive_;
    BOOL hiInclusive_;
    BOOL isDescending_;
    JavaUtilConcurrentConcurrentSkipListMap_KeySet *keySetView_;
    id <JavaUtilSet> entrySetView_;
    id <JavaUtilCollection> valuesView_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)entryIterator;
- (id)valueIterator;
- (id)keyIterator;
- (id)descendingKeySet;
- (id)entrySet;
- (id)values;
- (id)navigableKeySet;
- (id)keySet;
- (id)pollLastEntry;
- (id)pollFirstEntry;
- (id)lastEntry;
- (id)firstEntry;
- (id)lastKey;
- (id)firstKey;
- (id)higherKeyWithId:(id)arg1;
- (id)higherEntryWithId:(id)arg1;
- (id)floorKeyWithId:(id)arg1;
- (id)floorEntryWithId:(id)arg1;
- (id)lowerKeyWithId:(id)arg1;
- (id)lowerEntryWithId:(id)arg1;
- (id)ceilingKeyWithId:(id)arg1;
- (id)ceilingEntryWithId:(id)arg1;
- (id)descendingMap;
- (id)tailMapWithId:(id)arg1;
- (id)headMapWithId:(id)arg1;
- (id)subMapWithId:(id)arg1 withId:(id)arg2;
- (id)tailMapWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)headMapWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)subMapWithId:(id)arg1 withBoolean:(BOOL)arg2 withId:(id)arg3 withBoolean:(BOOL)arg4;
- (id)newSubMapWithId:(id)arg1 withBoolean:(BOOL)arg2 withId:(id)arg3 withBoolean:(BOOL)arg4;
- (id)comparator;
- (id)replaceWithId:(id)arg1 withId:(id)arg2;
- (BOOL)replaceWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3;
- (BOOL)removeWithId:(id)arg1 withId:(id)arg2;
- (id)putIfAbsentWithId:(id)arg1 withId:(id)arg2;
- (void)clear;
- (BOOL)containsValueWithId:(id)arg1;
- (BOOL)isEmpty;
- (int)size;
- (id)removeWithId:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)getWithId:(id)arg1;
- (BOOL)containsKeyWithId:(id)arg1;
- (id)getNearKeyWithId:(id)arg1 withInt:(int)arg2;
- (id)getNearEntryWithId:(id)arg1 withInt:(int)arg2;
- (id)removeHighest;
- (id)removeLowest;
- (id)highestEntry;
- (id)lowestEntry;
- (id)highestKey;
- (id)lowestKey;
- (id)hiNode;
- (id)loNode;
- (BOOL)isBeforeEndWithJavaUtilConcurrentConcurrentSkipListMap_Node:(id)arg1;
- (void)checkKeyBoundsWithId:(id)arg1;
- (BOOL)inBoundsWithId:(id)arg1;
- (BOOL)tooHighWithId:(id)arg1;
- (BOOL)tooLowWithId:(id)arg1;
- (id)initWithJavaUtilConcurrentConcurrentSkipListMap:(id)arg1 withId:(id)arg2 withBoolean:(BOOL)arg3 withId:(id)arg4 withBoolean:(BOOL)arg5 withBoolean:(BOOL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

