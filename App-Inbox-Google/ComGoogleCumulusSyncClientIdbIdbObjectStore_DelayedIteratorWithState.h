//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusSyncClientIdbIdbObjectStore_DelayedIterator.h"

#import "ComGoogleCumulusCommonIndexIndexIteratorWithState.h"

@class NSString;

@interface ComGoogleCumulusSyncClientIdbIdbObjectStore_DelayedIteratorWithState : ComGoogleCumulusSyncClientIdbIdbObjectStore_DelayedIterator <ComGoogleCumulusCommonIndexIndexIteratorWithState>
{
    id <ComGoogleCumulusCommonIndexIndexIteratorWithState> iteratorWithState_;
}

- (void)dealloc;
- (id)init;
- (id)getState;
- (id)createIterator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

