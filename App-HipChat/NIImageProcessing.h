//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NIImageProcessing : NSObject
{
}

+ (id)imageFromSource:(id)arg1 withContentMode:(int)arg2 cropRect:(struct CGRect)arg3 displaySize:(struct CGSize)arg4 scaleOptions:(int)arg5 interpolationQuality:(int)arg6;
+ (struct CGRect)destinationRectWithImageSize:(struct CGSize)arg1 displaySize:(struct CGSize)arg2 contentMode:(int)arg3;
+ (struct CGRect)sourceRectWithImageSize:(struct CGSize)arg1 displaySize:(struct CGSize)arg2 contentMode:(int)arg3;

@end

