//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopServicesGmailTimeAdaptor.h"

@class NSString;

@interface ComGoogleAppsBigtopDataItemsStorageTimeServiceTimeAdaptor : NSObject <ComGoogleAppsBigtopServicesGmailTimeAdaptor>
{
    id <TMLTimeService> timeService_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithTMLTimeService_;
- (void)dealloc;
- (int)getTimeZoneOffsetWithLong:(long long)arg1;
- (long long)startOfWeekTimeMsWithLong:(long long)arg1;
- (long long)roundToStartOfDayWithLong:(long long)arg1;
- (id)initWithTMLTimeService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

