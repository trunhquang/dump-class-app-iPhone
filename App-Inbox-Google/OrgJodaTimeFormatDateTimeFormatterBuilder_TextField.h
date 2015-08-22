//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrgJodaTimeFormatDateTimeParser.h"
#import "OrgJodaTimeFormatDateTimePrinter.h"

@class NSString, OrgJodaTimeDateTimeFieldType;

@interface OrgJodaTimeFormatDateTimeFormatterBuilder_TextField : NSObject <OrgJodaTimeFormatDateTimePrinter, OrgJodaTimeFormatDateTimeParser>
{
    OrgJodaTimeDateTimeFieldType *iFieldType_;
    BOOL iShort_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (int)parseIntoWithOrgJodaTimeFormatDateTimeParserBucket:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3;
- (int)estimateParsedLength;
- (id)printWithOrgJodaTimeReadablePartial:(id)arg1 withJavaUtilLocale:(id)arg2;
- (id)printWithLong:(long long)arg1 withOrgJodaTimeChronology:(id)arg2 withJavaUtilLocale:(id)arg3;
- (void)printToWithJavaIoWriter:(id)arg1 withOrgJodaTimeReadablePartial:(id)arg2 withJavaUtilLocale:(id)arg3;
- (void)printToWithJavaLangStringBuffer:(id)arg1 withOrgJodaTimeReadablePartial:(id)arg2 withJavaUtilLocale:(id)arg3;
- (void)printToWithJavaIoWriter:(id)arg1 withLong:(long long)arg2 withOrgJodaTimeChronology:(id)arg3 withInt:(int)arg4 withOrgJodaTimeDateTimeZone:(id)arg5 withJavaUtilLocale:(id)arg6;
- (void)printToWithJavaLangStringBuffer:(id)arg1 withLong:(long long)arg2 withOrgJodaTimeChronology:(id)arg3 withInt:(int)arg4 withOrgJodaTimeDateTimeZone:(id)arg5 withJavaUtilLocale:(id)arg6;
- (int)estimatePrintedLength;
- (id)initWithOrgJodaTimeDateTimeFieldType:(id)arg1 withBoolean:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

