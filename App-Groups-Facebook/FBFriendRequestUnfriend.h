//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSString;

@interface FBFriendRequestUnfriend : FBNetworkerRequest
{
    NSString *_uid;
    NSString *_reference;
}

- (void).cxx_destruct;
- (id)networkRequest;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithUID:(id)arg1 reference:(id)arg2 callbackPerformer:(id)arg3;

@end

