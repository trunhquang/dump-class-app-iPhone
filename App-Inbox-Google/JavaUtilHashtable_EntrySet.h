//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractSet.h"

@class JavaUtilHashtable;

@interface JavaUtilHashtable_EntrySet : JavaUtilAbstractSet
{
    JavaUtilHashtable *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)__javaClone;
- (id)initWithJavaUtilHashtable:(id)arg1;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)containsAllWithJavaUtilCollection:(id)arg1;
- (BOOL)retainAllWithJavaUtilCollection:(id)arg1;
- (BOOL)removeAllWithJavaUtilCollection:(id)arg1;
- (void)clear;
- (int)size;
- (BOOL)removeWithId:(id)arg1;
- (BOOL)containsWithId:(id)arg1;
- (id)iterator;

@end

