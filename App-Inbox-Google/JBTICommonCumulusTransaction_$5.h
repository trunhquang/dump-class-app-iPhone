//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonSapiCallback.h"

@class NSString;

@interface JBTICommonCumulusTransaction_$5 : NSObject <JBTICommonSapiCallback>
{
    id <JBTICommonSapiSpan> val$undoSpan_;
    id <JBTICommonSapiCallback> val$onUndoTransactionReady_;
    id <JBTICommonTransaction> val$undoTx_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTICommonSapiSpan:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTICommonTransaction:(id)arg3;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1 withJBTSpan:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

