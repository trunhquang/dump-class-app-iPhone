//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GOOTransitionGesture.h"

@class GOONavigationController, GOOTransitionHorizontalSlide, NSString, UIGestureRecognizer, UIScreenEdgePanGestureRecognizer;

@interface GOOTransitionGestureHorizontalSlide : NSObject <GOOTransitionGesture>
{
    UIScreenEdgePanGestureRecognizer *_edgePanGestureRecognizer;
    GOOTransitionHorizontalSlide *_slideTransition;
    GOONavigationController *_navigationController;
}

@property(nonatomic) __weak GOONavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (void)handleEdgePan:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)interactionControllerForAnimationController:(id)arg1;
- (BOOL)shouldBeginInteractiveTransition;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

