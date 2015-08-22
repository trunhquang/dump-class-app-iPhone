//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractSet.h"

#import "JavaUtilNavigableSet.h"

@class JavaUtilTreeMap_BoundedMap, NSString;

@interface JavaUtilTreeMap_BoundedMap_BoundedKeySet : JavaUtilAbstractSet <JavaUtilNavigableSet>
{
    JavaUtilTreeMap_BoundedMap *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)__javaClone;
- (id)initWithJavaUtilTreeMap_BoundedMap:(id)arg1;
- (id)descendingSet;
- (id)tailSetWithId:(id)arg1;
- (id)tailSetWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)headSetWithId:(id)arg1;
- (id)headSetWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)subSetWithId:(id)arg1 withBoolean:(BOOL)arg2 withId:(id)arg3 withBoolean:(BOOL)arg4;
- (id)comparator;
- (id)higherWithId:(id)arg1;
- (id)ceilingWithId:(id)arg1;
- (id)floorWithId:(id)arg1;
- (id)lowerWithId:(id)arg1;
- (id)pollLast;
- (id)last;
- (id)pollFirst;
- (id)first;
- (BOOL)removeWithId:(id)arg1;
- (BOOL)containsWithId:(id)arg1;
- (id)descendingIterator;
- (id)iterator;
- (BOOL)isEmpty;
- (int)size;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

