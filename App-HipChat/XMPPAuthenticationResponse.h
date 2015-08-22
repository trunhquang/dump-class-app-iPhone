//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSError, NSString;

@interface XMPPAuthenticationResponse : NSObject <NSCopying>
{
    BOOL _success;
    NSError *_error;
    NSString *_apiHost;
    NSString *_chatHost;
    NSString *_mucHost;
    NSString *_webHost;
    NSString *_apiAuthToken;
    NSString *_userJID;
}

+ (id)failedAuthResponseWithError:(id)arg1;
+ (id)successfulAuthResponseWithAPIHost:(id)arg1 chatHost:(id)arg2 mucHost:(id)arg3 webHost:(id)arg4 apiAuthToken:(id)arg5 userJID:(id)arg6;
@property(copy, nonatomic) NSString *userJID; // @synthesize userJID=_userJID;
@property(copy, nonatomic) NSString *apiAuthToken; // @synthesize apiAuthToken=_apiAuthToken;
@property(copy, nonatomic) NSString *webHost; // @synthesize webHost=_webHost;
@property(copy, nonatomic) NSString *mucHost; // @synthesize mucHost=_mucHost;
@property(copy, nonatomic) NSString *chatHost; // @synthesize chatHost=_chatHost;
@property(copy, nonatomic) NSString *apiHost; // @synthesize apiHost=_apiHost;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSuccess:(BOOL)arg1 error:(id)arg2 apiHost:(id)arg3 chatHost:(id)arg4 mucHost:(id)arg5 webHost:(id)arg6 apiAuthToken:(id)arg7 userJID:(id)arg8;

@end

