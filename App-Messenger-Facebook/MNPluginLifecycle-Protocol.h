//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession;

@protocol MNPluginLifecycle <NSObject>
- (void)stop;
- (void)startWithServices:(id <MNPluginServices>)arg1 session:(FBUserSession *)arg2;
@end

