//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBItemView_DEPRECATED, NSMutableParagraphStyle, NSString, UIButton;

@interface FBComposerStickyGuardrailEducationView : UIView
{
    FBItemView_DEPRECATED *_educationView;
    UIButton *_cancelButton;
    UIButton *_performActionButton;
    NSMutableParagraphStyle *_paragraphStyle;
    float _buttonWidthInsetTotal;
    id <FBComposerStickyGuardrailEducationViewDelegate> _delegate;
    NSString *_titleText;
    NSString *_introductionText;
    NSString *_cancelButtonText;
    NSString *_acceptButtonText;
}

@property(copy, nonatomic) NSString *acceptButtonText; // @synthesize acceptButtonText=_acceptButtonText;
@property(copy, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property(copy, nonatomic) NSString *introductionText; // @synthesize introductionText=_introductionText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) __weak id <FBComposerStickyGuardrailEducationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)_getActionButtonSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_userDidTapPrivacyChangeButton;
- (void)_userDidTapCloseButton;
- (void)_userDidTapCancelButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

