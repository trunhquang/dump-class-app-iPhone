//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientIdbIdbObjectOperation_Handler.h"

@class ComGoogleCumulusSyncClientIdbIdbObjectStore, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbObjectStore_$1 : NSObject <ComGoogleCumulusSyncClientIdbIdbObjectOperation_Handler>
{
    ComGoogleCumulusSyncClientIdbIdbObjectStore *this$0_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientIdbIdbObjectStore:(id)arg1;
- (void)decPendingWrites;
- (void)onCompleteWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)onReadIssued;
- (void)onWriteIssuedWithComGoogleCumulusCommonIndexIdbAdapter_Transaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

