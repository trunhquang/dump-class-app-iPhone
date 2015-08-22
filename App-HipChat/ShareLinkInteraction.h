//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ServerInteraction.h"

@class NSString;

@interface ShareLinkInteraction : ServerInteraction
{
    NSString *_destinationId;
    NSString *_message;
    NSString *_shareLink;
    NSString *_destinationType;
}

@property(retain, nonatomic) NSString *destinationType; // @synthesize destinationType=_destinationType;
@property(copy, nonatomic) NSString *shareLink; // @synthesize shareLink=_shareLink;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *destinationId; // @synthesize destinationId=_destinationId;
- (void).cxx_destruct;
- (id)parameters;
- (id)path;
- (id)httpMethod;
- (id)initWithDestinationType:(id)arg1 requestCompletion:(CDUnknownBlockType)arg2;

@end

