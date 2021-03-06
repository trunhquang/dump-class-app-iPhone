//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSMutableOrderedSet;

@interface FBMutableSortedSet : NSObject <NSFastEnumeration>
{
    CDUnknownBlockType _comparator;
    NSMutableOrderedSet *_orderedSet;
}

+ (id)sortedSetWithComparator:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSMutableOrderedSet *orderedSet; // @synthesize orderedSet=_orderedSet;
- (void).cxx_destruct;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)removeAllObjects;
- (id)popLastObject;
- (id)popFirstObject;
- (unsigned int)count;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (id)objectComparedSameTo:(id)arg1;
- (unsigned int)indexOfObjectComparedSameTo:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)addObject:(id)arg1;
- (id)initWithComparator:(CDUnknownBlockType)arg1;

@end

