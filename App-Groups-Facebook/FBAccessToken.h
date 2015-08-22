//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBAccessToken : NSObject <NSCopying>
{
    NSString *_token;
}

+ (id)loggedOutAccessTokenWithAppID:(id)arg1 appSecret:(id)arg2;
@property(readonly, copy) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_tokenIsValid;
- (id)description;
- (id)init;
- (id)initWithToken:(id)arg1;

@end

