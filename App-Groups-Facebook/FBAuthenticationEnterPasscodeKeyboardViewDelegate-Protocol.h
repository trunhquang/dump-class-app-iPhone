//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAuthenticationEnterPasscodeKeyboardView, NSString, UIButton;

@protocol FBAuthenticationEnterPasscodeKeyboardViewDelegate <NSObject>
- (void)authenticationEnterPasscodeKeyboardView:(FBAuthenticationEnterPasscodeKeyboardView *)arg1 didTapDeleteButton:(UIButton *)arg2;
- (void)authenticationEnterPasscodeKeyboardView:(FBAuthenticationEnterPasscodeKeyboardView *)arg1 didTapCancelButton:(UIButton *)arg2;
- (void)authenticationEnterPasscodeKeyboardView:(FBAuthenticationEnterPasscodeKeyboardView *)arg1 didTapNumber:(NSString *)arg2;
@end

