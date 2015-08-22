//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFNeverAnimatingTableViewCell.h"

@class UILabel, UISlider;

@interface PSPDFSliderCell : PSPDFNeverAnimatingTableViewCell
{
    UISlider *_slider;
    UILabel *_sliderLabel;
    float _minimumTextWidth;
    CDUnknownBlockType _sliderLabelUpdateBlock;
    CDUnknownBlockType _sliderLabelTouchBeganBlock;
    CDUnknownBlockType _sliderLabelTouchEndedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType sliderLabelTouchEndedBlock; // @synthesize sliderLabelTouchEndedBlock=_sliderLabelTouchEndedBlock;
@property(copy, nonatomic) CDUnknownBlockType sliderLabelTouchBeganBlock; // @synthesize sliderLabelTouchBeganBlock=_sliderLabelTouchBeganBlock;
@property(copy, nonatomic) CDUnknownBlockType sliderLabelUpdateBlock; // @synthesize sliderLabelUpdateBlock=_sliderLabelUpdateBlock;
@property(nonatomic) float minimumTextWidth; // @synthesize minimumTextWidth=_minimumTextWidth;
@property(readonly, nonatomic) UILabel *sliderLabel; // @synthesize sliderLabel=_sliderLabel;
@property(readonly, nonatomic) UISlider *slider; // @synthesize slider=_slider;
- (void).cxx_destruct;
- (void)sliderTouchEnded:(id)arg1;
- (void)sliderTouchBegan:(id)arg1;
- (void)sliderChanged:(id)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

