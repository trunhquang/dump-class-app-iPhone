//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface FVMWTapDetectingImageView : UIImageView
{
    id <FVMWTapDetectingImageViewDelegate> _tapDelegate;
}

@property(nonatomic) __weak id <FVMWTapDetectingImageViewDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void).cxx_destruct;
- (void)handleTripleTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
