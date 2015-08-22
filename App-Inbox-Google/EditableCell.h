//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIColor, UIFont, UITextField, UIView;

@interface EditableCell : UITableViewCell <UITextFieldDelegate>
{
    UIButton *clearInputButton_;
    UIButton *deleteButton_;
    BOOL isClearInputButtonInHiddenState_;
    UIView *separatorView_;
    UITextField *textField_;
    BOOL canShowClearInputButton_;
    BOOL showDeleteButton_;
    float textFieldHorizontalPadding;
    float textFieldWidth;
    float textFieldHeight;
    id <EditableCellDelegate> _delegate;
}

@property(nonatomic) __weak id <EditableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float textFieldHeight; // @synthesize textFieldHeight;
@property(nonatomic) float textFieldWidth; // @synthesize textFieldWidth;
@property(nonatomic) float textFieldHorizontalPadding; // @synthesize textFieldHorizontalPadding;
@property(nonatomic) BOOL showDeleteButton; // @synthesize showDeleteButton=showDeleteButton_;
@property(nonatomic) BOOL canShowClearInputButton; // @synthesize canShowClearInputButton=canShowClearInputButton_;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setClearInputButtonHidden:(BOOL)arg1;
- (void)deleteButtonTapped:(id)arg1;
- (void)clearInputButtonTapped:(id)arg1;
@property(nonatomic) int leftViewMode;
@property(retain, nonatomic) UIView *leftView;
@property(nonatomic) UIColor *textColor; // @dynamic textColor;
@property(nonatomic) UIFont *font; // @dynamic font;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(copy, nonatomic) NSString *textPrompt; // @dynamic textPrompt;
- (void)createCellSeparatorWithColor:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

