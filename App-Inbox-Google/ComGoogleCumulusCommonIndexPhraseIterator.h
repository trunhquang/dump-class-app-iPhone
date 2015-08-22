//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonIndexAbstractLogicalIndexIterator.h"

@class IOSIntArray;

@interface ComGoogleCumulusCommonIndexPhraseIterator : ComGoogleCumulusCommonIndexAbstractLogicalIndexIterator
{
    id <JavaUtilList> internalIterators_;
    int advancingIndex_;
    IOSIntArray *targetDocId_;
    id <JavaUtilList> targetPositions_;
}

- (void)dealloc;
- (void)advancePhraseIteratorsWithBoolean:(BOOL)arg1;
- (void)updateTargetPositions;
- (BOOL)iterationComplete;
- (void)resetAdvancingState;
- (void)setTargetDocIdWithIntArray:(id)arg1;
- (void)advanceAsyncInternal;
- (BOOL)advanceToInternal;
- (id)description;
- (id)initWithJavaUtilList:(id)arg1;

@end

