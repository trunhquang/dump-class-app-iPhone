//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class GOOOverlayWindowContainerView, NSMutableArray;

@interface GOOOverlayWindow : UIWindow
{
    NSMutableArray *_overlays;
    GOOOverlayWindowContainerView *_overlayView;
}

@property(retain, nonatomic) GOOOverlayWindowContainerView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) NSMutableArray *overlays; // @synthesize overlays=_overlays;
- (void).cxx_destruct;
- (void)removeLevelForOverlay:(id)arg1;
- (void)setLevel:(float)arg1 forOverlay:(id)arg2;
- (float)windowLevelForOverlay:(id)arg1;
- (void)deactivateOverlay:(id)arg1;
- (void)activateOverlay:(id)arg1 withLevel:(float)arg2;
- (void)noteOverlayRemoved:(id)arg1;
- (void)updateAccessibilityIsModal;
- (void)updateOverlayHiddenState;
- (void)didAddSubview:(id)arg1;
- (void)handleRotationNotification:(id)arg1;
- (void)updateOverlayViewForOrientation:(int)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

