//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractQueue.h"

#import "JavaIoSerializable.h"
#import "JavaUtilConcurrentBlockingQueue.h"

@class IOSObjectArray, JavaUtilConcurrentLocksReentrantLock, JavaUtilPriorityQueue, NSString;

@interface JavaUtilConcurrentPriorityBlockingQueue : JavaUtilAbstractQueue <JavaUtilConcurrentBlockingQueue, JavaIoSerializable>
{
    IOSObjectArray *queue_;
    int size_;
    id <JavaUtilComparator> comparator_;
    JavaUtilConcurrentLocksReentrantLock *lock_;
    id <JavaUtilConcurrentLocksCondition> notEmpty_;
    // Error parsing type: Ai, name: allocationSpinLock_
    JavaUtilPriorityQueue *q_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (void)siftDownUsingComparatorWithInt:(int)arg1 withId:(id)arg2 withNSObjectArray:(id)arg3 withInt:(int)arg4 withJavaUtilComparator:(id)arg5;
+ (void)siftDownComparableWithInt:(int)arg1 withId:(id)arg2 withNSObjectArray:(id)arg3 withInt:(int)arg4;
+ (void)siftUpUsingComparatorWithInt:(int)arg1 withId:(id)arg2 withNSObjectArray:(id)arg3 withJavaUtilComparator:(id)arg4;
+ (void)siftUpComparableWithInt:(int)arg1 withId:(id)arg2 withNSObjectArray:(id)arg3;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (id)iterator;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (void)clear;
- (int)drainToWithJavaUtilCollection:(id)arg1 withInt:(int)arg2;
- (int)drainToWithJavaUtilCollection:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)toArray;
- (BOOL)containsWithId:(id)arg1;
- (void)removeEQWithId:(id)arg1;
- (BOOL)removeWithId:(id)arg1;
- (void)removeAtWithInt:(int)arg1;
- (int)indexOfWithId:(id)arg1;
- (int)remainingCapacity;
- (int)size;
- (id)comparator;
- (id)peek;
- (id)pollWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(id)arg2;
- (id)take;
- (id)poll;
- (BOOL)offerWithId:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(id)arg3;
- (void)putWithId:(id)arg1;
- (BOOL)offerWithId:(id)arg1;
- (BOOL)addWithId:(id)arg1;
- (void)heapify;
- (id)dequeue;
- (void)tryGrowWithNSObjectArray:(id)arg1 withInt:(int)arg2;
- (id)initWithJavaUtilCollection:(id)arg1;
- (id)initWithInt:(int)arg1 withJavaUtilComparator:(id)arg2;
- (id)initWithInt:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

