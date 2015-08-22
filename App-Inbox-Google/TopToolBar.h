//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GBTNavigationBar.h"

#import "ClusterTitleViewDelegate.h"

@class CAGradientLayer, NSArray, NSMutableDictionary, UIButton, UIColor, UIImageView, UIView;

@interface TopToolBar : GBTNavigationBar <ClusterTitleViewDelegate>
{
    UIButton *leftButton_;
    NSArray *rightButtons_;
    UIImageView *snoozeArrow_;
    BOOL dropShadowHiddenWhenOpaque_;
    UIColor *customBarTintColorWhenOpaque_;
    CAGradientLayer *gradient_;
    NSMutableDictionary *cachedMiddleButtons_;
    NSMutableDictionary *cachedRightButtonsForTransparency_;
    NSMutableDictionary *cachedLeftButtonForTransparency_;
    NSMutableDictionary *middleButtonSelectedStates_;
    BOOL showGradientWhenTransparent_;
    BOOL transparent_;
    id <TopToolBarDataSource> dataSource_;
    NSArray *middleActions_;
    unsigned int style_;
    UIView *titleView_;
    id <TopToolBarDelegate> _topToolbarDelegate;
}

@property(nonatomic) __weak id <TopToolBarDelegate> topToolbarDelegate; // @synthesize topToolbarDelegate=_topToolbarDelegate;
@property(nonatomic) BOOL transparent; // @synthesize transparent=transparent_;
@property(readonly, nonatomic) UIView *titleView; // @synthesize titleView=titleView_;
@property(nonatomic) unsigned int style; // @synthesize style=style_;
@property(nonatomic) BOOL showGradientWhenTransparent; // @synthesize showGradientWhenTransparent=showGradientWhenTransparent_;
@property(readonly, nonatomic) NSArray *rightButtons; // @synthesize rightButtons=rightButtons_;
@property(readonly, nonatomic) NSArray *middleActions; // @synthesize middleActions=middleActions_;
@property(nonatomic) __weak id <TopToolBarDataSource> dataSource; // @synthesize dataSource=dataSource_;
- (void).cxx_destruct;
- (void)titleAction:(id)arg1;
- (void)middleAction:(id)arg1 isLongPress:(BOOL)arg2;
- (void)middleLongPressAction:(id)arg1;
- (void)middleAction:(id)arg1;
- (void)rightButtonAction:(id)arg1;
- (void)leftButtonAction:(id)arg1;
- (void)updateWithNavigationType:(unsigned int)arg1;
- (void)updateWithBatchActionHandler:(id)arg1;
- (void)updateWithSnoozeConfig:(id)arg1 reuseButtons:(BOOL)arg2;
- (void)updateWithTask:(id)arg1;
- (void)updateSelectedStates;
- (void)updateWithConversation:(id)arg1;
- (id)middleButtonWithType:(unsigned int)arg1;
- (BOOL)isItemSnoozed:(id)arg1;
- (id)highlightedIconColorForCurrentStyle;
- (id)normalIconColorForCurrentStyle;
- (BOOL)isClusterStyle;
- (void)addInkSplash:(id)arg1;
- (void)addInkSplashes;
- (void)updateLongPressGestureRecognizerForButton:(id)arg1;
- (id)createMiddleButtonWithType:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (id)arrayOfCurrentButtons;
- (void)updateToolBarActionsAnimated:(BOOL)arg1;
- (void)updateToolBarActions;
- (void)createMiddleActions;
- (void)createLeftRightActions;
- (void)updateBackground;
- (void)createSubviews;
- (id)createTrashAllButtonWithNormalColor:(id)arg1 highlightedColor:(id)arg2;
- (id)createSweepButtonWithNormalColor:(id)arg1 highlightedColor:(id)arg2;
- (id)createMoreActionsButtonWithNormalColor:(id)arg1 highlightedColor:(id)arg2;
- (id)createCloseButtonWithNormalColor:(id)arg1 highlightedColor:(id)arg2;
- (id)createDefaultBackButton;
- (void)clusterTitleViewTapped:(id)arg1;
- (void)setDropShadowHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTransparent:(BOOL)arg1 animated:(BOOL)arg2;
- (void)rotateLeftButtonIn;
- (void)rotateLeftButtonOut;
- (void)setNavigationItemAlpha:(float)arg1;
- (id)defaultRightButtons;
- (id)defaultLeftButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)defaultMiddleButtons;
- (BOOL)isSweepButtonHidden;
- (void)setSweepButtonHidden:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned int)arg2 withDataSource:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

