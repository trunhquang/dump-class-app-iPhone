//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGFeedItemMediaCell, IGImageProgressView, IGMediaOverlayIndicator;

@interface IGFeedMediaView : UIView
{
    IGFeedItemMediaCell *_parentCellView;
    IGImageProgressView *_photoImageView;
    IGMediaOverlayIndicator *_indicator;
}

@property(readonly, nonatomic) IGMediaOverlayIndicator *indicator; // @synthesize indicator=_indicator;
@property(readonly, nonatomic) IGImageProgressView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(nonatomic) __weak IGFeedItemMediaCell *parentCellView; // @synthesize parentCellView=_parentCellView;
- (void).cxx_destruct;
- (void)showOneTapIndicatorWithIcon:(id)arg1;
- (void)showOneTapIndicatorWithString:(id)arg1 iconName:(id)arg2 willContract:(BOOL)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
