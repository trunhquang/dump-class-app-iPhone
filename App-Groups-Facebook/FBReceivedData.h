//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBReceivedDataProtocol.h"

@class NSData;

@interface FBReceivedData : NSObject <FBReceivedDataProtocol>
{
    NSData *_data;
}

- (void).cxx_destruct;
- (void)performRead:(CDUnknownBlockType)arg1;
- (unsigned int)length;
- (id)description;
- (id)init;
- (id)initWithData:(id)arg1;

@end

