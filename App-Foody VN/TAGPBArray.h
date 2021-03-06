//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSMutableCopying.h"

@interface TAGPBArray : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration>
{
    int _valueType;
    unsigned int _capacity;
    unsigned int _count;
    char *_data;
}

+ (id)arrayWithInt32s:(int)arg1;
+ (id)arrayWithInt32:(int)arg1;
+ (id)arrayWithObjects:(id)arg1;
+ (id)arrayWithObject:(id)arg1;
+ (id)arrayWithArray:(id)arg1 valueType:(int)arg2;
+ (id)arrayWithValues:(const void *)arg1 count:(unsigned int)arg2 valueType:(int)arg3;
+ (id)arrayWithValueType:(int)arg1;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
@property(readonly, nonatomic) int valueType; // @synthesize valueType=_valueType;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)initWithInt32:(int)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithArray:(id)arg1 valueType:(int)arg2;
- (id)initWithValues:(const void *)arg1 count:(unsigned int)arg2 valueType:(int)arg3;
- (id)initWithValueType:(int)arg1;
- (id)arrayByAppendingArray:(id)arg1;
- (id)arrayWithConversion:(CDUnknownBlockType)arg1;
- (id)array;
- (double)doubleAtIndex:(unsigned int)arg1;
- (float)floatAtIndex:(unsigned int)arg1;
- (unsigned long long)uint64AtIndex:(unsigned int)arg1;
- (long long)int64AtIndex:(unsigned int)arg1;
- (unsigned int)uint32AtIndex:(unsigned int)arg1;
- (int)int32AtIndex:(unsigned int)arg1;
- (BOOL)boolAtIndex:(unsigned int)arg1;
- (id)lastObject;
- (id)firstObject;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)enumerateInt32sUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
@property(readonly, nonatomic) const void *data;
- (unsigned int)hash;
- (id)initWithCount:(unsigned int)arg1 valueType:(int)arg2;
- (CDUnion_67553414)valueAtIndex:(unsigned int)arg1;

@end

