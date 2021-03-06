//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeConvertAbstractConverter.h"

#import "OrgJodaTimeConvertDurationConverter.h"
#import "OrgJodaTimeConvertIntervalConverter.h"
#import "OrgJodaTimeConvertPeriodConverter.h"

@class NSString;

@interface OrgJodaTimeConvertReadableIntervalConverter : OrgJodaTimeConvertAbstractConverter <OrgJodaTimeConvertIntervalConverter, OrgJodaTimeConvertDurationConverter, OrgJodaTimeConvertPeriodConverter>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (id)getSupportedType;
- (void)setIntoWithOrgJodaTimeReadWritableInterval:(id)arg1 withId:(id)arg2 withOrgJodaTimeChronology:(id)arg3;
- (BOOL)isReadableIntervalWithId:(id)arg1 withOrgJodaTimeChronology:(id)arg2;
- (void)setIntoWithOrgJodaTimeReadWritablePeriod:(id)arg1 withId:(id)arg2 withOrgJodaTimeChronology:(id)arg3;
- (long long)getDurationMillisWithId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

