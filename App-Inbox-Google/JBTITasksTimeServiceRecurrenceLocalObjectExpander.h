//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTITasksRecurrenceLocalObjectExpander.h"

@class JBTITasksTaskThreadBuilder, NSString;

@interface JBTITasksTimeServiceRecurrenceLocalObjectExpander : NSObject <JBTITasksRecurrenceLocalObjectExpander>
{
    id <TMLTimeService> timeService_;
    id <TMLRecurrenceExpander> expander_;
    JBTITasksTaskThreadBuilder *taskThreadBuilder_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_NO_DATE_TIME_;
+ (void)initialize;
- (void)dealloc;
- (id)toDateTimeWithTMLDateTime:(id)arg1 withComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg2;
- (long long)getUtcMillisForInstanceIdWithTMLDateTime:(id)arg1 withComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg2;
- (id)buildInstanceThreadWithComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg1 withTMLDateTime:(id)arg2 withLong:(long long)arg3;
- (id)buildMasterThreadWithComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg1 withTMLDateTime:(id)arg2 withLong:(long long)arg3;
- (id)getDailyOffsetWithComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg1;
- (id)getStartDateMidnightWithComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg1;
- (id)expandWithComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg1 withLong:(long long)arg2;
- (id)initWithTMLTimeService:(id)arg1 withTMLRecurrenceExpander:(id)arg2 withJBTITasksTaskThreadBuilder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

