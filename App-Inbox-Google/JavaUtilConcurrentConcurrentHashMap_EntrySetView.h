//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilConcurrentConcurrentHashMap_CollectionView.h"

#import "JavaIoSerializable.h"
#import "JavaUtilSet.h"

@class NSString;

@interface JavaUtilConcurrentConcurrentHashMap_EntrySetView : JavaUtilConcurrentConcurrentHashMap_CollectionView <JavaUtilSet, JavaIoSerializable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (BOOL)addAllWithJavaUtilCollection:(id)arg1;
- (BOOL)addWithId:(id)arg1;
- (id)iterator;
- (BOOL)removeWithId:(id)arg1;
- (BOOL)containsWithId:(id)arg1;
- (id)initWithJavaUtilConcurrentConcurrentHashMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

