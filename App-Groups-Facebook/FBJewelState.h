//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBJewelState : NSObject
{
    BOOL _badgingEnabled;
    unsigned int _badgeCount;
}

@property(nonatomic) unsigned int badgeCount; // @synthesize badgeCount=_badgeCount;
@property(nonatomic) BOOL badgingEnabled; // @synthesize badgingEnabled=_badgingEnabled;
- (id)description;
@property(readonly, nonatomic) unsigned int visibleBadgeCount;
- (id)init;

@end

