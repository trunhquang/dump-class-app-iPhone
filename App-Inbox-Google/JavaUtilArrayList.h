//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractList.h"

#import "JavaIoSerializable.h"
#import "JavaUtilRandomAccess.h"
#import "NSCopying.h"

@class IOSObjectArray, NSString;

@interface JavaUtilArrayList : JavaUtilAbstractList <NSCopying, JavaIoSerializable, JavaUtilRandomAccess>
{
    int size_;
    IOSObjectArray *array_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)throwIndexOutOfBoundsExceptionWithInt:(int)arg1 withInt:(int)arg2;
+ (int)newCapacityWithInt:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)iterator;
- (void)trimToSize;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (id)setWithInt:(int)arg1 withId:(id)arg2;
- (void)removeRangeWithInt:(int)arg1 withInt:(int)arg2;
- (BOOL)removeWithId:(id)arg1;
- (id)removeWithInt:(int)arg1;
- (int)lastIndexOfWithId:(id)arg1;
- (int)indexOfWithId:(id)arg1;
- (BOOL)containsWithId:(id)arg1;
- (BOOL)isEmpty;
- (int)size;
- (id)getWithInt:(int)arg1;
- (void)ensureCapacityWithInt:(int)arg1;
- (id)clone;
- (void)clear;
- (BOOL)addAllWithInt:(int)arg1 withJavaUtilCollection:(id)arg2;
- (BOOL)addAllWithJavaUtilCollection:(id)arg1;
- (void)addWithInt:(int)arg1 withId:(id)arg2;
- (BOOL)addWithId:(id)arg1;
- (id)initWithJavaUtilCollection:(id)arg1;
- (id)init;
- (id)initWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

