//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsXplatLoggingEventsEventLogger.h"

@class ComGoogleAppsXplatLoggingEventsLoggingManager, NSString;

@interface ComGoogleAppsXplatLoggingEventsLoggingManager_$1 : NSObject <ComGoogleAppsXplatLoggingEventsEventLogger>
{
    ComGoogleAppsXplatLoggingEventsLoggingManager *this$0_;
    id <ComGoogleAppsXplatLoggingEventsLogHandler> val$handler_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsXplatLoggingEventsLoggingManager:(id)arg1 withComGoogleAppsXplatLoggingEventsLogHandler:(id)arg2;
- (void)logWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

