//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGMediaThumbnailView, UILabel, UIView;

@interface IGCarouselCell : UICollectionViewCell
{
    IGMediaThumbnailView *_imageView;
    UILabel *_titleLabel;
    UIView *_overlayView;
}

@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IGMediaThumbnailView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (void)setVideoIconVisible:(BOOL)arg1;
- (void)setTitleText:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
