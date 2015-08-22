//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CredentialStorage : NSObject
{
}

+ (void)clearLegacyiOSClient2AccountCredentialsForEmail:(id)arg1;
+ (id)legacyiOSClient2UserPasswordForEmail:(id)arg1;
+ (void)clearLegacyiOSClient3AccountCredentials;
+ (id)legacyiOSClient3UserPassword;
+ (void)clearLegacyOSXClientAccountCredentialsForEmail:(id)arg1 host:(id)arg2;
+ (id)legacyOSXClientUserPasswordForEmail:(id)arg1 host:(id)arg2;
+ (id)authTokenKeyForAccountID:(id)arg1;
+ (id)loginTokenKeyForAccountID:(id)arg1;
+ (id)passwordKeyForAccountID:(id)arg1;
+ (void)clearAuthenticationTokenForAccountID:(id)arg1;
+ (void)clearUserCredentialsForAccountID:(id)arg1;
+ (id)loginTokenForAccountID:(id)arg1;
+ (BOOL)setLoginToken:(id)arg1 forAccountID:(id)arg2;
+ (id)authenticationTokenForAccountID:(id)arg1;
+ (BOOL)setAuthenticationToken:(id)arg1 forAccountID:(id)arg2;
+ (id)passwordForAccountID:(id)arg1;
+ (BOOL)setPassword:(id)arg1 forAccountID:(id)arg2;
+ (void)removeItemForKey:(id)arg1;
+ (id)stringForKey:(id)arg1;
+ (BOOL)setString:(id)arg1 forKey:(id)arg2;
+ (void)initialize;

@end
