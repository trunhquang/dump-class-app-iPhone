//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeFieldAbstractPartialFieldProperty.h"

#import "JavaIoSerializable.h"

@class NSString, OrgJodaTimeYearMonthDay;

@interface OrgJodaTimeYearMonthDay_Property : OrgJodaTimeFieldAbstractPartialFieldProperty <JavaIoSerializable>
{
    OrgJodaTimeYearMonthDay *iYearMonthDay_;
    int iFieldIndex_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations;
- (void)dealloc;
- (id)withMinimumValue;
- (id)withMaximumValue;
- (id)setCopyWithNSString:(id)arg1;
- (id)setCopyWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2;
- (id)setCopyWithInt:(int)arg1;
- (id)addWrapFieldToCopyWithInt:(int)arg1;
- (id)addToCopyWithInt:(int)arg1;
- (int)get;
- (id)getYearMonthDay;
- (id)getReadablePartial;
- (id)getField;
- (id)initWithOrgJodaTimeYearMonthDay:(id)arg1 withInt:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

