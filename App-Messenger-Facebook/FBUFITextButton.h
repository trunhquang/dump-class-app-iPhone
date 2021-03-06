//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIColor, UILabel, UIView;

@interface FBUFITextButton : UIButton
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_combinedLabel;
    UIView *_highlightView;
    BOOL _singleLineDisplay;
    NSString *_primaryText;
    NSString *_secondaryText;
    UIColor *_colorForTextLabels;
}

@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(nonatomic) BOOL singleLineDisplay; // @synthesize singleLineDisplay=_singleLineDisplay;
@property(retain, nonatomic) UIColor *colorForTextLabels; // @synthesize colorForTextLabels=_colorForTextLabels;
@property(retain, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(retain, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)setTextAlignment:(int)arg1;
- (struct CGRect)rectForTextLabels;
- (void)_updateCombinedLabelText;
- (id)_newConfiguredLabel;
- (void)_layoutHighlightViewWithPrimaryLabel:(id)arg1 secondaryLabel:(id)arg2;
- (void)_layoutSubviewsOneLine;
- (void)_layoutSubviewsTwoLine;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFontForTextLabels:(id)arg1;
- (void)_updateHighlightViewVisibility;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithStyle:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

