//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPAuthenticationHandler.h"

@class NSString;

@interface XMPPUserPassAuthenticationHandler : XMPPAuthenticationHandler
{
    NSString *_emailAddress;
    NSString *_password;
}

@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (id)authenticationPayloadItems;
- (id)validate;

@end

