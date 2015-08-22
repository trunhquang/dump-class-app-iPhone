//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "JavaUtilCollection.h"
#import "NSObject.h"

@class IOSObjectArray;

@protocol JavaUtilSet <JavaUtilCollection, NSObject, JavaObject>
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)arg1;
- (IOSObjectArray *)toArray;
- (int)size;
- (BOOL)retainAllWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (BOOL)removeAllWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (BOOL)removeWithId:(id)arg1;
- (id <JavaUtilIterator>)iterator;
- (BOOL)isEmpty;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)containsAllWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (BOOL)containsWithId:(id)arg1;
- (void)clear;
- (BOOL)addAllWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (BOOL)addWithId:(id)arg1;
@end

