//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TMLTimeAdapter : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)validateAllDayContractWithTMLDateTime:(id)arg1;
+ (long long)fromLocalMidnightToUtcMidnightWithTMLDateTime:(id)arg1;
+ (id)fromUtcMidnightToLocalMidnightWithComGoogleCalendarV2LibsProtoTimeProto_DateOrDateTime:(id)arg1 withTMLTimeService:(id)arg2;
+ (id)toServiceDateTimeWithTMLTimeService:(id)arg1 withComGoogleCalendarV2LibsProtoTimeProto_DateOrDateTime:(id)arg2;
+ (id)toProtoDateOrDateTimeWithTMLDateTime:(id)arg1 withBoolean:(BOOL)arg2 withNSString:(id)arg3;
+ (id)toProtoDateOrDateTimeWithTMLDateTime:(id)arg1 withBoolean:(BOOL)arg2 withTMLTimeZone:(id)arg3;
- (id)init;

@end

