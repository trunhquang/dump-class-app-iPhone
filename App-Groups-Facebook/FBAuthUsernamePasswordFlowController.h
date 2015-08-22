//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAuthControlling.h"
#import "FBAuthUsernamePasswordAuthenticating.h"
#import "FBAuthenticationMethodHandlerDelegate.h"

@class FBAuthenticationUsernamePasswordHandler, FBLoginErrorStateManager, FBRequesterConfiguration, NSString;

@interface FBAuthUsernamePasswordFlowController : NSObject <FBAuthenticationMethodHandlerDelegate, FBAuthUsernamePasswordAuthenticating, FBAuthControlling>
{
    NSString *_mostRecentIdentifier;
    id <FBAuthControllingDelegate> _authDelegate;
    id <FBAuthUsernamePasswordFlowUIProviding> _uiProvider;
    id <FBAuthUIPresenting> _uiPresenter;
    FBRequesterConfiguration *_requesterConfiguration;
    FBAuthenticationUsernamePasswordHandler *_authHandler;
    FBLoginErrorStateManager *_errorStateManager;
}

@property(readonly, nonatomic) FBLoginErrorStateManager *errorStateManager; // @synthesize errorStateManager=_errorStateManager;
@property(retain, nonatomic) FBAuthenticationUsernamePasswordHandler *authHandler; // @synthesize authHandler=_authHandler;
@property(readonly, nonatomic) FBRequesterConfiguration *requesterConfiguration; // @synthesize requesterConfiguration=_requesterConfiguration;
@property(readonly, nonatomic) id <FBAuthUIPresenting> uiPresenter; // @synthesize uiPresenter=_uiPresenter;
@property(readonly, nonatomic) id <FBAuthUsernamePasswordFlowUIProviding> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(nonatomic) __weak id <FBAuthControllingDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2;
- (void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2;
- (void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2;
- (void)userRegistrationFromViewController:(id)arg1 withIdentifier:(id)arg2;
- (void)cancelLoginRequestFromViewController:(id)arg1;
- (void)submitUsernamePasswordViewController:(id)arg1 username:(id)arg2 password:(id)arg3;
- (void)authenticate;
- (id)initWithUIProvider:(id)arg1 uiPresenter:(id)arg2 requesterConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

