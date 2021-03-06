//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDelegate.h"

@class NSIndexPath, UICollectionView, UICollectionViewCell;

@protocol UICollectionViewDelegate_Draggable <UICollectionViewDelegate>

@optional
- (void)collectionView:(UICollectionView *)arg1 removeCellAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionViewDidEndMoving:(UICollectionView *)arg1;
- (void)collectionView:(UICollectionView *)arg1 didEndDraggingCell:(UICollectionViewCell *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didBeginDraggingCell:(UICollectionViewCell *)arg2;
- (void)collectionView:(UICollectionView *)arg1 willBeginDraggingCell:(UICollectionViewCell *)arg2;
@end

