//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HCCachedObject.h"

@class Credentials, NSString, NSURL, UIColor, XMPPJID;

@interface Account : NSObject <HCCachedObject>
{
    BOOL _autoSignIn;
    BOOL _plusPlan;
    BOOL _validateCert;
    NSString *_accountID;
    NSString *_apiHost;
    NSString *_chatHost;
    NSString *_groupID;
    NSURL *_groupAvatarURL;
    NSString *_host;
    NSString *_mucHost;
    NSString *_organizationName;
    NSString *_uriDomain;
    NSString *_userEmail;
    NSString *_userID;
    XMPPJID *_userJID;
    NSURL *_userLargePhotoURL;
    NSString *_userMentionName;
    NSString *_userName;
    NSURL *_userSmallPhotoURL;
    NSString *_webHost;
    double _timestampAdded;
}

@property(copy, nonatomic) NSString *webHost; // @synthesize webHost=_webHost;
@property(nonatomic) BOOL validateCert; // @synthesize validateCert=_validateCert;
@property(copy, nonatomic) NSURL *userSmallPhotoURL; // @synthesize userSmallPhotoURL=_userSmallPhotoURL;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userMentionName; // @synthesize userMentionName=_userMentionName;
@property(copy, nonatomic) NSURL *userLargePhotoURL; // @synthesize userLargePhotoURL=_userLargePhotoURL;
@property(copy, nonatomic) XMPPJID *userJID; // @synthesize userJID=_userJID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(copy, nonatomic) NSString *uriDomain; // @synthesize uriDomain=_uriDomain;
@property(nonatomic, getter=isPlusPlan) BOOL plusPlan; // @synthesize plusPlan=_plusPlan;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(copy, nonatomic) NSString *mucHost; // @synthesize mucHost=_mucHost;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) NSURL *groupAvatarURL; // @synthesize groupAvatarURL=_groupAvatarURL;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) double timestampAdded; // @synthesize timestampAdded=_timestampAdded;
@property(copy, nonatomic) NSString *chatHost; // @synthesize chatHost=_chatHost;
@property(nonatomic) BOOL autoSignIn; // @synthesize autoSignIn=_autoSignIn;
@property(copy, nonatomic) NSString *apiHost; // @synthesize apiHost=_apiHost;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isCustomHost;
@property(readonly, copy) NSString *description;
- (id)key;
- (id)proxyForJson;
- (id)fillWithJsonData:(id)arg1;
- (void)syncWithLegacyAccount:(id)arg1;
- (void)updateAutoSignIn:(BOOL)arg1;
- (void)updateFromStartupResponse:(id)arg1;
- (void)updateFromAuthenticationResponse:(id)arg1;
@property(readonly, nonatomic) UIColor *groupColor;
- (void)removeAPIAuthToken;
- (void)removeCredentials;
@property(readonly, copy, nonatomic) NSString *apiVersion;
@property(copy, nonatomic) NSString *apiAuthToken;
@property(readonly, nonatomic) Credentials *credentials;
@property(readonly, nonatomic) NSString *password;
- (id)hostURL;
- (void)updateWithCredentials:(id)arg1 host:(id)arg2 validateCert:(BOOL)arg3;
- (id)initWithCredentials:(id)arg1 host:(id)arg2 validateCert:(BOOL)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

