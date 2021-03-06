//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KeyboardHelper : NSObject
{
    BOOL keyboardFullyShown_;
    BOOL keyboardVisible_;
    struct CGRect keyboardFrame_;
}

+ (id)sharedHelper;
- (id)description;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardFrameChanged:(id)arg1;
@property(readonly, nonatomic) float keyboardHeight;
- (struct CGRect)keyboardFrameForView:(id)arg1;
@property(readonly, nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=keyboardFrame_;
@property(readonly, nonatomic, getter=isKeyboardVisible) BOOL keyboardVisible; // @synthesize keyboardVisible=keyboardVisible_;
@property(readonly, nonatomic, getter=isKeyboardFullyShown) BOOL keyboardFullyShown; // @synthesize keyboardFullyShown=keyboardFullyShown_;
- (void)stopObserving;
- (void)startObserving;

@end

