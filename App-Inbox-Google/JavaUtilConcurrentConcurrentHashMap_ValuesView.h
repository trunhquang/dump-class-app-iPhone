//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilConcurrentConcurrentHashMap_CollectionView.h"

#import "JavaIoSerializable.h"
#import "JavaUtilCollection.h"

@class NSString;

@interface JavaUtilConcurrentConcurrentHashMap_ValuesView : JavaUtilConcurrentConcurrentHashMap_CollectionView <JavaUtilCollection, JavaIoSerializable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (BOOL)addAllWithJavaUtilCollection:(id)arg1;
- (BOOL)addWithId:(id)arg1;
- (id)iterator;
- (BOOL)removeWithId:(id)arg1;
- (BOOL)containsWithId:(id)arg1;
- (id)initWithJavaUtilConcurrentConcurrentHashMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

