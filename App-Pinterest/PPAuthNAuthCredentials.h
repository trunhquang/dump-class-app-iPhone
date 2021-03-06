//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDate, NSDictionary, NSString;

@interface PPAuthNAuthCredentials : NSObject <NSCopying>
{
    BOOL _twoFactorEnabled;
    int _authNAuthCredentialsType;
    NSString *_accessToken;
    NSString *_tokenType;
    NSArray *_scope;
    NSDate *_expiration;
    NSArray *_authnSchemes;
    NSString *_code;
    NSString *_nonce;
    NSString *_visitorID;
    NSDictionary *_IDToken;
    NSArray *_twoFactorTokenIdentifers;
}

@property(retain, nonatomic) NSArray *twoFactorTokenIdentifers; // @synthesize twoFactorTokenIdentifers=_twoFactorTokenIdentifers;
@property(nonatomic) BOOL twoFactorEnabled; // @synthesize twoFactorEnabled=_twoFactorEnabled;
@property(retain, nonatomic) NSDictionary *IDToken; // @synthesize IDToken=_IDToken;
@property(retain, nonatomic) NSString *visitorID; // @synthesize visitorID=_visitorID;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSArray *authnSchemes; // @synthesize authnSchemes=_authnSchemes;
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSArray *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) int authNAuthCredentialsType; // @synthesize authNAuthCredentialsType=_authNAuthCredentialsType;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqualToCredentials:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)updateNonce:(id)arg1;
- (void)updateWithCredentials:(id)arg1 authNAuthType:(int)arg2;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) BOOL isAccessTokenValid;

@end

