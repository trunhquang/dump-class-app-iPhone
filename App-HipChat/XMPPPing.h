//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

@class XMPPIDTracker;

@interface XMPPPing : XMPPModule
{
    BOOL respondsToQueries;
    XMPPIDTracker *pingTracker;
}

- (void).cxx_destruct;
- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;
- (BOOL)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)handlePong:(id)arg1 withInfo:(id)arg2;
- (id)sendPingToJID:(id)arg1 withTimeout:(double)arg2;
- (id)sendPingToJID:(id)arg1;
- (id)sendPingToServerWithTimeout:(double)arg1;
- (id)sendPingToServer;
- (id)generatePingIDWithTimeout:(double)arg1;
@property BOOL respondsToQueries;
- (void)deactivate;
- (BOOL)activate:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

