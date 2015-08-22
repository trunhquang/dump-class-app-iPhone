//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface FBSegmentedContainerView : UIView
{
    UIView *_navigationView;
    UIView *_navigationShadowView;
    UIView *_contentView;
    float _topLayoutGuideLength;
}

+ (void)initialize;
@property(nonatomic) float topLayoutGuideLength; // @synthesize topLayoutGuideLength=_topLayoutGuideLength;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_initWithNavigationView:(id)arg1;
- (id)initWithSecondaryNavigationControl:(id)arg1;
- (id)initWithSegmentedView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

