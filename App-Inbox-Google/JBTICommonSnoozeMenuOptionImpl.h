//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTSnoozeMenuOption.h"

@class JBTSnoozeMenuOption_TitleTypeEnum, NSString;

@interface JBTICommonSnoozeMenuOptionImpl : NSObject <JBTSnoozeMenuOption>
{
    JBTSnoozeMenuOption_TitleTypeEnum *titleType_;
    id <JBTSnoozeConfig> snoozeConfig_;
    id <TMLTimeService> timeService_;
    NSString *suggestedDisplayString_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_suggestedDisplayString_;
+ (id)__annotations_snoozeConfig_;
+ (id)__annotations_equalsWithId__params;
+ (id)__annotations_getSnoozeConfig;
+ (id)__annotations_initWithJBTSnoozeMenuOption_TitleTypeEnum_withJBTSnoozeConfig_withTMLTimeService_withNSString__params;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)getSnoozeConfig;
- (BOOL)hasSnoozeConfig;
- (id)getFlexibleTimeConstraints;
- (BOOL)hasFlexibleTimeConstraints;
- (id)getDefaultTimeFormat;
- (id)getLastSnoozeTimeFormat;
- (id)getTimeFormat;
- (id)getSuggestedDisplayString;
- (BOOL)hasSuggestedDisplayString;
- (id)getLocationToDisplay;
- (BOOL)hasLocation;
- (id)getFormattedTimestamp;
- (long long)getTimestampMs;
- (long long)getTimestamp;
- (BOOL)hasTimestampToDisplay;
- (BOOL)hasTimestamp;
- (id)getTitleType;
- (id)initWithJBTSnoozeMenuOption_TitleTypeEnum:(id)arg1 withJBTSnoozeConfig:(id)arg2 withTMLTimeService:(id)arg3 withNSString:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

