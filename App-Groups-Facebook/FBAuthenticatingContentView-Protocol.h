//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAuthenticationStoredUser, NSArray, NSString;

@protocol FBAuthenticatingContentView <NSObject>
@property(nonatomic) BOOL canShowAccountList;
@property(nonatomic) __weak id <FBAuthenticatingAction> delegate;
@property(nonatomic) unsigned int interfaceType;
- (void)updateViewStateForErrorReason:(unsigned int)arg1;
- (void)registerGoBackToAccountListTarget:(id)arg1 action:(SEL)arg2;
- (void)registerGoBackToAuthenticationTarget:(id)arg1 action:(SEL)arg2;
- (void)registerIgnoreSSOTarget:(id)arg1 action:(SEL)arg2;
- (void)setRegisteredNewUserLoginUsername:(NSString *)arg1;
- (void)setDefaultUsername:(NSString *)arg1;
- (void)setSsoDisplayName:(NSString *)arg1;
- (NSString *)usernameText;
- (void)setPasswordConfirmErrorMessage;
- (void)setPasswordErrorAndClearUserInput;
- (void)setPinErrorAndClearUserInput;
- (unsigned int)getDeviceBasedLoginAttempts;

@optional
- (void)animateAccountListViewExit;
- (void)setCurrentAuthenticationUser:(FBAuthenticationStoredUser *)arg1;
- (void)setDeviceBasedLoginUsers:(NSArray *)arg1;
- (void)registerDidSubmitSSOApprovalTarget:(id)arg1 action:(SEL)arg2;
- (void)updateUIWithSSOUser:(FBAuthenticationStoredUser *)arg1;
@end

