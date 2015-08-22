//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class UICollectionViewLayoutAttributes;

@interface PSPDFThumbnailFlowLayout : UICollectionViewFlowLayout
{
    struct CGRect *itemRects;
    int *itemTypes;
    BOOL _stickyHeaderEnabled;
    BOOL _doublePageModeDisabled;
    id <PSPDFPresentationContext> _presentationContext;
    UICollectionViewLayoutAttributes *_vendedHeaderAttributes;
}

+ (Class)layoutAttributesClass;
@property(copy, nonatomic) UICollectionViewLayoutAttributes *vendedHeaderAttributes; // @synthesize vendedHeaderAttributes=_vendedHeaderAttributes;
@property(nonatomic) __weak id <PSPDFPresentationContext> presentationContext; // @synthesize presentationContext=_presentationContext;
@property(nonatomic) BOOL doublePageModeDisabled; // @synthesize doublePageModeDisabled=_doublePageModeDisabled;
@property(nonatomic) BOOL stickyHeaderEnabled; // @synthesize stickyHeaderEnabled=_stickyHeaderEnabled;
- (void).cxx_destruct;
- (void)centerLineWithItemsFrom:(int)arg1 to:(int)arg2 spaces:(int)arg3 itemsWidth:(float)arg4 currentMaxY:(float)arg5;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (id)indexPathForDoublePage:(id)arg1;
- (int)typeForIndexPath:(id)arg1 usingDoublePageMode:(BOOL)arg2;
@property(readonly, nonatomic) BOOL doublePageMode;
- (struct CGSize)collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)invalidateLayout;
- (void)prepareLayout;
- (void)dealloc;

// Remaining properties
@property(nonatomic) int scrollDirection; // @dynamic scrollDirection;

@end

