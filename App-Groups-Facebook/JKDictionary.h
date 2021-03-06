//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSMutableCopying.h"

@interface JKDictionary : NSMutableDictionary <NSCopying, NSMutableCopying, NSFastEnumeration>
{
    unsigned int count;
    unsigned int capacity;
    unsigned int mutations;
    struct JKHashTableEntry *entry;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)keyEnumerator;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;
- (void)dealloc;

@end

