//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNRegistrationConfirmationCodeViewController, MNRegistrationExistingAccount;

@protocol MNRegistrationConfirmationCodeViewControllerDelegate <NSObject>
- (void)registrationConfirmationCodeViewController:(MNRegistrationConfirmationCodeViewController *)arg1 didFindVerifiedAccount:(MNRegistrationExistingAccount *)arg2;
- (void)registrationConfirmationCodeViewController:(MNRegistrationConfirmationCodeViewController *)arg1 didVerifyConfirmationCodeForPhoneNumber:(id <FBPhoneNumber>)arg2;
- (void)registrationConfirmationCodeViewDidRequestPhoneNumberChange:(MNRegistrationConfirmationCodeViewController *)arg1;
@end
