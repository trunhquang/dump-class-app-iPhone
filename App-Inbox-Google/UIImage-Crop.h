//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (Crop)
- (struct CGSize)sizeInScreenScale;
- (id)resizeToSize:(struct CGSize)arg1;
- (id)resizeToFitSize:(struct CGSize)arg1 supportRotation:(BOOL)arg2;
- (id)cropToCircleWithSize:(struct CGSize)arg1;
- (id)cropToSize:(struct CGSize)arg1;
- (struct CGRect)cropRectToFit:(struct CGRect)arg1;
- (struct CGRect)cropRectToSize:(struct CGSize)arg1;
- (id)cropToRect:(struct CGRect)arg1;
@end

