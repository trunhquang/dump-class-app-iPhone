//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@protocol JBTTime <NSObject, JavaObject>
- (BOOL)isFloatingTime;
- (BOOL)isDateOnly;
- (int)getTimeZoneOffsetMinutes;
- (BOOL)hasTimeZoneOffsetMinutes;
- (long long)getSeconds;
@end

