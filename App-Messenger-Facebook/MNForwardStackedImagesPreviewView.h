//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface MNForwardStackedImagesPreviewView : UIView
{
    UIView *_topImage;
    UIView *_secondImage;
    UIView *_thirdImage;
    UILabel *_imagesCountLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setImages:(id)arg1;
- (id)initWithImagesCount:(unsigned int)arg1 shouldCreatePlaceholder:(BOOL)arg2;

@end

