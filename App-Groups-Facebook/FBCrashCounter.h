//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPreferences;

@interface FBCrashCounter : NSObject
{
    FBPreferences *_preferences;
}

- (void).cxx_destruct;
- (void)synchronize;
@property(nonatomic) unsigned int backgroundCrashCount;
@property(nonatomic) unsigned int foregroundCrashCount;
@property(nonatomic) unsigned int startupCrashCount;
@property(nonatomic) unsigned int startupTimeoutCount;
- (id)initWithPreferences:(id)arg1;
- (id)init;

@end

