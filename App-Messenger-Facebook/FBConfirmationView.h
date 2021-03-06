//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface FBConfirmationView : UIView
{
    UIImageView *_imageView;
    UILabel *_labelView;
    id <FBConfirmationViewDelegate> _delegate;
}

+ (id)checkImage;
@property(nonatomic) __weak id <FBConfirmationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIImage *image;
- (id)_springAnimation;
- (void)showInView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

