//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Presence, User;

@protocol UserDelegate <NSObject>

@optional
- (void)user:(User *)arg1 lastPresenceChanged:(Presence *)arg2;
@end
