//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeFieldAbstractReadableInstantFieldProperty.h"

@class OrgJodaTimeDateTimeField, OrgJodaTimeLocalDateTime;

@interface OrgJodaTimeLocalDateTime_Property : OrgJodaTimeFieldAbstractReadableInstantFieldProperty
{
    OrgJodaTimeLocalDateTime *iInstant_;
    OrgJodaTimeDateTimeField *iField_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)roundHalfEvenCopy;
- (id)roundHalfCeilingCopy;
- (id)roundHalfFloorCopy;
- (id)roundCeilingCopy;
- (id)roundFloorCopy;
- (id)withMinimumValue;
- (id)withMaximumValue;
- (id)setCopyWithNSString:(id)arg1;
- (id)setCopyWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2;
- (id)setCopyWithInt:(int)arg1;
- (id)addWrapFieldToCopyWithInt:(int)arg1;
- (id)addToCopyWithLong:(long long)arg1;
- (id)addToCopyWithInt:(int)arg1;
- (id)getLocalDateTime;
- (id)getChronology;
- (long long)getMillis;
- (id)getField;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (id)initWithOrgJodaTimeLocalDateTime:(id)arg1 withOrgJodaTimeDateTimeField:(id)arg2;

@end

