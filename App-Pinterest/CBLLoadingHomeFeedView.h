//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CAGradientLayer, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel, UIView;

@interface CBLLoadingHomeFeedView : CBLTraitCollectionView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _completed;
    NSString *_loadingText;
    NSString *_detailLoadingText;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    CAGradientLayer *_maskLayer;
    UIView *_containerView;
    UICollectionViewFlowLayout *_flowLayout;
    UICollectionView *_collectionView;
    float _numberOfCycles;
    int _highlightedCell;
}

@property(nonatomic) int highlightedCell; // @synthesize highlightedCell=_highlightedCell;
@property(nonatomic) float numberOfCycles; // @synthesize numberOfCycles=_numberOfCycles;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(copy, nonatomic) NSString *detailLoadingText; // @synthesize detailLoadingText=_detailLoadingText;
@property(copy, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
- (void).cxx_destruct;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (id)imageForIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)addCycleToCollectionViewIfNeeded;
- (void)beginAnimation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

