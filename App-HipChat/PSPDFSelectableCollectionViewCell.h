//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class PSPDFCheckmarkOverlayView, UIColor;

@interface PSPDFSelectableCollectionViewCell : UICollectionViewCell
{
    unsigned int _selectableCellStyle;
    UIColor *_selectableCellColor;
    PSPDFCheckmarkOverlayView *_checkmarkOverlayView;
}

@property(retain, nonatomic) PSPDFCheckmarkOverlayView *checkmarkOverlayView; // @synthesize checkmarkOverlayView=_checkmarkOverlayView;
@property(retain, nonatomic) UIColor *selectableCellColor; // @synthesize selectableCellColor=_selectableCellColor;
@property(nonatomic) unsigned int selectableCellStyle; // @synthesize selectableCellStyle=_selectableCellStyle;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

