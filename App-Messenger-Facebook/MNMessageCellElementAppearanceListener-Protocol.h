//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNBadgedProfileImageView, MNFailedBadgeView, MNMessageRow, MNReadReceiptView, UICollectionViewCell;

@protocol MNMessageCellElementAppearanceListener <NSObject>

@optional
- (void)failedViewDidDisappear:(MNFailedBadgeView *)arg1;
- (void)failedViewDidAppear:(MNFailedBadgeView *)arg1;
- (void)receiptViewDidDisappear:(MNReadReceiptView *)arg1;
- (void)receiptViewDidUpdate:(MNReadReceiptView *)arg1;
- (void)receiptViewDidAppear:(MNReadReceiptView *)arg1;
- (void)profileImageViewDidDisappear:(MNBadgedProfileImageView *)arg1;
- (void)profileImageViewDidTap:(MNBadgedProfileImageView *)arg1;
- (void)profileImageViewDidAppear:(MNBadgedProfileImageView *)arg1;
- (void)messageCellWillDisappear:(UICollectionViewCell *)arg1 withMessageRow:(MNMessageRow *)arg2;
- (void)adminMessageCellWillAppear:(UICollectionViewCell *)arg1 withMessageRow:(MNMessageRow *)arg2;
- (void)messageCellWillAppear:(UICollectionViewCell *)arg1 withMessageRow:(MNMessageRow *)arg2;
@end
