//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOHUDMessageView.h"

@class NSArray, UIControl, UIImageView, UILabel, UIView;

@interface GOOHUDMessageViewDefault : GOOHUDMessageView
{
    BOOL _usesVerticalButtonLayout;
    UIImageView *_imageView;
    NSArray *_buttons;
    UILabel *_label;
    NSArray *_viewConstraints;
    UIControl *_containerView;
    UIView *_buttonView;
    UIView *_contentView;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) BOOL usesVerticalButtonLayout; // @synthesize usesVerticalButtonLayout=_usesVerticalButtonLayout;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIControl *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *viewConstraints; // @synthesize viewConstraints=_viewConstraints;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (void)handleButtonTapped:(id)arg1;
- (void)handleBackgroundTapped:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)horizontalButtonLayoutConstraints;
- (id)verticalButtonLayoutConstraints;
- (id)contentViewConstraints;
- (id)containerViewConstraints;
- (void)updateConstraints;
- (BOOL)shouldWaitForDismissalDuringVoiceover;
- (id)initWithMessage:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;
- (float)maximumWidth;

@end

