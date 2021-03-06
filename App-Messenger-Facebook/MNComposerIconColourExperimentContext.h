//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@class UIColor;

@interface MNComposerIconColourExperimentContext : FBExperimentContext
{
    BOOL _showColoredIcons;
    BOOL _useFill;
    UIColor *_textColor;
    UIColor *_cameraColor;
    UIColor *_mediaTrayColor;
    UIColor *_stickerColor;
    UIColor *_audioColor;
    UIColor *_paymentColor;
    UIColor *_moreColor;
    UIColor *_locationColor;
    UIColor *_gifColor;
    UIColor *_linkColor;
    UIColor *_hashtagColor;
    UIColor *_recentColor;
    UIColor *_fillColor;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)experimentName;
+ (id)parameterConfigurations;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(readonly, nonatomic) BOOL useFill; // @synthesize useFill=_useFill;
@property(retain, nonatomic) UIColor *recentColor; // @synthesize recentColor=_recentColor;
@property(retain, nonatomic) UIColor *hashtagColor; // @synthesize hashtagColor=_hashtagColor;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) UIColor *gifColor; // @synthesize gifColor=_gifColor;
@property(retain, nonatomic) UIColor *locationColor; // @synthesize locationColor=_locationColor;
@property(retain, nonatomic) UIColor *moreColor; // @synthesize moreColor=_moreColor;
@property(retain, nonatomic) UIColor *paymentColor; // @synthesize paymentColor=_paymentColor;
@property(retain, nonatomic) UIColor *audioColor; // @synthesize audioColor=_audioColor;
@property(retain, nonatomic) UIColor *stickerColor; // @synthesize stickerColor=_stickerColor;
@property(retain, nonatomic) UIColor *mediaTrayColor; // @synthesize mediaTrayColor=_mediaTrayColor;
@property(retain, nonatomic) UIColor *cameraColor; // @synthesize cameraColor=_cameraColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) BOOL showColoredIcons; // @synthesize showColoredIcons=_showColoredIcons;
- (void).cxx_destruct;

@end

