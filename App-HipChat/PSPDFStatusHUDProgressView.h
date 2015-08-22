//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, CATextLayer;

@interface PSPDFStatusHUDProgressView : UIView
{
    CAShapeLayer *_progressLayer;
    CAShapeLayer *_progressBorderLayer;
    CATextLayer *_progressTextLayer;
}

@property(retain, nonatomic) CATextLayer *progressTextLayer; // @synthesize progressTextLayer=_progressTextLayer;
@property(retain, nonatomic) CAShapeLayer *progressBorderLayer; // @synthesize progressBorderLayer=_progressBorderLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setProgress:(float)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

