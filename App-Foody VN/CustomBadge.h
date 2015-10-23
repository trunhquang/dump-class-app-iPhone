//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor;

@interface CustomBadge : UIView
{
    BOOL badgeFrame;
    BOOL badgeShining;
    NSString *badgeText;
    UIColor *badgeTextColor;
    UIColor *badgeInsetColor;
    UIColor *badgeFrameColor;
    float badgeCornerRoundness;
    float badgeScaleFactor;
}

+ (id)customBadgeWithString:(id)arg1 withStringColor:(id)arg2 withInsetColor:(id)arg3 withBadgeFrame:(BOOL)arg4 withBadgeFrameColor:(id)arg5 withScale:(float)arg6 withShining:(BOOL)arg7;
+ (id)customBadgeWithString:(id)arg1;
@property(nonatomic) BOOL badgeShining; // @synthesize badgeShining;
@property(nonatomic) float badgeScaleFactor; // @synthesize badgeScaleFactor;
@property(nonatomic) float badgeCornerRoundness; // @synthesize badgeCornerRoundness;
@property(nonatomic) BOOL badgeFrame; // @synthesize badgeFrame;
@property(retain, nonatomic) UIColor *badgeFrameColor; // @synthesize badgeFrameColor;
@property(retain, nonatomic) UIColor *badgeInsetColor; // @synthesize badgeInsetColor;
@property(retain, nonatomic) UIColor *badgeTextColor; // @synthesize badgeTextColor;
@property(copy, nonatomic) NSString *badgeText; // @synthesize badgeText;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawFrameWithContext:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)drawShineWithContext:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)drawRoundedRectWithContext:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)autoBadgeSizeWithString:(id)arg1;
- (id)initWithString:(id)arg1 withStringColor:(id)arg2 withInsetColor:(id)arg3 withBadgeFrame:(BOOL)arg4 withBadgeFrameColor:(id)arg5 withScale:(float)arg6 withShining:(BOOL)arg7;
- (id)initWithString:(id)arg1 withScale:(float)arg2 withShining:(BOOL)arg3;

@end

