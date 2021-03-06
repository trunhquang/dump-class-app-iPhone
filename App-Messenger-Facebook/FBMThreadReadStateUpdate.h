//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface FBMThreadReadStateUpdate : NSObject <NSCopying>
{
    unsigned int _subtype;
    unsigned long long _setRead_readUpToWatermarkTime;
    unsigned long long _setUnreadImplicit_newActionWatermarkTime;
}

+ (id)setUnreadImplicitWithNewActionWatermarkTime:(unsigned long long)arg1;
+ (id)setUnreadExplicit;
+ (id)setReadWithReadUpToWatermarkTime:(unsigned long long)arg1;
- (void)matchSetRead:(CDUnknownBlockType)arg1 setUnreadImplicit:(CDUnknownBlockType)arg2 setUnreadExplicit:(CDUnknownBlockType)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

