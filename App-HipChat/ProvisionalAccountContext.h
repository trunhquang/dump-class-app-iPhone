//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Account, AccountContext;

@interface ProvisionalAccountContext : NSObject
{
    Account *_account;
    AccountContext *_accountContext;
}

@property(readonly, nonatomic) AccountContext *accountContext; // @synthesize accountContext=_accountContext;
@property(readonly, nonatomic) Account *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)validate;
- (id)initWithAccount:(id)arg1 accountContext:(id)arg2;

@end

