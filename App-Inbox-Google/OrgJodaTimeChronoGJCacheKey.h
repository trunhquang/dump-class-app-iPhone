//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OrgJodaTimeDateTimeZone, OrgJodaTimeInstant;

@interface OrgJodaTimeChronoGJCacheKey : NSObject
{
    OrgJodaTimeDateTimeZone *zone_;
    OrgJodaTimeInstant *cutoverInstant_;
    int minDaysInFirstWeek_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithOrgJodaTimeDateTimeZone:(id)arg1 withOrgJodaTimeInstant:(id)arg2 withInt:(int)arg3;

@end

