//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIImageView, UILabel;

@interface CBLVariantOptionCollectionViewCell : UICollectionViewCell
{
    BOOL _strikeThrough;
    NSString *_optionString;
    UIImageView *_circleView;
    UILabel *_optionLabel;
}

@property(readonly, nonatomic) UILabel *optionLabel; // @synthesize optionLabel=_optionLabel;
@property(readonly, nonatomic) UIImageView *circleView; // @synthesize circleView=_circleView;
@property(nonatomic) BOOL strikeThrough; // @synthesize strikeThrough=_strikeThrough;
@property(copy, nonatomic) NSString *optionString; // @synthesize optionString=_optionString;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
