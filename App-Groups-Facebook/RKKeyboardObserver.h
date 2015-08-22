//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge, UIView;

@interface RKKeyboardObserver : NSObject <RCTBridgeModule>
{
    BOOL _observingKeyboardNotifications;
    BOOL _keyboardAppearing;
    BOOL _keyboardDisappearing;
    BOOL _keyboardAnimating;
    BOOL _keyboardVisible;
    RCTBridge *_bridge;
    UIView *_owner;
}

+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) BOOL keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(readonly, nonatomic) BOOL keyboardAnimating; // @synthesize keyboardAnimating=_keyboardAnimating;
@property(readonly, nonatomic) BOOL keyboardDisappearing; // @synthesize keyboardDisappearing=_keyboardDisappearing;
@property(readonly, nonatomic) BOOL keyboardAppearing; // @synthesize keyboardAppearing=_keyboardAppearing;
@property(nonatomic) __weak UIView *owner; // @synthesize owner=_owner;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (id)_keyboardNotificationDataWithBeginFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2 duration:(double)arg3;
- (void)_keyboardFrameDidChange:(id)arg1;
- (void)_keyboardFrameWillChange:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_resetKeyboardState;
- (void)stopObservingKeyboardNotifications;
- (void)startObservingKeyboardNotifications;
- (void)dealloc;
- (id)init;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

