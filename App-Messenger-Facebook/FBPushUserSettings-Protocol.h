//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol FBPushUserSettings <NSObject>
- (void)saveSettings;
- (void)setAPNSDevToken:(NSData *)arg1;
- (BOOL)getShouldRegisterForPush;
- (void)setShouldRegisterForPush:(BOOL)arg1;
@end
