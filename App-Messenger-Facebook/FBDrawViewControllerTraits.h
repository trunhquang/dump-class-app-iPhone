//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface FBDrawViewControllerTraits : NSObject
{
    BOOL _shouldShowUndoButton;
    BOOL _useExtendedColorScrubber;
    float _colorScrubberMarginX;
    float _colorScrubberTopMargin;
    float _colorScrubberBottomMargin;
    UIColor *_initialBrushColor;
    id <FBDrawSoundControllerFactoryProtocol> _soundControllerFactory;
}

@property(readonly, nonatomic) id <FBDrawSoundControllerFactoryProtocol> soundControllerFactory; // @synthesize soundControllerFactory=_soundControllerFactory;
@property(readonly, nonatomic) UIColor *initialBrushColor; // @synthesize initialBrushColor=_initialBrushColor;
@property(readonly, nonatomic) float colorScrubberBottomMargin; // @synthesize colorScrubberBottomMargin=_colorScrubberBottomMargin;
@property(readonly, nonatomic) float colorScrubberTopMargin; // @synthesize colorScrubberTopMargin=_colorScrubberTopMargin;
@property(readonly, nonatomic) float colorScrubberMarginX; // @synthesize colorScrubberMarginX=_colorScrubberMarginX;
@property(readonly, nonatomic) BOOL useExtendedColorScrubber; // @synthesize useExtendedColorScrubber=_useExtendedColorScrubber;
@property(readonly, nonatomic) BOOL shouldShowUndoButton; // @synthesize shouldShowUndoButton=_shouldShowUndoButton;
- (void).cxx_destruct;
- (id)initWithSoundControllerFactory:(id)arg1 showUndoButton:(BOOL)arg2 useExtendedScrubber:(BOOL)arg3 colorScrubberMarginX:(float)arg4 colorScrubberTopMargin:(float)arg5 colorScrubberBottomMargin:(float)arg6 initialBrushColor:(id)arg7;

@end

