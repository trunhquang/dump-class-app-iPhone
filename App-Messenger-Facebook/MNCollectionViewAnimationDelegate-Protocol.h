//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNCollectionView;

@protocol MNCollectionViewAnimationDelegate <NSObject>
- (void)collectionViewDidChangeWidth:(MNCollectionView *)arg1;
- (void)collectionViewWillChangeWidth:(MNCollectionView *)arg1;
- (BOOL)collectionViewShouldAnimateLayout:(MNCollectionView *)arg1;
@end

