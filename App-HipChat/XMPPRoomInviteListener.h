//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XMPPStreamDelegate.h"

@class AccountContext, EventPublisher;

@interface XMPPRoomInviteListener : NSObject <XMPPStreamDelegate>
{
    AccountContext *_accountContext;
    EventPublisher *_eventPublisher;
}

@property(nonatomic) __weak EventPublisher *eventPublisher; // @synthesize eventPublisher=_eventPublisher;
@property(nonatomic) __weak AccountContext *accountContext; // @synthesize accountContext=_accountContext;
- (void).cxx_destruct;
- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (id)initWithAccountContext:(id)arg1;

@end

