//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonIndexAbstractLogicalIndexIterator.h"

@class ComGoogleCumulusCommonIndexAndNotIterator_InternalIterator, IOSIntArray;

@interface ComGoogleCumulusCommonIndexAndNotIterator : ComGoogleCumulusCommonIndexAbstractLogicalIndexIterator
{
    IOSIntArray *targetDocId_;
    ComGoogleCumulusCommonIndexAndNotIterator_InternalIterator *baseIterator_;
    ComGoogleCumulusCommonIndexAndNotIterator_InternalIterator *notIterator_;
}

- (void)dealloc;
- (void)evaluateAsyncResult;
- (BOOL)advanceSyncInternal;
- (void)advanceAsyncInternal;
- (BOOL)advanceToInternal;
- (id)description;
- (id)initWithComGoogleCumulusCommonIndexIndexIterator:(id)arg1 withComGoogleCumulusCommonIndexIndexIterator:(id)arg2;

@end

