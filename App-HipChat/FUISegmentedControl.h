//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISegmentedControl.h"

@class UIColor, UIFont;

@interface FUISegmentedControl : UISegmentedControl
{
    UIColor *_selectedColor;
    UIColor *_disabledColor;
    UIColor *_deselectedColor;
    UIColor *_dividerColor;
    float _cornerRadius;
    UIFont *_selectedFont;
    UIFont *_disabledFont;
    UIFont *_deselectedFont;
    UIColor *_selectedFontColor;
    UIColor *_deselectedFontColor;
    UIColor *_disabledFontColor;
    UIColor *_borderColor;
    float _borderWidth;
}

+ (void)initialize;
@property(nonatomic) float borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *disabledFontColor; // @synthesize disabledFontColor=_disabledFontColor;
@property(retain, nonatomic) UIColor *deselectedFontColor; // @synthesize deselectedFontColor=_deselectedFontColor;
@property(retain, nonatomic) UIColor *selectedFontColor; // @synthesize selectedFontColor=_selectedFontColor;
@property(retain, nonatomic) UIFont *deselectedFont; // @synthesize deselectedFont=_deselectedFont;
@property(retain, nonatomic) UIFont *disabledFont; // @synthesize disabledFont=_disabledFont;
@property(retain, nonatomic) UIFont *selectedFont; // @synthesize selectedFont=_selectedFont;
@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property(retain, nonatomic) UIColor *deselectedColor; // @synthesize deselectedColor=_deselectedColor;
@property(retain, nonatomic) UIColor *disabledColor; // @synthesize disabledColor=_disabledColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
- (void).cxx_destruct;
- (void)configureFlatSegmentedControl;
- (void)setupFonts;

@end

