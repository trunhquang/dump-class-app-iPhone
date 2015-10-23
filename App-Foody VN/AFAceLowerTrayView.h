//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface AFAceLowerTrayView : UIView
{
    BOOL _showBranding;
    UIView *_brandingContainerView;
    UIColor *_strokeColor;
    UIColor *_textColor;
}

@property(nonatomic) BOOL showBranding; // @synthesize showBranding=_showBranding;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *brandingContainerView; // @synthesize brandingContainerView=_brandingContainerView;
- (id)initWithStrokeColor:(id)arg1 textColor:(id)arg2 branding:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

