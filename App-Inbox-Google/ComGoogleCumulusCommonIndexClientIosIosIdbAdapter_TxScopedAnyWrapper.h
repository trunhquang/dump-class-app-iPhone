//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_AnyWrapper.h"

#import "ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_TxScopedAnyWrapper.h"

@class ComGoogleCumulusCommonIndexClientIosIosIdbAdapter, ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_IosTransaction, NSString;

@interface ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_TxScopedAnyWrapper : ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_AnyWrapper <ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_TxScopedAnyWrapper>
{
    ComGoogleCumulusCommonIndexClientIosIosIdbAdapter *this$0_;
    ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_IosTransaction *tx_;
}

- (void)dealloc;
- (id)cursorWithValue;
- (id)cursor;
- (id)transaction;
- (id)idbKey;
- (int)customValueSize;
- (id)customValue;
- (id)docIdValue;
- (double)doubleValue;
- (BOOL)booleanValue;
- (id)stringValue;
- (id)initWithComGoogleCumulusCommonIndexClientIosIosIdbAdapter:(id)arg1 withId:(id)arg2 withComGoogleCumulusCommonIndexClientIosIosIdbAdapter_IosTransaction:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

