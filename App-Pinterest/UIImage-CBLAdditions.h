//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (CBLAdditions)
+ (id)createImageMaskWithImage:(id)arg1;
+ (id)roundedImageWithSolidColor:(id)arg1 size:(struct CGSize)arg2 radius:(float)arg3;
+ (id)imageWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 roundingCorners:(unsigned int)arg3 radius:(float)arg4 size:(struct CGSize)arg5;
+ (id)imageWithSolidColor:(id)arg1 atSize:(struct CGSize)arg2;
- (id)imageCroppedToRect:(struct CGRect)arg1;
- (id)applyBlurWithRadius:(float)arg1 tintColor:(id)arg2 saturationDeltaFactor:(float)arg3 maskImage:(id)arg4;
- (BOOL)checkBlurParamsAndMaskImage:(id)arg1;
- (id)applyExtraLightBlurEffect;
- (id)applyLightBlurEffect;
- (id)applyDarkBlurEffect;
- (void)roundedImageWithCornerRadius:(float)arg1 cornerColor:(id)arg2 dispatchQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)roundedImageWithCornerRadius:(float)arg1 cornerColor:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)scaleToSize:(struct CGSize)arg1;
- (id)imageMaskWithColor:(id)arg1;
@end

