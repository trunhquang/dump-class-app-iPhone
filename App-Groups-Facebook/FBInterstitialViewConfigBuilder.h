//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBFIGConfigBuilder.h"

@class NSString, UIColor, UIFont, UIView;

@interface FBInterstitialViewConfigBuilder : NSObject <FBFIGConfigBuilder>
{
    BOOL _subtitleAdjustsFontSizeToFitWidth;
    BOOL _hasDismissButton;
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    unsigned int _titleMaxNumberOfLines;
    NSString *_subtitle;
    UIFont *_subtitleFont;
    UIColor *_subtitleColor;
    unsigned int _subtitleMaxNumberOfLines;
    UIView *_contentView;
    NSString *_primaryButtonTitle;
    unsigned int _primaryButtonStyle;
    unsigned int _primaryButtonSize;
    UIColor *_primaryButtonColor;
    UIColor *_primaryButtonBackgroundColor;
    NSString *_secondaryButtonTitle;
    unsigned int _secondaryButtonStyle;
    unsigned int _secondaryButtonSize;
    UIColor *_secondaryButtonColor;
    UIColor *_secondaryButtonBackgroundColor;
    UIColor *_backgroundColor;
    struct UIEdgeInsets _contentViewEdgeInsets;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)builderForInstance:(id)arg1;
+ (id)builderFromConfig:(id)arg1;
+ (id)builderIgnoringClassLevelOverrides;
+ (id)builder;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) BOOL hasDismissButton; // @synthesize hasDismissButton=_hasDismissButton;
@property(copy, nonatomic) UIColor *secondaryButtonBackgroundColor; // @synthesize secondaryButtonBackgroundColor=_secondaryButtonBackgroundColor;
@property(copy, nonatomic) UIColor *secondaryButtonColor; // @synthesize secondaryButtonColor=_secondaryButtonColor;
@property(nonatomic) unsigned int secondaryButtonSize; // @synthesize secondaryButtonSize=_secondaryButtonSize;
@property(nonatomic) unsigned int secondaryButtonStyle; // @synthesize secondaryButtonStyle=_secondaryButtonStyle;
@property(copy, nonatomic) NSString *secondaryButtonTitle; // @synthesize secondaryButtonTitle=_secondaryButtonTitle;
@property(copy, nonatomic) UIColor *primaryButtonBackgroundColor; // @synthesize primaryButtonBackgroundColor=_primaryButtonBackgroundColor;
@property(copy, nonatomic) UIColor *primaryButtonColor; // @synthesize primaryButtonColor=_primaryButtonColor;
@property(nonatomic) unsigned int primaryButtonSize; // @synthesize primaryButtonSize=_primaryButtonSize;
@property(nonatomic) unsigned int primaryButtonStyle; // @synthesize primaryButtonStyle=_primaryButtonStyle;
@property(copy, nonatomic) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property(nonatomic) struct UIEdgeInsets contentViewEdgeInsets; // @synthesize contentViewEdgeInsets=_contentViewEdgeInsets;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) BOOL subtitleAdjustsFontSizeToFitWidth; // @synthesize subtitleAdjustsFontSizeToFitWidth=_subtitleAdjustsFontSizeToFitWidth;
@property(nonatomic) unsigned int subtitleMaxNumberOfLines; // @synthesize subtitleMaxNumberOfLines=_subtitleMaxNumberOfLines;
@property(copy, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(copy, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) unsigned int titleMaxNumberOfLines; // @synthesize titleMaxNumberOfLines=_titleMaxNumberOfLines;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_init;
- (id)build;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

