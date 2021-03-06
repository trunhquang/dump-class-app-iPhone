//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PTKTextFieldDelegate.h"

@class NSString, PTKAddressZip, PTKCard, PTKCardCVC, PTKCardExpiry, PTKCardNumber, PTKTextField, UIImageView, UIResponder;

@interface PTKView : UIView <PTKTextFieldDelegate>
{
    BOOL _isInitialState;
    BOOL _isValidState;
    BOOL _disableValidation;
    BOOL _placeholderIsCVC;
    BOOL _placeholderIsAmexCVC;
    BOOL _hasEditedAllFields;
    UIView *_opaqueOverGradientView;
    PTKCardExpiry *_cardExpiry;
    PTKCardCVC *_cardCVC;
    PTKAddressZip *_addressZip;
    UIView *_innerView;
    UIView *_clipView;
    PTKTextField *_cardNumberField;
    PTKTextField *_cardExpiryField;
    PTKTextField *_cardCVCField;
    UIImageView *_placeholderView;
    id <PTKViewDelegate> _delegate;
    UIImageView *_backgroundImageView;
    UIView *_placeholderContainer;
    UIImageView *_cvcHighlightImageView;
}

+ (id)localizedStringWithKey:(id)arg1 defaultValue:(id)arg2;
@property(retain, nonatomic) UIImageView *cvcHighlightImageView; // @synthesize cvcHighlightImageView=_cvcHighlightImageView;
@property(retain, nonatomic) UIView *placeholderContainer; // @synthesize placeholderContainer=_placeholderContainer;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) BOOL hasEditedAllFields; // @synthesize hasEditedAllFields=_hasEditedAllFields;
@property(nonatomic) BOOL placeholderIsAmexCVC; // @synthesize placeholderIsAmexCVC=_placeholderIsAmexCVC;
@property(nonatomic) BOOL placeholderIsCVC; // @synthesize placeholderIsCVC=_placeholderIsCVC;
@property(nonatomic) BOOL disableValidation; // @synthesize disableValidation=_disableValidation;
@property(nonatomic) __weak id <PTKViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) UIImageView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain) PTKTextField *cardCVCField; // @synthesize cardCVCField=_cardCVCField;
@property(retain) PTKTextField *cardExpiryField; // @synthesize cardExpiryField=_cardExpiryField;
@property(retain) PTKTextField *cardNumberField; // @synthesize cardNumberField=_cardNumberField;
@property(retain) UIView *clipView; // @synthesize clipView=_clipView;
@property(retain) UIView *innerView; // @synthesize innerView=_innerView;
@property(retain, nonatomic) PTKAddressZip *addressZip; // @synthesize addressZip=_addressZip;
@property(retain, nonatomic) PTKCardCVC *cardCVC; // @synthesize cardCVC=_cardCVC;
@property(retain, nonatomic) PTKCardExpiry *cardExpiry; // @synthesize cardExpiry=_cardExpiry;
@property(retain, nonatomic) UIView *opaqueOverGradientView; // @synthesize opaqueOverGradientView=_opaqueOverGradientView;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFirstResponder;
@property(readonly, nonatomic) PTKTextField *nextFirstResponder;
@property(readonly, nonatomic) PTKTextField *firstInvalidField;
@property(readonly, nonatomic) UIResponder *firstResponderField;
- (void)highlightInvalidFields;
- (void)textFieldIsInvalid:(id)arg1 withErrors:(BOOL)arg2;
- (void)textFieldIsValid:(id)arg1;
- (void)checkValid;
- (BOOL)cardCVCShouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (BOOL)cardExpiryShouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (BOOL)cardNumberFieldShouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (void)pkTextFieldDidBackSpaceWhileTextIsEmpty:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setPlaceholderToCardType;
- (void)setPlaceholderToCVC;
- (void)setPlaceholderViewImage:(id)arg1;
- (void)removeCVCHighlight;
- (void)presentCVCHighlightIsAmex:(BOOL)arg1;
@property(readonly) PTKCard *card;
- (BOOL)isValid;
- (void)stateCardCVC;
- (void)stateMeta;
- (void)stateCardNumber;
@property(retain, nonatomic) PTKCardNumber *cardNumber;
- (void)setupCardCVCField;
- (void)setupCardExpiryField;
- (void)setupCardNumberField;
- (void)setupPlaceholderView;
- (void)setupPlaceholderViewContainer;
- (void)setupWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

