//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFCosmeticBrushViewController.h"

#import "AFScrollableImageViewDelegate.h"

@class NSString, UILabel;

@interface AFSpotToolViewController : AFCosmeticBrushViewController <AFScrollableImageViewDelegate>
{
    UILabel *_dragToolTipLabel;
}

@property(retain, nonatomic) UILabel *dragToolTipLabel; // @synthesize dragToolTipLabel=_dragToolTipLabel;
- (void).cxx_destruct;
- (void)moveDragToolTipToPoint:(struct CGPoint)arg1;
- (void)applySpotAtPoint:(struct CGPoint)arg1;
- (void)brushOverlay:(id)arg1 tapRecognizedAtPoint:(struct CGPoint)arg2;
- (void)brushOverlay:(id)arg1 panEndedAtPoint:(struct CGPoint)arg2;
- (void)brushOverlay:(id)arg1 panChangedAtPoint:(struct CGPoint)arg2;
- (void)brushOverlay:(id)arg1 panBeganAtPoint:(struct CGPoint)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

