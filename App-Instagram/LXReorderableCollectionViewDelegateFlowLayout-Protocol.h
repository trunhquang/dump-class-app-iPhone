//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout.h"

@class NSIndexPath, UICollectionView, UICollectionViewLayout;

@protocol LXReorderableCollectionViewDelegateFlowLayout <UICollectionViewDelegateFlowLayout>

@optional
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 didEndDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 willEndDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 didBeginDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 willBeginDraggingItemAtIndexPath:(NSIndexPath *)arg3;
@end

