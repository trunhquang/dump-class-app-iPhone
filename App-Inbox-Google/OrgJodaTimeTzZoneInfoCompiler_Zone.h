//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OrgJodaTimeTzZoneInfoCompiler_DateTimeOfYear;

@interface OrgJodaTimeTzZoneInfoCompiler_Zone : NSObject
{
    NSString *iName_;
    int iOffsetMillis_;
    NSString *iRules_;
    NSString *iFormat_;
    int iUntilYear_;
    OrgJodaTimeTzZoneInfoCompiler_DateTimeOfYear *iUntilDateTimeOfYear_;
    OrgJodaTimeTzZoneInfoCompiler_Zone *iNext_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)addToBuilderWithOrgJodaTimeTzZoneInfoCompiler_Zone:(id)arg1 withOrgJodaTimeTzDateTimeZoneBuilder:(id)arg2 withJavaUtilMap:(id)arg3;
- (void)dealloc;
- (id)description;
- (void)addToBuilderWithOrgJodaTimeTzDateTimeZoneBuilder:(id)arg1 withJavaUtilMap:(id)arg2;
- (void)chainWithJavaUtilStringTokenizer:(id)arg1;
- (id)initWithNSString:(id)arg1 withJavaUtilStringTokenizer:(id)arg2;
- (id)initWithJavaUtilStringTokenizer:(id)arg1;

@end

