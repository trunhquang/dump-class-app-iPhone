//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableDictionary;

@interface RCTSparseArray : NSObject <NSCopying>
{
    NSMutableDictionary *_storage;
}

+ (id)sparseArrayWithSparseArray:(id)arg1;
+ (id)sparseArrayWithCapacity:(unsigned int)arg1;
+ (id)sparseArray;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllObjects;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *allObjects;
@property(readonly, copy, nonatomic) NSArray *allIndexes;
@property(readonly, nonatomic) unsigned int count;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned int)arg2;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)initWithSparseArray:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)init;

@end

