//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, SmartMailThreadHeader;

@protocol SmartMailThreadHeaderDelegate <NSObject>
- (void)smartMailThreadHeader:(SmartMailThreadHeader *)arg1 changedExpandedState:(BOOL)arg2 atIndex:(unsigned int)arg3;
- (void)smartMailThreadHeader:(SmartMailThreadHeader *)arg1 changedState:(NSDictionary *)arg2;
@end

