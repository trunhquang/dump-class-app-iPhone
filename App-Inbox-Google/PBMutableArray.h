//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBArray.h"

@interface PBMutableArray : PBArray
{
    unsigned long _mutationCount;
    id <PBMutableArrayDelegate> _delegate;
}

+ (id)arrayWithValueType:(int)arg1 capacity:(unsigned int)arg2;
@property(nonatomic) id <PBMutableArrayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeAllValues;
- (void)appendValues:(const void *)arg1 valueType:(int)arg2 count:(unsigned int)arg3;
- (void)appendArray:(id)arg1;
- (void)setArray:(id)arg1;
- (void)replaceDoubleAtIndex:(unsigned int)arg1 withDouble:(double)arg2;
- (void)replaceFloatAtIndex:(unsigned int)arg1 withFloat:(float)arg2;
- (void)replaceUInt64AtIndex:(unsigned int)arg1 withUInt64:(unsigned long long)arg2;
- (void)replaceInt64AtIndex:(unsigned int)arg1 withInt64:(long long)arg2;
- (void)replaceUInt32AtIndex:(unsigned int)arg1 withUInt32:(unsigned int)arg2;
- (void)replaceInt32AtIndex:(unsigned int)arg1 withInt32:(int)arg2;
- (void)replaceBoolAtIndex:(unsigned int)arg1 withBool:(BOOL)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned int)arg2;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)addDouble:(double)arg1;
- (void)addFloat:(float)arg1;
- (void)addUInt64:(unsigned long long)arg1;
- (void)addInt64:(long long)arg1;
- (void)addUInt32:(unsigned int)arg1;
- (void)addInt32:(int)arg1;
- (void)addBool:(BOOL)arg1;
- (void)addObject:(id)arg1;
- (void)ensureAdditionalCapacity:(unsigned int)arg1;
- (void)enumerateInt32sUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValueType:(int)arg1 capacity:(unsigned int)arg2;
- (void)dealloc;

@end

