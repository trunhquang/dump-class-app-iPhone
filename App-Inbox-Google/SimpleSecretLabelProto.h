//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData;

@interface SimpleSecretLabelProto : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int capabilityId; // @dynamic capabilityId;
@property(retain, nonatomic) NSData *genericLabel; // @dynamic genericLabel;
@property(nonatomic) BOOL hasCapabilityId; // @dynamic hasCapabilityId;
@property(nonatomic) BOOL hasGenericLabel; // @dynamic hasGenericLabel;
@property(nonatomic) BOOL hasInviteId; // @dynamic hasInviteId;
@property(nonatomic) BOOL hasType; // @dynamic hasType;
@property(nonatomic) long long inviteId; // @dynamic inviteId;
@property(nonatomic) int type; // @dynamic type;

@end

