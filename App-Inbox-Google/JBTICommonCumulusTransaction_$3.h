//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonSapiCallback.h"

@class JBTICommonCumulusTransaction, NSString;

@interface JBTICommonCumulusTransaction_$3 : NSObject <JBTICommonSapiCallback>
{
    JBTICommonCumulusTransaction *this$0_;
    id <JBTICommonSapiSpan> val$expansionSpan_;
    id <JBTICommonSapiCallback> val$onBatchCommitted_;
    id <JBTSpan> val$commitSpan_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTICommonCumulusTransaction:(id)arg1 withJBTICommonSapiSpan:(id)arg2 withJBTICommonSapiCallback:(id)arg3 withJBTSpan:(id)arg4;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1 withJBTSpan:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

