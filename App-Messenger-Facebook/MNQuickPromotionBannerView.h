//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface MNQuickPromotionBannerView : UIView
{
    UIImageView *_bannerImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_dismissButton;
    UIButton *_leftActionButton;
    UIButton *_rightActionButton;
    BOOL _roundedCorners;
    unsigned int _entryPoint;
    unsigned int _colorScheme;
    BOOL _isBannerTappable;
    BOOL _highlighted;
    BOOL _hidesDismissButton;
    BOOL _isTitleOnly;
    UIImageView *_bottomArrowImageView;
    float _bottomArrowOriginX;
    BOOL _showsBottomArrow;
    id <MNQuickPromotionBannerViewDelegate> _delegate;
    float _bottomArrowCenterXCoordinate;
}

@property(nonatomic) float bottomArrowCenterXCoordinate; // @synthesize bottomArrowCenterXCoordinate=_bottomArrowCenterXCoordinate;
@property(nonatomic) BOOL showsBottomArrow; // @synthesize showsBottomArrow=_showsBottomArrow;
@property(nonatomic) __weak id <MNQuickPromotionBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_verticallyAlignTitleWithImageView;
- (void)_rightActionButtonTapped:(id)arg1;
- (void)_leftActionButtonTapped:(id)arg1;
- (void)_dismissButtonTapped:(id)arg1;
- (void)_bannerTapped;
- (void)_layoutBottomArrowView;
- (void)_layoutleftActionButtonAndrightActionButton;
- (void)_layoutSingleRightActionButton;
- (void)_layoutSingleLeftActionButton;
- (void)_layoutActionButton:(id)arg1 withOriginX:(float)arg2 originY:(float)arg3 width:(float)arg4 height:(float)arg5;
- (void)_updateHighlightedState;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setHighlighted:(BOOL)arg1;
- (void)setBannerImage:(id)arg1 withRoundedCorners:(BOOL)arg2;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 primaryActionButtonTitle:(id)arg3 secondaryActionButtonTitle:(id)arg4 reserveSpaceForBannerImage:(BOOL)arg5 entryPoint:(unsigned int)arg6 colorScheme:(unsigned int)arg7 isBannerTappable:(BOOL)arg8 hidesDismissButton:(BOOL)arg9;
- (id)initWithViewModel:(id)arg1;

@end
