//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, UIColor, UIFont, UILabel;

@interface FUIAlertView : UIView
{
    BOOL _visible;
    BOOL _hasCancelButton;
    id <FUIAlertViewDelegate> _delegate;
    CDUnknownBlockType _onOkAction;
    CDUnknownBlockType _onCancelAction;
    CDUnknownBlockType _onDismissAction;
    int _dismissButtonIndex;
    NSString *_title;
    NSString *_message;
    int _cancelButtonIndex;
    int _maxHeight;
    int _alertViewStyle;
    NSMutableArray *_buttons;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIView *_backgroundOverlay;
    UIView *_alertContainer;
    float _buttonSpacing;
    float _animationDuration;
    UIFont *_defaultButtonFont;
    UIColor *_defaultButtonTitleColor;
    UIColor *_defaultButtonColor;
    UIColor *_defaultButtonShadowColor;
    float _defaultButtonCornerRadius;
    float _defaultButtonShadowHeight;
    UIView *_alertContentContainer;
    NSMutableArray *_textFields;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *textFields; // @synthesize textFields=_textFields;
@property(nonatomic) __weak UIView *alertContentContainer; // @synthesize alertContentContainer=_alertContentContainer;
@property(nonatomic) float defaultButtonShadowHeight; // @synthesize defaultButtonShadowHeight=_defaultButtonShadowHeight;
@property(nonatomic) float defaultButtonCornerRadius; // @synthesize defaultButtonCornerRadius=_defaultButtonCornerRadius;
@property(retain, nonatomic) UIColor *defaultButtonShadowColor; // @synthesize defaultButtonShadowColor=_defaultButtonShadowColor;
@property(retain, nonatomic) UIColor *defaultButtonColor; // @synthesize defaultButtonColor=_defaultButtonColor;
@property(retain, nonatomic) UIColor *defaultButtonTitleColor; // @synthesize defaultButtonTitleColor=_defaultButtonTitleColor;
@property(retain, nonatomic) UIFont *defaultButtonFont; // @synthesize defaultButtonFont=_defaultButtonFont;
@property(nonatomic) BOOL hasCancelButton; // @synthesize hasCancelButton=_hasCancelButton;
@property(nonatomic) float animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) float buttonSpacing; // @synthesize buttonSpacing=_buttonSpacing;
@property(readonly, nonatomic) __weak UIView *alertContainer; // @synthesize alertContainer=_alertContainer;
@property(readonly, nonatomic) __weak UIView *backgroundOverlay; // @synthesize backgroundOverlay=_backgroundOverlay;
@property(readonly, nonatomic) __weak UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) int alertViewStyle; // @synthesize alertViewStyle=_alertViewStyle;
@property(readonly, nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) int maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) int cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) int dismissButtonIndex; // @synthesize dismissButtonIndex=_dismissButtonIndex;
@property(copy, nonatomic) CDUnknownBlockType onDismissAction; // @synthesize onDismissAction=_onDismissAction;
@property(copy, nonatomic) CDUnknownBlockType onCancelAction; // @synthesize onCancelAction=_onCancelAction;
@property(copy, nonatomic) CDUnknownBlockType onOkAction; // @synthesize onOkAction=_onOkAction;
@property(nonatomic) id <FUIAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)textFieldAtIndex:(int)arg1;
- (void)clickButtonAtIndex:(int)arg1;
- (void)buttonPressed:(id)arg1;
- (int)addButtonWithTitle:(id)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (id)buttonTitleAtIndex:(int)arg1;
- (void)show;
@property(readonly, nonatomic) int numberOfButtons;
- (struct CGSize)calculateSize;
- (float)totalButtonHeight;
- (void)setButton:(id)arg1 atHeight:(float)arg2;
- (void)layoutSubviews;
- (void)keyboardWillShow;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

