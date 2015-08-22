//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GOOTransitioning.h"

@class GOONavigationHeaderBevelView, GOONavigationStyle, NSArray, NSString, UILabel;

@interface GOONavigationHeaderView : UIView <GOOTransitioning>
{
    GOONavigationStyle *_style;
    int _headerViewState;
    GOONavigationHeaderBevelView *_bevelView;
    UIView *_bannerView;
    BOOL _shadowEnabled;
    UIView *_statusBarBackgroundView;
    UILabel *_titleLabel;
    UIView *_titleView;
    NSArray *_leftBarViews;
    NSArray *_rightBarViews;
    UIView *_defaultBackgroundView;
    UIView *_customBackgroundView;
}

+ (id)transitioningViewKeys;
@property(readonly, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(readonly, nonatomic) UIView *defaultBackgroundView; // @synthesize defaultBackgroundView=_defaultBackgroundView;
@property(readonly, nonatomic) NSArray *rightBarViews; // @synthesize rightBarViews=_rightBarViews;
@property(readonly, nonatomic) NSArray *leftBarViews; // @synthesize leftBarViews=_leftBarViews;
@property(readonly, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
@property(nonatomic) int headerViewState; // @synthesize headerViewState=_headerViewState;
- (void).cxx_destruct;
- (void)transferCustomViewOwnershipForBarButtonItem:(id)arg1;
- (void)updateBarButtonView:(id)arg1 withBarButtonItem:(id)arg2 keyPath:(id)arg3;
- (void)updateButton:(id)arg1 withItem:(id)arg2 forState:(unsigned int)arg3 barMetrics:(int)arg4;
- (void)updateButton:(id)arg1 withItem:(id)arg2 barMetrics:(int)arg3;
- (void)updateTextColorForButton:(id)arg1;
- (id)viewFromBarButtonItem:(id)arg1;
- (id)viewsFromBarButtonItems:(id)arg1;
- (void)applyLayout:(id)arg1 toBarItemView:(id)arg2;
- (void)updateTitleLabelWithStyle:(id)arg1;
- (float)textBaselineForLabel:(id)arg1;
- (void)loadBevelViewIfNecessary;
- (BOOL)shouldAlignTextButtonsWithTitle;
- (BOOL)shouldShowTitleViewForNavigationItem:(id)arg1;
- (BOOL)shouldShowTitleLabelForNavigationItem:(id)arg1;
- (BOOL)shouldShowBarViewsForNavigationItem:(id)arg1;
- (void)updateShadowLayer:(BOOL)arg1;
- (void)updateShadow;
- (void)updateViewWithStyle:(id)arg1;
- (id)accessibilityElementArray;
- (id)transitioningViewByKey;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (BOOL)transition:(id)arg1 shouldReparentTransitioningView:(id)arg2 forKey:(id)arg3;
- (void)transition:(id)arg1 didRemoveTransitioningView:(id)arg2 forKey:(id)arg3;
- (void)transition:(id)arg1 willRemoveTransitioningView:(id)arg2 forKey:(id)arg3;
- (void)transition:(id)arg1 didAddTransitioningView:(id)arg2 forKey:(id)arg3;
- (void)transition:(id)arg1 willAddTransitioningView:(id)arg2 forKey:(id)arg3;
- (void)didEndTransition:(id)arg1 toViewController:(id)arg2;
- (void)willBeginTransition:(id)arg1 toViewController:(id)arg2;
- (id)incomingTransitioningViewLayoutForKey:(id)arg1 transition:(id)arg2 transitioningView:(id)arg3 withContainerBounds:(struct CGRect)arg4;
- (id)outgoingTransitioningViewForKey:(id)arg1 transition:(id)arg2;
- (id)incomingTransitioningViewKeysForTransition:(id)arg1;
- (id)outgoingTransitioningViewKeysForTransition:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setShadowEnabled:(BOOL)arg1;
- (void)setCustomBackgroundView:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)updateNavigationStyle:(id)arg1;
- (void)updateBarButtonItem:(id)arg1 withNavigationItem:(id)arg2 forKeyPath:(id)arg3;
- (void)updateViewWithNavigationItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

