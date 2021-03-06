//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, QTMCollectionView, QTMColorGroup, UIColor;

@interface QTMCollectionViewStyleController : NSObject
{
    UIColor *_collectionViewBackgroundColor;
    BOOL _shouldInvalidateLayout;
    BOOL _usesDarkTheme;
    BOOL _allowsItemInlay;
    BOOL _allowsMultipleItemInlays;
    BOOL _shouldAnimateCellsOnAppearance;
    BOOL _willAnimateCellsOnAppearance;
    QTMCollectionView *_collectionView;
    id <QTMCollectionViewStyleDelegate> _delegate;
    unsigned int _sectionHeaderStyle;
    unsigned int _sectionFooterStyle;
    unsigned int _cellDividerStyle;
    unsigned int _cellDividerStyleInsets;
    QTMColorGroup *_collectionViewBackgroundColorGroup;
    unsigned int _cellStyle;
    unsigned int _cellLayoutType;
    int _gridColumnCount;
    float _gridPadding;
    float _animateCellsOnAppearancePadding;
    UIColor *_innerBackgroundColor;
    NSMutableArray *_highlightedInnerGradientColors;
    UIColor *_borderColor;
    float _borderRadius;
    float _borderWidth;
    UIColor *_shadowColor;
    float _shadowWidth;
    UIColor *_cellDividerColor;
    float _cellDividerHeight;
    unsigned int _inkTouchStyle;
    NSMutableDictionary *_cellBackgroundCaches;
    NSMutableSet *_inlaidIndexPathSet;
    double _animateCellsOnAppearanceDuration;
    struct CGSize _shadowOffset;
    struct UIEdgeInsets _cellDividerInsets;
}

+ (void)applyDividerPathToContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2 isCard:(BOOL)arg3 dividerHeight:(float)arg4 dividerInsets:(struct UIEdgeInsets)arg5;
+ (void)applyBorderPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 isTop:(BOOL)arg3 isBottom:(BOOL)arg4 isCard:(BOOL)arg5 borderRadius:(float)arg6;
+ (void)applyBackgroundPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 isTop:(BOOL)arg3 isBottom:(BOOL)arg4 isCard:(BOOL)arg5 borderRadius:(float)arg6;
+ (id)resizableImage:(id)arg1;
+ (float)minPixelOffset;
+ (id)dividerLineWithStyleController:(id)arg1 cellBounds:(struct CGRect)arg2 sectionOrdinalPosition:(unsigned int)arg3 atIndexPath:(id)arg4 elementKind:(unsigned int)arg5;
+ (id)cellBackgroundImageWithStyleController:(id)arg1 sectionOrdinalPosition:(unsigned int)arg2 atIndexPath:(id)arg3 elementKind:(unsigned int)arg4;
+ (id)cellBackgroundCache;
+ (unsigned int)backgroundCacheKeyForCardStyle:(BOOL)arg1 isGroupedStyle:(BOOL)arg2 isTop:(BOOL)arg3 isBottom:(BOOL)arg4 isHighlighted:(BOOL)arg5;
@property(retain, nonatomic) NSMutableSet *inlaidIndexPathSet; // @synthesize inlaidIndexPathSet=_inlaidIndexPathSet;
@property(readonly, nonatomic) NSMutableDictionary *cellBackgroundCaches; // @synthesize cellBackgroundCaches=_cellBackgroundCaches;
@property(nonatomic) unsigned int inkTouchStyle; // @synthesize inkTouchStyle=_inkTouchStyle;
@property(nonatomic) float cellDividerHeight; // @synthesize cellDividerHeight=_cellDividerHeight;
@property(retain, nonatomic) UIColor *cellDividerColor; // @synthesize cellDividerColor=_cellDividerColor;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) float shadowWidth; // @synthesize shadowWidth=_shadowWidth;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) float borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) float borderRadius; // @synthesize borderRadius=_borderRadius;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSMutableArray *highlightedInnerGradientColors; // @synthesize highlightedInnerGradientColors=_highlightedInnerGradientColors;
@property(retain, nonatomic) UIColor *innerBackgroundColor; // @synthesize innerBackgroundColor=_innerBackgroundColor;
@property(readonly, nonatomic) double animateCellsOnAppearanceDuration; // @synthesize animateCellsOnAppearanceDuration=_animateCellsOnAppearanceDuration;
@property(readonly, nonatomic) float animateCellsOnAppearancePadding; // @synthesize animateCellsOnAppearancePadding=_animateCellsOnAppearancePadding;
@property(readonly, nonatomic) BOOL willAnimateCellsOnAppearance; // @synthesize willAnimateCellsOnAppearance=_willAnimateCellsOnAppearance;
@property(nonatomic) BOOL shouldAnimateCellsOnAppearance; // @synthesize shouldAnimateCellsOnAppearance=_shouldAnimateCellsOnAppearance;
@property(nonatomic) BOOL allowsMultipleItemInlays; // @synthesize allowsMultipleItemInlays=_allowsMultipleItemInlays;
@property(nonatomic) BOOL allowsItemInlay; // @synthesize allowsItemInlay=_allowsItemInlay;
@property(nonatomic) float gridPadding; // @synthesize gridPadding=_gridPadding;
@property(nonatomic) int gridColumnCount; // @synthesize gridColumnCount=_gridColumnCount;
@property(nonatomic) unsigned int cellLayoutType; // @synthesize cellLayoutType=_cellLayoutType;
@property(nonatomic) unsigned int cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) struct UIEdgeInsets cellDividerInsets; // @synthesize cellDividerInsets=_cellDividerInsets;
@property(retain, nonatomic) QTMColorGroup *collectionViewBackgroundColorGroup; // @synthesize collectionViewBackgroundColorGroup=_collectionViewBackgroundColorGroup;
@property(nonatomic) unsigned int cellDividerStyleInsets; // @synthesize cellDividerStyleInsets=_cellDividerStyleInsets;
@property(nonatomic) unsigned int cellDividerStyle; // @synthesize cellDividerStyle=_cellDividerStyle;
@property(nonatomic) unsigned int sectionFooterStyle; // @synthesize sectionFooterStyle=_sectionFooterStyle;
@property(nonatomic) unsigned int sectionHeaderStyle; // @synthesize sectionHeaderStyle=_sectionHeaderStyle;
@property(nonatomic) BOOL usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic) __weak id <QTMCollectionViewStyleDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak QTMCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) BOOL shouldInvalidateLayout; // @synthesize shouldInvalidateLayout=_shouldInvalidateLayout;
- (void).cxx_destruct;
- (BOOL)allowDividerAtIndexPath:(id)arg1 sectionOrdinalPosition:(unsigned int)arg2 elementKind:(unsigned int)arg3;
- (BOOL)drawShadowForCellWithIsCardStye:(BOOL)arg1 isGroupStyle:(BOOL)arg2 isHighlighted:(BOOL)arg3;
@property(readonly, nonatomic) UIColor *collectionViewBackgroundColor;
- (BOOL)shouldInvalidateLayoutForStyleChange;
- (void)invalidateLayoutForStyleChange;
- (void)updateLayoutAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)innerBackgroundColorAtIndexPath:(id)arg1 isSectionHeader:(BOOL)arg2 isSectionFooter:(BOOL)arg3;
- (void)updateAnimated:(BOOL)arg1;
- (void)resetIndexPathsForInlaidItems;
- (void)removeInlayFromAllItemsAnimated:(BOOL)arg1;
- (void)applyInlayToAllItemsAnimated:(BOOL)arg1;
- (void)removeInlayFromItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)applyInlayToItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (BOOL)isItemInlaidAtIndexPath:(id)arg1;
- (id)indexPathsForInlaidItems;
- (void)setCellStyle:(unsigned int)arg1 animated:(BOOL)arg2;
- (unsigned int)cellDividerStyleAtSectionIndex:(int)arg1;
- (BOOL)shouldShowGridBackgroundAtSection:(int)arg1;
- (BOOL)isCellDividerVisibleAtSectionIndex:(int)arg1;
- (BOOL)isGroupedStyleAtSectionIndex:(int)arg1;
- (BOOL)isCardStyleAtSectionIndex:(int)arg1;
- (unsigned int)sectionFooterStyleAtSection:(int)arg1;
- (unsigned int)sectionHeaderStyleAtSection:(int)arg1;
- (struct UIEdgeInsets)cellDividerInsetsAtSectionIndex:(int)arg1;
- (struct UIEdgeInsets)edgeInsetsForCellDividerStyleInsets:(unsigned int)arg1;
- (unsigned int)cellDividerStyleInsetsWithDelegateOverrideForSection:(int)arg1;
- (float)cellWidthAtSectionIndex:(int)arg1;
- (struct UIEdgeInsets)insetsAtSectionIndex:(int)arg1;
- (struct UIEdgeInsets)backgroundImageViewOutsetsForCellWithAttribute:(id)arg1;
- (struct UIEdgeInsets)contentViewInsetsForCellWithAttribute:(id)arg1;
- (void)clearBackgroundCaches;
- (void)clearCaches;
- (void)beginCellAppearanceAnimation;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCollectionView:(id)arg1;

@end

