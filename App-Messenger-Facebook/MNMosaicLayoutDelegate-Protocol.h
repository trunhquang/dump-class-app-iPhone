//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UICollectionView, UICollectionViewLayout;

@protocol MNMosaicLayoutDelegate <NSObject>
- (BOOL)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 headerForItemAtIndexPath:(NSIndexPath *)arg3;
- (float)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 aspectRatioForItemAtIndexPath:(NSIndexPath *)arg3;
@end
