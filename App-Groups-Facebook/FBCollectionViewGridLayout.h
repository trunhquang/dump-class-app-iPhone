//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSMutableArray;

@interface FBCollectionViewGridLayout : UICollectionViewLayout
{
    struct delegateOptionalProtocolResponseFlags _;
    struct CGSize _contentSize;
    float _currentViewWidth;
    float _spacingBetweenColumns;
    float _minimumSpacingBetweenColumns;
    float _spacingBetweenRows;
    float _backgroundFooterHeight;
    unsigned int _countOfColumns;
    NSMutableArray *_layoutAttributes;
    NSMutableArray *_layoutSupplementaryAttribues;
    NSMutableArray *_sectionOrigins;
    struct CGSize _gridCellSize;
    struct UIEdgeInsets _sectionInsets;
}

@property(retain, nonatomic) NSMutableArray *sectionOrigins; // @synthesize sectionOrigins=_sectionOrigins;
@property(retain, nonatomic) NSMutableArray *layoutSupplementaryAttribues; // @synthesize layoutSupplementaryAttribues=_layoutSupplementaryAttribues;
@property(retain, nonatomic) NSMutableArray *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(readonly, nonatomic) unsigned int countOfColumns; // @synthesize countOfColumns=_countOfColumns;
@property(nonatomic) float backgroundFooterHeight; // @synthesize backgroundFooterHeight=_backgroundFooterHeight;
@property(nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(nonatomic) float spacingBetweenRows; // @synthesize spacingBetweenRows=_spacingBetweenRows;
@property(nonatomic) float minimumSpacingBetweenColumns; // @synthesize minimumSpacingBetweenColumns=_minimumSpacingBetweenColumns;
@property(nonatomic) struct CGSize gridCellSize; // @synthesize gridCellSize=_gridCellSize;
- (void).cxx_destruct;
- (void)_setDelegateOptionalProtocolResponseFlagsForDelegate:(id)arg1;
- (struct CGSize)_backgroundHeaderSize;
- (BOOL)_hasSupplementaryBackgroundView;
- (id)_backgroundIndexPath;
- (struct CGSize)_bigCellSizeForSection:(unsigned int)arg1;
- (struct CGSize)_rowCellSizeForSection:(unsigned int)arg1;
- (struct UIEdgeInsets)_sectionInsetsForSection:(unsigned int)arg1;
- (BOOL)_isRowCellAtIndexPath:(id)arg1;
- (BOOL)_delegateIsGridLayoutDelegate;
- (id)_nextRowSlotInGrid:(id)arg1 afterIndexPath:(id)arg2;
- (id)_nextBigSlotInGrid:(id)arg1 afterIndexPath:(id)arg2;
- (BOOL)_canPlaceCellInGrid:(id)arg1 ofSize:(struct CGSize)arg2 atIndexPath:(id)arg3;
- (id)_nextSmallSlotInGrid:(id)arg1 afterIndexPath:(id)arg2;
- (void)_addSmallItemToIndexPath:(id)arg1 inGrid:(id)arg2;
- (void)_addRowItemToIndexPath:(id)arg1 inGrid:(id)arg2;
- (void)_addBigItemToIndexPath:(id)arg1 inGrid:(id)arg2;
- (float)_maximumUsableContentWidthForSection:(unsigned int)arg1;
- (struct CGPoint)_viewOriginForLogicalPoint:(struct CGPoint)arg1 inSection:(unsigned int)arg2;
- (id)_indexPathForLogicalPoint:(struct CGPoint)arg1 inSection:(unsigned int)arg2;
- (struct CGPoint)_logicalPointForIndexPath:(id)arg1;
- (void)_computeSpacingBetweenColumnsForSection:(unsigned int)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)init;

@end

