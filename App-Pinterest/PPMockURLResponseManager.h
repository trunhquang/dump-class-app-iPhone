//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PPMockURLResponseManager : NSObject
{
    int _mockRequestCount;
    NSMutableDictionary *_mockResponses;
    NSArray *_mockSequence;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSArray *mockResponseSequence; // @synthesize mockResponseSequence=_mockSequence;
@property(retain, nonatomic) NSDictionary *mockResponses; // @synthesize mockResponses=_mockResponses;
- (void).cxx_destruct;
- (id)responseForRequest:(id)arg1 withData:(id *)arg2;

@end

