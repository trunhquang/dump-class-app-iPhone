//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ServerInteraction.h"

@class NSString;

@interface PrivateMessageUserInteraction : ServerInteraction
{
    NSString *_message;
    NSString *_userID;
}

@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)parameters;
- (id)path;
- (id)httpMethod;

@end
