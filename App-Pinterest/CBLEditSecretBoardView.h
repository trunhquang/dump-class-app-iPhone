//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface CBLEditSecretBoardView : UIView
{
    id <CBLEditSecretBoardViewDelegate> _delegate;
    UIImageView *_lockImage;
    UIButton *_changePrivacyButton;
    UILabel *_secretText;
    UILabel *_learnMoreLink;
}

@property(retain, nonatomic) UILabel *learnMoreLink; // @synthesize learnMoreLink=_learnMoreLink;
@property(retain, nonatomic) UILabel *secretText; // @synthesize secretText=_secretText;
@property(retain, nonatomic) UIButton *changePrivacyButton; // @synthesize changePrivacyButton=_changePrivacyButton;
@property(retain, nonatomic) UIImageView *lockImage; // @synthesize lockImage=_lockImage;
@property(nonatomic) __weak id <CBLEditSecretBoardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)learnMoreAction:(id)arg1;
- (void)makeBoardVisibleBtnPressed:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

