//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FBTestUsersManager : NSObject
{
    NSString *_appId;
    NSString *_appSecret;
    NSMutableDictionary *_accounts;
}

+ (id)sharedInstanceForAppId:(id)arg1 appSecret:(id)arg2;
- (void)fetchExistingTestAccounts:(CDUnknownBlockType)arg1;
- (id)appAccessToken;
- (id)userIdAndTokenOfExistingAccountWithPermissions:(id)arg1 skip:(id)arg2;
- (id)tokenDataForTokenString:(id)arg1 permissions:(id)arg2 userId:(id)arg3;
- (void)removeTestAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addTestAccountWithPermissions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestTestAccountTokensWithArraysOfPermissions:(id)arg1 createIfNotFound:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithAppId:(id)arg1 appSecret:(id)arg2;

@end

