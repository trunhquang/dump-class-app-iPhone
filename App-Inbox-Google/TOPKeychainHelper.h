//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TOPKeychainHelper : NSObject
{
    NSString *keychainItem_;
    void *keychainAccessibility_;
}

@property(nonatomic) void *keychainAccessibility; // @synthesize keychainAccessibility=keychainAccessibility_;
- (void)removeClientLoginTokenForService:(id)arg1 userEmail:(id)arg2;
- (void)setClientLoginToken:(id)arg1 service:(id)arg2 userEmail:(id)arg3;
- (id)clientLoginTokenForService:(id)arg1 userEmail:(id)arg2;
- (void)removeClientLoginServicesFromKeychain;
- (void)writeClientLoginServicesToKeychain:(id)arg1;
- (id)clientLoginServicesFromKeychain;
- (void)removeActiveUserFromKeychain;
- (void)writeActiveUserToKeychain:(id)arg1;
- (id)activeUserFromKeychain;
- (void)removeAuthenticatedUsersFromKeychain;
- (void)writeAuthenticatedUsersToKeychain:(id)arg1;
- (id)authenticatedUsersFromKeychain;
- (id)keychainItemForEmail:(id)arg1;
- (id)keychainAccountForClientLoginWithEmail:(id)arg1;
- (void)dealloc;
- (id)initWithKeychainItem:(id)arg1;

@end

