//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AccountXMPPReconnectingState.h"

@interface AccountXMPPForceReconnectingState : AccountXMPPReconnectingState
{
    BOOL _assumeNetworkDown;
}

@property(nonatomic) BOOL assumeNetworkDown; // @synthesize assumeNetworkDown=_assumeNetworkDown;
- (BOOL)isConnecting;
- (void)signIn;
- (void)reconnectionFailed;
- (void)transitionIn;
- (id)initWithAccountXMPPController:(id)arg1;

@end

