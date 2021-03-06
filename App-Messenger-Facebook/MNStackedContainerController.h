//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBKeyboardObserverDelegate.h"

@class FBKeyboardObserver, MNStackedContainerView, NSString;

@interface MNStackedContainerController : NSObject <FBKeyboardObserverDelegate>
{
    FBKeyboardObserver *_keyboardObserver;
    MNStackedContainerView *_stackedContainerView;
}

- (void).cxx_destruct;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)stopObservingKeyboardNotifications;
- (void)startObservingKeyboardNotifications;
- (void)dealloc;
- (id)initWithStackedContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

