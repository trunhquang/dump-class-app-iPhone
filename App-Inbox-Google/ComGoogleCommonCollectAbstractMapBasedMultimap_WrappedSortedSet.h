//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection.h"

#import "JavaUtilSortedSet.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap, NSString;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet : ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection <JavaUtilSortedSet>
{
    ComGoogleCommonCollectAbstractMapBasedMultimap *this$1_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilSortedSet_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection__params;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)__javaClone;
- (id)tailSetWithId:(id)arg1;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)headSetWithId:(id)arg1;
- (id)last;
- (id)first;
- (id)comparator;
- (id)getSortedSetDelegate;
- (id)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(id)arg1 withId:(id)arg2 withJavaUtilSortedSet:(id)arg3 withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

