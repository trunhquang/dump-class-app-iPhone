//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIView;

@interface BottomAlignedAspectFitImageView : UIImageView
{
    UIImageView *_imageView;
    UIView *_maskingView;
}

@property(retain, nonatomic) UIView *maskingView; // @synthesize maskingView=_maskingView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;

@end

