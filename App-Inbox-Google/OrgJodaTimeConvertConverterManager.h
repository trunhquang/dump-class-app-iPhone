//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OrgJodaTimeConvertConverterSet;

@interface OrgJodaTimeConvertConverterManager : NSObject
{
    OrgJodaTimeConvertConverterSet *iInstantConverters_;
    OrgJodaTimeConvertConverterSet *iPartialConverters_;
    OrgJodaTimeConvertConverterSet *iDurationConverters_;
    OrgJodaTimeConvertConverterSet *iPeriodConverters_;
    OrgJodaTimeConvertConverterSet *iIntervalConverters_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getInstance;
- (void)dealloc;
- (id)description;
- (void)checkAlterIntervalConverters;
- (id)removeIntervalConverterWithOrgJodaTimeConvertIntervalConverter:(id)arg1;
- (id)addIntervalConverterWithOrgJodaTimeConvertIntervalConverter:(id)arg1;
- (id)getIntervalConverters;
- (id)getIntervalConverterWithId:(id)arg1;
- (void)checkAlterPeriodConverters;
- (id)removePeriodConverterWithOrgJodaTimeConvertPeriodConverter:(id)arg1;
- (id)addPeriodConverterWithOrgJodaTimeConvertPeriodConverter:(id)arg1;
- (id)getPeriodConverters;
- (id)getPeriodConverterWithId:(id)arg1;
- (void)checkAlterDurationConverters;
- (id)removeDurationConverterWithOrgJodaTimeConvertDurationConverter:(id)arg1;
- (id)addDurationConverterWithOrgJodaTimeConvertDurationConverter:(id)arg1;
- (id)getDurationConverters;
- (id)getDurationConverterWithId:(id)arg1;
- (void)checkAlterPartialConverters;
- (id)removePartialConverterWithOrgJodaTimeConvertPartialConverter:(id)arg1;
- (id)addPartialConverterWithOrgJodaTimeConvertPartialConverter:(id)arg1;
- (id)getPartialConverters;
- (id)getPartialConverterWithId:(id)arg1;
- (void)checkAlterInstantConverters;
- (id)removeInstantConverterWithOrgJodaTimeConvertInstantConverter:(id)arg1;
- (id)addInstantConverterWithOrgJodaTimeConvertInstantConverter:(id)arg1;
- (id)getInstantConverters;
- (id)getInstantConverterWithId:(id)arg1;
- (id)init;

@end

