//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GTLObject.h"

@class NSArray, NSNumber, NSString;

@interface GTLGmailListThreadsResponse : GTLObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(copy, nonatomic) NSString *nextPageToken; // @dynamic nextPageToken;
@property(retain, nonatomic) NSNumber *resultSizeEstimate; // @dynamic resultSizeEstimate;
@property(retain, nonatomic) NSArray *threads; // @dynamic threads;

@end

