//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionViewController.h"

#import "CBLNewSignupStepOneViewDelegate.h"
#import "CBLNewSignupStepTwoViewDelegate.h"
#import "CBLNewUserJourneyEmailSignupNavigationViewDelegate.h"
#import "CBLNewUserJourneyEmailSignupNewFacebookUserViewDelegate.h"
#import "CBLPresentedViewControllerDelegate.h"

@class CBLNewUserJourneyEmailSignupNavigationView, CBLNewUserJourneyEmailSignupNewFacebookUserView, CBLNewUserJourneyEmailSignupStepOneView, CBLNewUserJourneyEmailSignupStepTwoView, CBLSignupManager, CBLSignupModel, NSDictionary<FBGraphUser>, NSString;

@interface CBLNewUserJourneyEmailSignupViewController : CBLTraitCollectionViewController <CBLNewSignupStepOneViewDelegate, CBLNewSignupStepTwoViewDelegate, CBLNewUserJourneyEmailSignupNavigationViewDelegate, CBLNewUserJourneyEmailSignupNewFacebookUserViewDelegate, CBLPresentedViewControllerDelegate>
{
    id <CBLNewSignupViewControllerDelegate> _delegate;
    id <CBLPresentedViewControllerDelegate> _presentationDelegate;
    CBLSignupManager *_signupManager;
    CBLSignupModel *_signupModel;
    CBLNewUserJourneyEmailSignupNavigationView *_navigationView;
    CBLNewUserJourneyEmailSignupStepOneView *_stepOneView;
    CBLNewUserJourneyEmailSignupStepTwoView *_stepTwoView;
    CBLNewUserJourneyEmailSignupNewFacebookUserView *_facebookUserView;
    float _keyboardHeight;
    float _stepOneHorizontalOffset;
    float _stepTwoHorizontalOffset;
    NSDictionary<FBGraphUser> *_facebookUser;
    NSString *_facebookUserToken;
}

@property(copy, nonatomic) NSString *facebookUserToken; // @synthesize facebookUserToken=_facebookUserToken;
@property(retain, nonatomic) NSDictionary<FBGraphUser> *facebookUser; // @synthesize facebookUser=_facebookUser;
@property(nonatomic) float stepTwoHorizontalOffset; // @synthesize stepTwoHorizontalOffset=_stepTwoHorizontalOffset;
@property(nonatomic) float stepOneHorizontalOffset; // @synthesize stepOneHorizontalOffset=_stepOneHorizontalOffset;
@property(nonatomic) float keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) CBLNewUserJourneyEmailSignupNewFacebookUserView *facebookUserView; // @synthesize facebookUserView=_facebookUserView;
@property(retain, nonatomic) CBLNewUserJourneyEmailSignupStepTwoView *stepTwoView; // @synthesize stepTwoView=_stepTwoView;
@property(retain, nonatomic) CBLNewUserJourneyEmailSignupStepOneView *stepOneView; // @synthesize stepOneView=_stepOneView;
@property(retain, nonatomic) CBLNewUserJourneyEmailSignupNavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) CBLSignupModel *signupModel; // @synthesize signupModel=_signupModel;
@property(retain, nonatomic) CBLSignupManager *signupManager; // @synthesize signupManager=_signupManager;
@property(nonatomic) __weak id <CBLPresentedViewControllerDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(nonatomic) __weak id <CBLNewSignupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)localLayoutAttributes;
- (void)shouldPresentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentedViewControllerShouldBeDismissed:(id)arg1;
- (void)presentTermsOfServiceController;
- (void)presentPrivacyController;
- (void)CBLNewUserJourneyEmailSignupNewFacebookUserViewDidTapTerms:(id)arg1;
- (void)CBLNewUserJourneyEmailSignupNewFacebookUserViewDidTapPrivacy:(id)arg1;
- (void)CBLNewUserJourneyEmailSignupNewFacebookUserView:(id)arg1 requestFacebookPublishPermissionsWithCompletion:(CDUnknownBlockType)arg2;
- (void)CBLNewUserJourneyEmailSignupNewFacebookUserViewDidTapCreate:(id)arg1;
- (void)CBLNewSignupStepTwoViewDidTapNext:(id)arg1;
- (void)CBLNewSignupStepOneViewDidPrivacy:(id)arg1;
- (void)CBLNewSignupStepOneViewDidTermsOfService:(id)arg1;
- (void)CBLNewSignupStepOneViewDidTapNext:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)CBLNewUserJourneyEmailSignupNavigationViewDidTapBack:(id)arg1;
- (void)CBLNewUserJourneyEmailSignupNavigationViewDidTapClose:(id)arg1;
- (void)updateViewConstraints;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)prefersStatusBarHidden;
- (id)initWithFacebookUser:(id)arg1 andToken:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
