//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIBezierPath, UIImage;

@interface CBLSpotlightImageView : UIView
{
    BOOL _useTransparentSpotlight;
    UIImage *_image;
    float _spotlightRadius;
    float _overlayOpacity;
    UIBezierPath *_spotlightPath;
    struct CGPoint _spotlightPoint;
}

@property(retain, nonatomic) UIBezierPath *spotlightPath; // @synthesize spotlightPath=_spotlightPath;
@property(nonatomic) BOOL useTransparentSpotlight; // @synthesize useTransparentSpotlight=_useTransparentSpotlight;
@property(nonatomic) float overlayOpacity; // @synthesize overlayOpacity=_overlayOpacity;
@property(nonatomic) float spotlightRadius; // @synthesize spotlightRadius=_spotlightRadius;
@property(nonatomic) struct CGPoint spotlightPoint; // @synthesize spotlightPoint=_spotlightPoint;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)setSpotlightPathWithRect:(struct CGRect)arg1 cornerRadius:(float)arg2;
- (void)drawRect:(struct CGRect)arg1;

@end

