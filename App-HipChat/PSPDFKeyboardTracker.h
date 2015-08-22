//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSPDFKeyboardTracker : NSObject
{
    unsigned int _keyboardState;
    CDUnknownBlockType _keyboardUpdatedBlock;
    unsigned int _animationOptions;
    CDUnknownBlockType _keyboardFrameChangedBlock;
    double _animationDuration;
    struct CGRect _keyboardFrame;
    struct CGRect _beginFrame;
}

+ (id)keyboardTrackerWithUpdateBlock:(CDUnknownBlockType)arg1;
+ (void)load;
@property(copy, nonatomic) CDUnknownBlockType keyboardFrameChangedBlock; // @synthesize keyboardFrameChangedBlock=_keyboardFrameChangedBlock;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) unsigned int animationOptions; // @synthesize animationOptions=_animationOptions;
@property(nonatomic) struct CGRect beginFrame; // @synthesize beginFrame=_beginFrame;
@property(readonly, copy, nonatomic) CDUnknownBlockType keyboardUpdatedBlock; // @synthesize keyboardUpdatedBlock=_keyboardUpdatedBlock;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(nonatomic) unsigned int keyboardState; // @synthesize keyboardState=_keyboardState;
- (void).cxx_destruct;
- (BOOL)updateKeyboardAttributesFromDictionary:(id)arg1;
- (void)setState:(unsigned int)arg1 andUpdateAttributesFromNotification:(id)arg2;
- (void)callKeyboardFrameChangedBlock;
- (void)callKeyboardUpdatedBlock;
- (void)transferStateFromKeyboardTracker:(id)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardDidChangeFrameNotification:(id)arg1;
- (void)keyboardWillChangeFrameNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)setKeyboardUpdatedBlock:(CDUnknownBlockType)arg1;
- (void)animateWithOptions:(unsigned int)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isKeyboardVisible) BOOL keyboardVisible;
@property(readonly, nonatomic) float keyboardHeight;
- (void)dealloc;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;

@end

