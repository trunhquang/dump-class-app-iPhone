//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBFourRoundedCornerView, FBNetworkImageView, UIColor;

@interface FBAuthenticationRoundedImageView : UIView
{
    FBNetworkImageView *_imageView;
    float _cornerRadius;
    UIColor *_ambientColor;
    FBFourRoundedCornerView *_roundedCornerView;
}

+ (id)imageURLForAccountID:(id)arg1 withSize:(struct CGSize)arg2;
@property(retain, nonatomic) UIColor *ambientColor; // @synthesize ambientColor=_ambientColor;
- (void).cxx_destruct;
- (void)setImageURL:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 cornerRadius:(float)arg2 imageDownloader:(id)arg3 gatekeeper:(id)arg4;
- (id)init;

@end

