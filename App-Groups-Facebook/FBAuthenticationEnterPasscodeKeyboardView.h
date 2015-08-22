//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIButton;

@interface FBAuthenticationEnterPasscodeKeyboardView : UIView
{
    struct FBAuthenticationEnterPasscodeKeyboardMetrics _metrics;
    NSArray *_numberButtons;
    NSArray *_numberUnderline;
    UIButton *_cancelButton;
    UIButton *_deleteButton;
    id <FBAuthenticationEnterPasscodeKeyboardViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAuthenticationEnterPasscodeKeyboardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_makeDeleteButton;
- (id)_makeButton;
- (void)_deleteButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_buttonTouchUp:(id)arg1;
- (void)_buttonTouchDown:(id)arg1;
- (void)setIsDeleteButtonEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

