//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface AFHighlightingButton : UIButton
{
    UIColor *_highlightedBackgroundColor;
    UIColor *_originalBackgroundColor;
}

@property(retain, nonatomic) UIColor *originalBackgroundColor; // @synthesize originalBackgroundColor=_originalBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
- (void).cxx_destruct;
- (BOOL)shouldHighlight;
- (void)setBackgroundColor:(id)arg1;
- (void)adjustBackgroundColor;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

