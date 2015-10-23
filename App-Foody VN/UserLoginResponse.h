//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserProfileResponse.h"

@class LoginUser, NSString;

@interface UserLoginResponse : UserProfileResponse
{
    LoginUser *currentUser;
    NSString *_registerAction;
}

@property(copy, nonatomic) NSString *registerAction; // @synthesize registerAction=_registerAction;
@property(retain, nonatomic) LoginUser *currentUser; // @synthesize currentUser;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)getResponsedRegisterAction;
- (id)getResponsedLoginUser;
- (id)init;

@end

