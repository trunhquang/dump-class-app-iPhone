//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface RetentionSpec : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *context; // @dynamic context;
@property(nonatomic) int desiredRetention; // @dynamic desiredRetention;
@property(nonatomic) BOOL hasContext; // @dynamic hasContext;
@property(nonatomic) BOOL hasDesiredRetention; // @dynamic hasDesiredRetention;

@end

