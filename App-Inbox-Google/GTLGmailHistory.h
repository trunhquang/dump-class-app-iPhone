//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GTLObject.h"

@class NSArray, NSNumber;

@interface GTLGmailHistory : GTLObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) NSNumber *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSArray *labelsAdded; // @dynamic labelsAdded;
@property(retain, nonatomic) NSArray *labelsRemoved; // @dynamic labelsRemoved;
@property(retain, nonatomic) NSArray *messages; // @dynamic messages;
@property(retain, nonatomic) NSArray *messagesAdded; // @dynamic messagesAdded;
@property(retain, nonatomic) NSArray *messagesDeleted; // @dynamic messagesDeleted;

@end

