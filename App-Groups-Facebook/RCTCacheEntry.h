//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RCTCacheEntry : NSObject
{
    NSObject *_object;
    unsigned int _cost;
    int _sequenceNumber;
}

@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned int cost; // @synthesize cost=_cost;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
- (void).cxx_destruct;

@end

