//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PPAuthNAuthCredentials, PPZebraCreditCardInfo;

@interface PPEnvironmentState : NSObject
{
    NSString *_clientId;
    NSString *_environment;
    NSString *_userPayPalEmail;
    NSString *_userPayPalPhoneCountryCode;
    NSString *_userPayPalPhoneNumber;
    int _previousAuthMethod;
    PPAuthNAuthCredentials *_preAuthCredentials;
    PPAuthNAuthCredentials *_currentAuthCredentials;
    NSString *_paypalUserDisplayString;
    PPZebraCreditCardInfo *_creditCard;
    NSString *_deviceGUID;
}

@property(copy, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
@property(retain, nonatomic) PPZebraCreditCardInfo *creditCard; // @synthesize creditCard=_creditCard;
@property(copy, nonatomic) NSString *paypalUserDisplayString; // @synthesize paypalUserDisplayString=_paypalUserDisplayString;
@property(copy, nonatomic) PPAuthNAuthCredentials *currentAuthCredentials; // @synthesize currentAuthCredentials=_currentAuthCredentials;
@property(copy, nonatomic) PPAuthNAuthCredentials *preAuthCredentials; // @synthesize preAuthCredentials=_preAuthCredentials;
@property(nonatomic) int previousAuthMethod; // @synthesize previousAuthMethod=_previousAuthMethod;
@property(copy, nonatomic) NSString *userPayPalPhoneNumber; // @synthesize userPayPalPhoneNumber=_userPayPalPhoneNumber;
@property(copy, nonatomic) NSString *userPayPalPhoneCountryCode; // @synthesize userPayPalPhoneCountryCode=_userPayPalPhoneCountryCode;
@property(copy, nonatomic) NSString *userPayPalEmail; // @synthesize userPayPalEmail=_userPayPalEmail;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (id)description;
- (void)writeCreditCardInfoToKeychain:(id)arg1;
- (id)readCreditCardInfoFromKeychain;
- (void)clearPersistentUserInfo;
- (void)clearPersistentCreditCardInfo;
- (void)storePersistentCreditCardInfo;
- (void)fetchPersistentCreditCardInfo;
- (void)clearPersistentLoginInfo;
- (void)storePersistentLoginInfo;
- (void)fetchPersistentLoginInfo;
@property(readonly, nonatomic) BOOL isAuthenticatedToPayPal;
- (id)unarchiveObjectForKey:(id)arg1;
- (void)archiveObject:(id)arg1 forKey:(id)arg2;
- (id)environmentBasedKey:(id)arg1;
- (id)initWithClientId:(id)arg1 environment:(id)arg2;

@end
