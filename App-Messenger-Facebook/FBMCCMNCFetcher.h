//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBCarrier, NSObject<OS_dispatch_queue>, NSString;

@interface FBMCCMNCFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    FBCarrier *_carrier;
}

@property(retain, nonatomic) FBCarrier *carrier; // @synthesize carrier=_carrier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *MCCMNC;
- (id)init;

@end

