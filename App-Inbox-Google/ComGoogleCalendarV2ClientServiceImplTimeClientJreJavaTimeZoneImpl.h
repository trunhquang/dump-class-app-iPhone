//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TMLTimeZone.h"

@class JavaUtilTimeZone, NSString;

@interface ComGoogleCalendarV2ClientServiceImplTimeClientJreJavaTimeZoneImpl : NSObject <TMLTimeZone>
{
    JavaUtilTimeZone *timeZone_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getDefault;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)getId;
- (int)getOffsetWithLong:(long long)arg1;
- (id)initWithNSString:(id)arg1;
- (id)initWithJavaUtilTimeZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

