//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_BaseRequest.h"

#import "ComGoogleCumulusCommonIndexIdbAdapter_OpenDBRequest.h"

@class ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter, NSString;

@interface ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_OpenDBRequest : ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_BaseRequest <ComGoogleCumulusCommonIndexIdbAdapter_OpenDBRequest>
{
    ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter *this$1_;
    id <ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_OpenDBRequestObjectWrapper> openDBRequest_;
    id <ComGoogleCumulusCommonIndexIdbAdapter_Listener> onBlockedListener_;
    id <ComGoogleCumulusCommonIndexIdbAdapter_Listener> onUpgradeNeededListener_;
}

- (void)dealloc;
- (void)close;
- (id)getListenerWithComGoogleCumulusCommonIndexIdbAdapter_EventTypeEnum:(id)arg1;
- (BOOL)shouldReleaseListenerWithComGoogleCumulusCommonIndexIdbAdapter_EventTypeEnum:(id)arg1;
- (id)createAnyWithComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_NativeObjectWrapper:(id)arg1;
- (void)setOnupgradeNeededWithComGoogleCumulusCommonIndexIdbAdapter_Listener:(id)arg1;
- (void)setOnblockedWithComGoogleCumulusCommonIndexIdbAdapter_Listener:(id)arg1;
- (id)initWithComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter:(id)arg1 withComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_OpenDBRequestObjectWrapper:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

