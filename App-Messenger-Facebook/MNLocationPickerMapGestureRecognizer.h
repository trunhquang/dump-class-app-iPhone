//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer;

@interface MNLocationPickerMapGestureRecognizer : NSObject <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;
    id <MNLocationPickerMapGestureRecognizerDelegate> _delegate;
}

@property(nonatomic) __weak id <MNLocationPickerMapGestureRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleTwoFingerTapGesture:(id)arg1;
- (void)_handleDoubleTapGesture:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)dealloc;
- (id)initWithMapView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
