//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountContext;

@interface CallStatusPublisher : NSObject
{
    AccountContext *_accountContext;
}

@property(nonatomic) __weak AccountContext *accountContext; // @synthesize accountContext=_accountContext;
- (void).cxx_destruct;
- (void)publishMakeCall:(id)arg1 withOptions:(int)arg2;
- (void)publishJoinCall:(id)arg1 withOptions:(int)arg2;
- (void)publishCallHangup:(id)arg1;
- (void)publishDeclineIncomingCall:(id)arg1;
- (id)initWithAccountContext:(id)arg1;

@end

