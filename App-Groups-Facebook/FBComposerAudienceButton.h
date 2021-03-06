//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class FBFourRoundedCornerView, FBNetworkImageView, UIActivityIndicatorView, UIImageView;

@interface FBComposerAudienceButton : UIButton
{
    FBNetworkImageView *_profilePicView;
    FBFourRoundedCornerView *_roundedCornerView;
    UIImageView *_arrowView;
    UIImageView *_border;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _isLoading;
}

@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)showArrow;
- (void)hideArrow;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateProfilePictureURL:(id)arg1 withDefaultImage:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

