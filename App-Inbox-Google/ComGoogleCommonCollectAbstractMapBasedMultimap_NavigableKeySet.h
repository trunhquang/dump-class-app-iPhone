//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet.h"

#import "JavaUtilNavigableSet.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap, NSString;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet : ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet <JavaUtilNavigableSet>
{
    ComGoogleCommonCollectAbstractMapBasedMultimap *this$2_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)__javaClone;
- (id)tailSetWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)tailSetWithId:(id)arg1;
- (id)subSetWithId:(id)arg1 withBoolean:(BOOL)arg2 withId:(id)arg3 withBoolean:(BOOL)arg4;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)headSetWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)headSetWithId:(id)arg1;
- (id)descendingIterator;
- (id)descendingSet;
- (id)pollLast;
- (id)pollFirst;
- (id)higherWithId:(id)arg1;
- (id)ceilingWithId:(id)arg1;
- (id)floorWithId:(id)arg1;
- (id)lowerWithId:(id)arg1;
- (id)sortedMap;
- (id)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(id)arg1 withJavaUtilNavigableMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

