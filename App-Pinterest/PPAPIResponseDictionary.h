//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PPAPIResponseDictionary : NSObject
{
    NSDictionary *_response;
}

+ (id)filterResponse:(id)arg1 type:(int)arg2;
+ (id)responseTypeString:(int)arg1;
+ (id)responseWithType:(int)arg1 response:(id)arg2 environment:(id)arg3;
@property(retain, nonatomic) NSDictionary *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(int)arg1 response:(id)arg2 environemnt:(id)arg3;

@end

