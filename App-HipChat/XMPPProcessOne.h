//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

@class DDXMLElement, NSDate, NSString, XMPPJID;

@interface XMPPProcessOne : XMPPModule
{
    DDXMLElement *pushConfiguration;
    BOOL pushConfigurationSent;
    BOOL pushConfigurationConfirmed;
    NSString *pushIQID;
}

+ (id)statusWithType:(id)arg1 message:(id)arg2;
+ (id)sessionWithDuration:(double)arg1;
+ (id)keepaliveWithMax:(double)arg1;
+ (id)pushConfigurationContainer;
- (void).cxx_destruct;
- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (id)goOffStandby;
- (id)goOnStandby;
- (void)sendPushConfiguration;
@property(retain) DDXMLElement *pushConfiguration;
@property(retain) NSDate *savedSessionDate;
@property(retain) XMPPJID *savedSessionJID;
@property(retain) NSString *savedSessionID;
- (id)initWithDispatchQueue:(id)arg1;

@end

