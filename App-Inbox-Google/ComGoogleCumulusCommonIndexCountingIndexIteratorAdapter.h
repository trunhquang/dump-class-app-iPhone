//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonIndexAbstractAsyncIndexIterator.h"

@interface ComGoogleCumulusCommonIndexCountingIndexIteratorAdapter : ComGoogleCumulusCommonIndexAbstractAsyncIndexIterator
{
    id <ComGoogleCumulusCommonIndexIndexIterator> indexIterator_;
    int maxCount_;
    int currentCount_;
}

- (void)dealloc;
- (void)advanceCounter;
- (id)restoreRecordedDocIdWithInt:(int)arg1 withInt:(int)arg2;
- (id)reverseRecordedDocIdWithInt:(int)arg1 withInt:(int)arg2;
- (id)getPositionsInternal;
- (void)advanceAsyncInternal;
- (BOOL)advanceToInternal;
- (id)initWithComGoogleCumulusCommonIndexIndexIterator:(id)arg1 withInt:(int)arg2;

@end

