//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "InviteRedeemViewControllerDelegate.h"
#import "SignInEntryScreenDelegate.h"

@class SignInEntryScreen;

@interface SignInEntryScreenController : UIViewController <SignInEntryScreenDelegate, InviteRedeemViewControllerDelegate>
{
    SignInEntryScreen *signInEntryScreen_;
    BOOL hasPerformedEntryAnimation_;
    BOOL hidden_;
}

@property(nonatomic) BOOL hidden; // @synthesize hidden=hidden_;
- (void).cxx_destruct;
- (void)inviteRedeemViewControllerShouldDismiss:(id)arg1;
- (void)signInEntryScreenDidTapSignInButton:(id)arg1;
- (void)performEntranceWhenActiveIfNeeded;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidAppear:(BOOL)arg1;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)dealloc;
- (void)loadView;

@end

