//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOSBooleanArray;

@interface TMLByMonthDay : NSObject
{
    IOSBooleanArray *bymonthday_;
    IOSBooleanArray *bymonthdayInverse_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (BOOL)defined;
- (BOOL)allowsWithInt:(int)arg1 withInt:(int)arg2;
- (BOOL)allowsWithTMLDate:(id)arg1;
- (id)initWithComGoogleCalendarV2LibsProtoRecurrenceProto_RecurRulePart:(id)arg1;

@end

