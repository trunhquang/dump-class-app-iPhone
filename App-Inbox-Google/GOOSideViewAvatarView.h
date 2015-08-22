//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class CAShapeLayer, UIImage;

@interface GOOSideViewAvatarView : UIControl
{
    id <GOOSideViewProfile> _profile;
    UIImage *_avatarImage;
    struct CGSize _lastSize;
    CAShapeLayer *_maskLayer;
    CAShapeLayer *_strokeLayer;
}

@property(readonly, nonatomic) id <GOOSideViewProfile> profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)updateLayerContentsWithImage:(id)arg1 animated:(BOOL)arg2;
- (void)setAvatarImage:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIImage *avatarImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 profile:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

