//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBRichTextView, NSAttributedString;

@interface FBAttributedTextReusableView_DEPRECATED : UIView
{
    FBRichTextView *_attributedLabel;
    int _verticalTextAlignment;
    struct UIEdgeInsets _textPadding;
    BOOL _opaqueTextBackground;
    BOOL _selected;
    BOOL _highlighted;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) struct UIEdgeInsets textPadding; // @synthesize textPadding=_textPadding;
@property(nonatomic) int verticalTextAlignment; // @synthesize verticalTextAlignment=_verticalTextAlignment;
@property(readonly, nonatomic) FBRichTextView *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)_layoutTextLayer;
- (void)_configureHighlightedState;
- (void)_configureSelectedState;
@property(copy, nonatomic) NSAttributedString *text;
- (id)initWithFrame:(struct CGRect)arg1;

@end

