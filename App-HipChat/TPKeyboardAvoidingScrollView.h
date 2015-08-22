//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSString;

@interface TPKeyboardAvoidingScrollView : UIScrollView <UITextFieldDelegate, UITextViewDelegate>
{
}

- (void)layoutSubviews;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)scrollToActiveTextField;
- (BOOL)focusNextTextField;
- (void)contentSizeToFit;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

