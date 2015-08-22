//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangComparable.h"
#import "OrgJodaTimeReadablePartial.h"

@class NSString;

@interface OrgJodaTimeBaseAbstractPartial : NSObject <OrgJodaTimeReadablePartial, JavaLangComparable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)toStringWithOrgJodaTimeFormatDateTimeFormatter:(id)arg1;
- (BOOL)isEqualWithOrgJodaTimeReadablePartial:(id)arg1;
- (BOOL)isBeforeWithOrgJodaTimeReadablePartial:(id)arg1;
- (BOOL)isAfterWithOrgJodaTimeReadablePartial:(id)arg1;
- (int)compareToWithId:(id)arg1;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)toDateTimeWithOrgJodaTimeReadableInstant:(id)arg1;
- (int)indexOfSupportedWithOrgJodaTimeDurationFieldType:(id)arg1;
- (int)indexOfWithOrgJodaTimeDurationFieldType:(id)arg1;
- (int)indexOfSupportedWithOrgJodaTimeDateTimeFieldType:(id)arg1;
- (int)indexOfWithOrgJodaTimeDateTimeFieldType:(id)arg1;
- (BOOL)isSupportedWithOrgJodaTimeDateTimeFieldType:(id)arg1;
- (int)getWithOrgJodaTimeDateTimeFieldType:(id)arg1;
- (id)getValues;
- (id)getFields;
- (id)getFieldWithInt:(int)arg1;
- (id)getFieldTypes;
- (id)getFieldTypeWithInt:(int)arg1;
- (id)getFieldWithInt:(int)arg1 withOrgJodaTimeChronology:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

