//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class FBBurstAnimationImageView, FBGradientView, FBUserSession, NSArray, UILabel;

@interface FBMagicStoryPreviewCell : UICollectionViewCell
{
    NSArray *_specifiers;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    FBGradientView *_gradientView;
    FBUserSession *_session;
    FBBurstAnimationImageView *_burstImageView;
    id <FBMagicStoryPreviewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMagicStoryPreviewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleAction:(id)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setSpecifiers:(id)arg1 withSession:(id)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

