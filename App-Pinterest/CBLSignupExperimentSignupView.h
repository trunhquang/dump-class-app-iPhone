//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

#import "CBLSignupExperimentSignupStepViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class CBLSignupExperimentSignupStepView, CBLSignupModel, CBLTapTargetButton, NSDictionary<FBGraphUser>, NSString, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UIView;

@interface CBLSignupExperimentSignupView : CBLTraitCollectionView <UITextFieldDelegate, CBLSignupExperimentSignupStepViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _enabledForm;
    BOOL _showLoginForm;
    BOOL _isAnimating;
    id <CBLSignupExperimentSignupViewDelegate> _delegate;
    NSString *_facebookToken;
    NSDictionary<FBGraphUser> *_facebookUser;
    CBLSignupModel *_signupModel;
    NSString *_email;
    NSString *_password;
    UIImageView *_iconImageView;
    UILabel *_headerLabel;
    CBLTapTargetButton *_skipButton;
    CBLSignupExperimentSignupStepView *_emailView;
    CBLSignupExperimentSignupStepView *_passwordView;
    CBLSignupExperimentSignupStepView *_fullNameView;
    CBLSignupExperimentSignupStepView *_genderView;
    UIView *_progressBarView;
    UIView *_progressIndicatorView;
    UILabel *_errorLabel;
    UILabel *_currentStepLabel;
    UIButton *_nextButton;
    UIPanGestureRecognizer *_panGestureRecognizer;
    int _currentStep;
}

@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) int currentStep; // @synthesize currentStep=_currentStep;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) BOOL showLoginForm; // @synthesize showLoginForm=_showLoginForm;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UILabel *currentStepLabel; // @synthesize currentStepLabel=_currentStepLabel;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIView *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
@property(retain, nonatomic) UIView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) CBLSignupExperimentSignupStepView *genderView; // @synthesize genderView=_genderView;
@property(retain, nonatomic) CBLSignupExperimentSignupStepView *fullNameView; // @synthesize fullNameView=_fullNameView;
@property(retain, nonatomic) CBLSignupExperimentSignupStepView *passwordView; // @synthesize passwordView=_passwordView;
@property(retain, nonatomic) CBLSignupExperimentSignupStepView *emailView; // @synthesize emailView=_emailView;
@property(retain, nonatomic) CBLTapTargetButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) CBLSignupModel *signupModel; // @synthesize signupModel=_signupModel;
@property(retain, nonatomic) NSDictionary<FBGraphUser> *facebookUser; // @synthesize facebookUser=_facebookUser;
@property(copy, nonatomic) NSString *facebookToken; // @synthesize facebookToken=_facebookToken;
@property(nonatomic) BOOL enabledForm; // @synthesize enabledForm=_enabledForm;
@property(nonatomic) __weak id <CBLSignupExperimentSignupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (void)CBLSignupExperimentSignupStepViewDidTapForgotPassword:(id)arg1;
- (BOOL)validInputForStep:(int)arg1;
- (void)updateFirstResponderForStep:(int)arg1;
- (struct CGPoint)hiddenPositionForStep:(int)arg1 navigatingToStep:(int)arg2;
- (struct CGPoint)visiblePositionForStep:(int)arg1;
- (id)viewForStep:(int)arg1;
- (void)showStep:(int)arg1;
- (void)completePanTransitionFromStep:(int)arg1 toStep:(int)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)didPanView:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)updateNextButtonTextIfNeeded:(int)arg1;
- (void)hideNextButtonIfNeeded:(int)arg1;
- (void)updateCurrentStepLabelForStep:(int)arg1;
- (void)updateProgressIndicatorForStep:(int)arg1;
- (void)updateHeaderLabelIfNeededForStep:(int)arg1;
- (void)hideErrorMessageIfNecessary;
- (void)showErrorMessage:(id)arg1;
- (void)updateNextButtonForGenderSelector:(id)arg1;
- (void)updateNextButtonForTextField:(id)arg1;
- (BOOL)validateSignupForm;
- (void)fillFormWithFacebookUser:(id)arg1 andToken:(id)arg2;
- (void)verifyEmailToShowSignupOrLogin;
- (void)populateSignupModel;
- (void)didTapSkipButton:(id)arg1;
- (void)didTapNextButton:(id)arg1;
- (void)clearContent;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)goToPreviousStep;
- (BOOL)isShowingFirstStep;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

