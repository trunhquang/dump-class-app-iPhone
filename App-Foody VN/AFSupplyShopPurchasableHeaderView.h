//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSNumber, UISegmentedControl;

@interface AFSupplyShopPurchasableHeaderView : UICollectionReusableView
{
    id <AFSupplyShopPurchasableHeaderViewDelegate> _delegate;
    NSNumber *_dataObject;
    UISegmentedControl *_segmentedControl;
}

@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) NSNumber *dataObject; // @synthesize dataObject=_dataObject;
@property(nonatomic) __weak id <AFSupplyShopPurchasableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)segmentedControlValueChanged:(id)arg1;
- (void)prepareView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

