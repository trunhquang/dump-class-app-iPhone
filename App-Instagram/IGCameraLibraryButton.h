//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGSimpleButton, UIImageView;

@interface IGCameraLibraryButton : UIView
{
    int _assetType;
    UIImageView *_imageView;
    IGSimpleButton *_button;
}

@property(retain, nonatomic) IGSimpleButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) int assetType; // @synthesize assetType=_assetType;
- (void).cxx_destruct;
@property(nonatomic) BOOL enabled;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setImage:(id)arg1;
- (void)setImageToLastLibraryImage;
- (id)initWithAssetType:(int)arg1;
- (void)dealloc;

@end

