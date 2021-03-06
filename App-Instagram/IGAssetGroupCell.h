//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class IGAssetGroup, UIView;

@interface IGAssetGroupCell : UITableViewCell
{
    IGAssetGroup *_assetGroup;
    int _assetType;
    UIView *_chevronView;
    UIView *_separatorView;
}

@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *chevronView; // @synthesize chevronView=_chevronView;
@property(nonatomic) int assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) IGAssetGroup *assetGroup; // @synthesize assetGroup=_assetGroup;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setAssetGroup:(id)arg1 assetType:(int)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

