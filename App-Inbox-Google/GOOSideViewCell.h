//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QTMInkView, UIView;

@interface GOOSideViewCell : UICollectionViewCell
{
    QTMInkView *_inkView;
    UIView *_backdropView;
}

@property(retain, nonatomic) UIView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) QTMInkView *inkView; // @synthesize inkView=_inkView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

