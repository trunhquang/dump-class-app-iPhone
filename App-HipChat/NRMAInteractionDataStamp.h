//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface NRMAInteractionDataStamp : NSObject <NSCopying>
{
    NSString *_name;
    NSNumber *_startTimestamp;
    NSNumber *_duration;
}

@property(retain) NSNumber *duration; // @synthesize duration=_duration;
@property(retain) NSNumber *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)JSONObject;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

