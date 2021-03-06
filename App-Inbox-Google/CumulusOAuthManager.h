//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CumulusOAuthManager : NSObject
{
    id <GTMFetcherAuthorizationProtocol> auth_;
    id <CumulusOAuthDelegate> delegate_;
    id <AuthCallback> callback_;
    NSString *userEmail_;
    BOOL invalid_;
}

+ (BOOL)isInvalidGrantError:(id)arg1;
+ (void)invalidateInstanceForUser:(id)arg1;
+ (id)getInstanceForUser:(id)arg1;
@property(retain, nonatomic) id <AuthCallback> callback; // @synthesize callback=callback_;
@property(retain, nonatomic) id <GTMFetcherAuthorizationProtocol> auth; // @synthesize auth=auth_;
@property(nonatomic) id <CumulusOAuthDelegate> delegate; // @synthesize delegate=delegate_;
@property(nonatomic, getter=isInvalid) BOOL invalid; // @synthesize invalid=invalid_;
- (void)accessTokenRefreshFailed:(id)arg1;
- (BOOL)skipAuth;
- (void)requireLogout;
- (void)completeLogin:(id)arg1;
- (void)authorizeRequest:(id)arg1;
- (BOOL)checkAuthorized:(id)arg1;
- (void)authenticate;
- (void)dealloc;
- (id)init;

@end

