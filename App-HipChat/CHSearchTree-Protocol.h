//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHSortedSet.h"

@class NSArray, NSEnumerator;

@protocol CHSearchTree <CHSortedSet>
- (NSEnumerator *)objectEnumeratorWithTraversalOrder:(int)arg1;
- (BOOL)isEqualToSearchTree:(id <CHSearchTree>)arg1;
- (NSArray *)allObjectsWithTraversalOrder:(int)arg1;
- (id)initWithArray:(NSArray *)arg1;
- (id)init;
@end

