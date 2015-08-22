//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountXMPPController, MSWeakTimer;

@interface AccountXMPPState : NSObject
{
    AccountXMPPController *_accountXMPPController;
    MSWeakTimer *_timeoutTimer;
}

@property(retain, nonatomic) MSWeakTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(readonly, nonatomic) AccountXMPPController *accountXMPPController; // @synthesize accountXMPPController=_accountXMPPController;
- (void).cxx_destruct;
- (id)loggingIdentifier;
- (id)timer:(double)arg1 selector:(SEL)arg2;
- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)xmppStreamDidFinishNegotiation:(id)arg1;
- (void)xmppStream:(id)arg1 didNotAuthenticate:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)xmppStreamDidConnect:(id)arg1;
- (void)systemAwake;
- (void)systemSleep;
- (void)networkUp;
- (void)networkDown;
- (void)signOut;
- (void)signIn;
- (BOOL)isOnline;
- (BOOL)isConnecting;
- (BOOL)isActive;
- (BOOL)isOffline;
- (void)timeoutIn:(double)arg1;
- (void)timeout;
- (void)transitionOut;
- (void)transitionIn;
- (id)initWithAccountXMPPController:(id)arg1;
- (void)publishDidRenegotiate;
- (void)publishWillRenegotiate;
- (void)publishDidReauthenticate;
- (void)publishWillReauthenticate;
- (void)publishDidReconnect;
- (void)publishWillReconnect;
- (void)publishReconnectWaiting:(double)arg1;
- (void)publishDisconnectedOffline:(BOOL)arg1 sleep:(BOOL)arg2;
- (void)publishWentOnlineReconnect:(BOOL)arg1;
- (void)publishDidNegotiate;
- (void)publishWillNegotiate;
- (void)publishDidAuthenticate;
- (void)publishWillAuthenticate;
- (void)publishDidConnect;
- (void)publishWillConnect;
- (void)publishWentOffline;
- (id)account;
- (void)publish:(id)arg1;
- (id)renegotiatingState;
- (id)reauthenticatingState;
- (id)reconnectingState;
- (id)forceReconnectingState;
- (id)reconnectWaitingState;
- (id)disconnectedState;
- (id)onlineState;
- (id)negotiatingState;
- (id)authenticatingState;
- (id)connectingState;
- (id)offlineState;
- (void)transitionToRenegotiatingWithResponse:(id)arg1;
- (void)transitionToReauthenticating;
- (void)transitionToReconnecting;
- (void)transitionToForceReconnecting;
- (void)transitionToReconnectWaiting;
- (void)transitionToDisconnected;
- (void)transitionToDisconnectedOffline:(BOOL)arg1 sleep:(BOOL)arg2;
- (void)transitionToOnlineReconnect:(BOOL)arg1;
- (void)transitionToNegotiatingWithResponse:(id)arg1;
- (void)transitionToAuthenticating;
- (void)transitionToConnecting;
- (void)transitionToOffline;

@end

