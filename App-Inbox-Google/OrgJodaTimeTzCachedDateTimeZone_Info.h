//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OrgJodaTimeDateTimeZone;

@interface OrgJodaTimeTzCachedDateTimeZone_Info : NSObject
{
    long long iPeriodStart_;
    OrgJodaTimeDateTimeZone *iZoneRef_;
    OrgJodaTimeTzCachedDateTimeZone_Info *iNextInfo_;
    NSString *iNameKey_;
    int iOffset_;
    int iStandardOffset_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)getStandardOffsetWithLong:(long long)arg1;
- (int)getOffsetWithLong:(long long)arg1;
- (id)getNameKeyWithLong:(long long)arg1;
- (id)initWithOrgJodaTimeDateTimeZone:(id)arg1 withLong:(long long)arg2;

@end

