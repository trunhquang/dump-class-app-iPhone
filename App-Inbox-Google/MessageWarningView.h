//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface MessageWarningView : UIView
{
    UIButton *learnMoreButton_;
    UIView *separatorView_;
    UILabel *warningMessage_;
    id <MessageWarningViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MessageWarningViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)getWarningMessage:(id)arg1 withEmail:(id)arg2;
- (void)setupExplanatoryMessages;
- (void)learnMoreTapped:(id)arg1;
- (void)createSubviews;
- (void)updateViewWithMessage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

