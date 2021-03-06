//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class IGButton, IGTextField, NSString, UIButton;

@interface IGSearchBar : UIView <UITextFieldDelegate>
{
    IGButton *_cancelButton;
    UIButton *_clearButton;
    BOOL _showsCancelButton;
    IGTextField *_textField;
    id <IGSearchBarDelegate> _delegate;
}

@property(nonatomic) BOOL showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) __weak id <IGSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)showCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) int returnKeyType;
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(nonatomic) NSString *placeholder;
@property(nonatomic) NSString *text;
- (BOOL)resignFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

