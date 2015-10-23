//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RTAlertViewController, UIColor, UIFont;

@interface RTAlertView : NSObject
{
    RTAlertViewController *_alertViewController;
}

@property(retain, nonatomic) RTAlertViewController *alertViewController; // @synthesize alertViewController=_alertViewController;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *textField1PlaceholderText;
@property(retain, nonatomic) NSString *textField0PlaceholderText;
@property(retain, nonatomic) UIFont *textFieldPlaceholderFont;
@property(retain, nonatomic) UIFont *otherButtonFont;
@property(retain, nonatomic) UIColor *otherButtonColor;
@property(retain, nonatomic) UIFont *cancelButtonFont;
@property(retain, nonatomic) UIColor *cancelButtonColor;
@property(retain, nonatomic) UIFont *messageFont;
@property(retain, nonatomic) UIColor *messageColor;
@property(retain, nonatomic) UIFont *titleFont;
@property(retain, nonatomic) UIColor *titleColor;
@property(nonatomic) BOOL dismissesWhenAppGoesToBackground;
@property(nonatomic) int cancelButtonIndex;
@property(retain, nonatomic) NSString *message;
@property(retain, nonatomic) NSString *title;
@property(nonatomic) int alertViewStyle;
@property(nonatomic) __weak id <RTAlertViewDelegate> delegate;
@property(readonly, nonatomic) int firstOtherButtonIndex;
@property(readonly, nonatomic) int numberOfButtons;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (id)textFieldAtIndex:(int)arg1;
- (void)show;
- (id)buttonTitleAtIndex:(int)arg1;
- (int)addButtonWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

