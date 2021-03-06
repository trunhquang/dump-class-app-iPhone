//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSArray, NSMutableArray;

@interface CBLCollectionViewMasonryLayout : UICollectionViewLayout
{
    BOOL _centerLayout;
    BOOL _alwaysShowSectionHeaders;
    BOOL _supportSupplementaryViews;
    float _topInset;
    id <CBLCollectionViewDelegateMasonryLayout> _layoutDelegate;
    NSArray *_sections;
    float _height;
    NSArray *_columnCounts;
    NSArray *_columnWidths;
    NSMutableArray *_fadeOutIndexPaths;
    struct CGSize _columnSpacing;
    struct CGSize _containerSize;
    struct CGRect _headerFrame;
}

+ (Class)layoutAttributesClass;
@property(retain, nonatomic) NSMutableArray *fadeOutIndexPaths; // @synthesize fadeOutIndexPaths=_fadeOutIndexPaths;
@property(retain, nonatomic) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property(retain, nonatomic) NSArray *columnCounts; // @synthesize columnCounts=_columnCounts;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(readonly, nonatomic) struct CGSize columnSpacing; // @synthesize columnSpacing=_columnSpacing;
@property(readonly, nonatomic) BOOL supportSupplementaryViews; // @synthesize supportSupplementaryViews=_supportSupplementaryViews;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <CBLCollectionViewDelegateMasonryLayout> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) float topInset; // @synthesize topInset=_topInset;
@property(nonatomic) BOOL alwaysShowSectionHeaders; // @synthesize alwaysShowSectionHeaders=_alwaysShowSectionHeaders;
@property(nonatomic) BOOL centerLayout; // @synthesize centerLayout=_centerLayout;
@property(nonatomic) struct CGRect headerFrame; // @synthesize headerFrame=_headerFrame;
- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)headerLayoutAttributes;
@property(readonly, nonatomic) int sectionCount;
@property(readonly, nonatomic) float cellLayoutWidth;
@property(readonly, nonatomic) struct CGSize cellSpacing;
@property(readonly, nonatomic) float leftInsetForCenteredLayout;
@property(readonly, nonatomic) float columnWidth;
@property(readonly, nonatomic) int columnCount;
- (struct CGSize)cellSpacingForSection:(int)arg1;
- (float)cellLayoutWidthForColumns:(unsigned int)arg1 ofWidth:(float)arg2 forSection:(int)arg3;
- (float)cellLayoutWidthForSection:(int)arg1;
- (float)leftInsetForCenteredLayoutWithViewWidth:(float)arg1 contentWidth:(float)arg2;
- (float)leftInsetForCenteredLayoutForSection:(int)arg1;
- (int)columnCountForSection:(int)arg1;
- (float)columnWidthForSection:(int)arg1;
- (struct CGSize)collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)initWithSupplementaryViewSupport:(BOOL)arg1;
- (id)init;

@end

