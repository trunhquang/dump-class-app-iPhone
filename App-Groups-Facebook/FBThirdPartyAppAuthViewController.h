//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBAuthenticationViewControlling.h"

@class FBThirdPartyAppAuthController, NSString, UIView<FBAuthenticatingView>;

@interface FBThirdPartyAppAuthViewController : UIViewController <FBAuthenticationViewControlling>
{
    id <FBAuthenticationViewConfiguration> _configuration;
    NSString *_accessToken;
    FBThirdPartyAppAuthController *_thirdPartyAppAuthController;
    CDUnknownBlockType _thirdPartyAppAuthSuccessBlock;
    CDUnknownBlockType _thirdPartyAppAuthFailureBlock;
}

@property(copy, nonatomic) CDUnknownBlockType thirdPartyAppAuthFailureBlock; // @synthesize thirdPartyAppAuthFailureBlock=_thirdPartyAppAuthFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType thirdPartyAppAuthSuccessBlock; // @synthesize thirdPartyAppAuthSuccessBlock=_thirdPartyAppAuthSuccessBlock;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)viewWillAppear:(BOOL)arg1;
@property(readonly, nonatomic) UIView<FBAuthenticatingView> *authenticationView;
- (BOOL)openURL:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAccessToken:(id)arg1 viewConfiguration:(id)arg2 requesterConfiguration:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

