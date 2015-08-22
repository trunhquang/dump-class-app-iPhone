//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOMultiLineView.h"

#import "NIAttributedLabelDelegate.h"

@class NIAttributedLabel, NSArray, NSMutableArray, NSString, QTMColorGroup, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface GOODialogView : GOOMultiLineView <NIAttributedLabelDelegate>
{
    UIScrollView *_scrollView;
    NSMutableArray *_actions;
    BOOL _showActionImages;
    BOOL _shouldConsiderActionButtonsToCalculateSizeThatFits;
    BOOL _horizontalAlignmentForButtonsInLandscape;
    BOOL _fitDialogToContents;
    BOOL _shouldWrapButtonsLabels;
    BOOL _shouldDrawButtonDividers;
    BOOL _preferHorizontallyAlignedButtons;
    BOOL _useFullWidthButtons;
    BOOL _colorizeActionButtons;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_checkboxButton;
    NIAttributedLabel *_attributedTextLabel;
    CDUnknownBlockType _attributedTextLinkDidTapBlock;
    float _minimumActionButtonHeight;
    int _actionButtonsContentHorizontalAlignment;
    NSArray *_justifiedViews;
    UIView *_extraContentView;
    UIView *_headerBackgroundView;
    UIImageView *_titleBackgroundImageView;
    unsigned int _numberOfHorizontallyAlignedButtons;
    float _minimumWidth;
    QTMColorGroup *_actionButtonColorGroup;
    int _actionLayoutStyle;
}

+ (id)dividerWithDisposition:(int)arg1 backgroundColor:(id)arg2;
+ (void)applyDialogButtonStyle:(int)arg1 toButton:(id)arg2 shouldWrapButtonLabels:(BOOL)arg3 insets:(struct UIEdgeInsets)arg4 minimumHeight:(float)arg5 backgroundColor:(id)arg6 layoutStyle:(int)arg7;
+ (void)applyDefaultDialogButtonStyle:(int)arg1 toButton:(id)arg2 shouldWrapButtonLabels:(BOOL)arg3;
+ (void)applyDefaultDialogButtonStyle:(int)arg1 toButton:(id)arg2 shouldWrapButtonLabels:(BOOL)arg3 layoutStyle:(int)arg4;
+ (Class)layerClass;
+ (id)dialogBodyColor;
+ (id)dialogTitleColor;
+ (id)dialogButtonFont;
+ (id)dialogBodyFont;
+ (id)dialogTitleFont;
@property(nonatomic) int actionLayoutStyle; // @synthesize actionLayoutStyle=_actionLayoutStyle;
@property(retain, nonatomic) QTMColorGroup *actionButtonColorGroup; // @synthesize actionButtonColorGroup=_actionButtonColorGroup;
@property(nonatomic) BOOL colorizeActionButtons; // @synthesize colorizeActionButtons=_colorizeActionButtons;
@property(nonatomic) BOOL useFullWidthButtons; // @synthesize useFullWidthButtons=_useFullWidthButtons;
@property(nonatomic) BOOL preferHorizontallyAlignedButtons; // @synthesize preferHorizontallyAlignedButtons=_preferHorizontallyAlignedButtons;
@property(nonatomic) BOOL shouldDrawButtonDividers; // @synthesize shouldDrawButtonDividers=_shouldDrawButtonDividers;
@property(nonatomic) float minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic) BOOL shouldWrapButtonsLabels; // @synthesize shouldWrapButtonsLabels=_shouldWrapButtonsLabels;
@property(nonatomic) BOOL fitDialogToContents; // @synthesize fitDialogToContents=_fitDialogToContents;
@property(nonatomic) BOOL horizontalAlignmentForButtonsInLandscape; // @synthesize horizontalAlignmentForButtonsInLandscape=_horizontalAlignmentForButtonsInLandscape;
@property(nonatomic) unsigned int numberOfHorizontallyAlignedButtons; // @synthesize numberOfHorizontallyAlignedButtons=_numberOfHorizontallyAlignedButtons;
@property(readonly, nonatomic) UIImageView *titleBackgroundImageView; // @synthesize titleBackgroundImageView=_titleBackgroundImageView;
@property(readonly, nonatomic) UIView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
@property(readonly, nonatomic) UIView *extraContentView; // @synthesize extraContentView=_extraContentView;
@property(copy, nonatomic) NSArray *justifiedViews; // @synthesize justifiedViews=_justifiedViews;
@property(nonatomic) int actionButtonsContentHorizontalAlignment; // @synthesize actionButtonsContentHorizontalAlignment=_actionButtonsContentHorizontalAlignment;
@property(nonatomic) float minimumActionButtonHeight; // @synthesize minimumActionButtonHeight=_minimumActionButtonHeight;
@property(copy, nonatomic) CDUnknownBlockType attributedTextLinkDidTapBlock; // @synthesize attributedTextLinkDidTapBlock=_attributedTextLinkDidTapBlock;
@property(readonly, nonatomic) NIAttributedLabel *attributedTextLabel; // @synthesize attributedTextLabel=_attributedTextLabel;
@property(readonly, nonatomic) UIButton *checkboxButton; // @synthesize checkboxButton=_checkboxButton;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)accessibilityElementForVoiceOverPresentation;
- (void)didTapCheckbox:(id)arg1;
- (void)actionButtonDidTap:(id)arg1;
- (BOOL)attributedLabel:(id)arg1 shouldPresentActionSheet:(id)arg2 withTextCheckingResult:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (struct UIEdgeInsets)edgeInsets;
- (void)flashScrollIndicators;
- (void)applyLink:(id)arg1 toAttributedTextInRange:(struct _NSRange)arg2;
- (void)addButton:(id)arg1 style:(int)arg2 insets:(struct UIEdgeInsets)arg3 showHorizontalDivider:(BOOL)arg4 action:(CDUnknownBlockType)arg5;
- (void)addButton:(id)arg1 style:(int)arg2 action:(CDUnknownBlockType)arg3;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 style:(int)arg3 automationIdentifier:(id)arg4 accessibilityTraits:(unsigned long long)arg5 insets:(struct UIEdgeInsets)arg6 showHorizontalDivider:(BOOL)arg7 action:(CDUnknownBlockType)arg8;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 style:(int)arg3 automationIdentifier:(id)arg4 insets:(struct UIEdgeInsets)arg5 showHorizontalDivider:(BOOL)arg6 action:(CDUnknownBlockType)arg7;
- (void)addTitle:(id)arg1 style:(int)arg2 automationIdentifier:(id)arg3 action:(CDUnknownBlockType)arg4;
- (void)applyDialogButtonStyle:(int)arg1 toButton:(id)arg2 shouldWrapButtonLabels:(BOOL)arg3;
- (id)lines;
- (id)actionButtonLines:(BOOL)arg1;
- (void)addVerticalSpacingToLines:(id)arg1;
- (void)addLineWithInsetView:(id)arg1 toLines:(id)arg2;
- (void)addLineWithRightAlignedButtonInset:(id)arg1 toLines:(id)arg2;
- (void)addLineWithInsetStretchyView:(id)arg1 toLines:(id)arg2;
- (void)addLineWithStretchyView:(id)arg1 toLines:(id)arg2;
- (void)addLineWithCenteredView:(id)arg1 toLines:(id)arg2;
- (BOOL)shouldLayoutButtonsHorizontally;
- (float)dialogWidth;
- (struct CGSize)calculateSizeWithProposedSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateActionButtonSizes;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

