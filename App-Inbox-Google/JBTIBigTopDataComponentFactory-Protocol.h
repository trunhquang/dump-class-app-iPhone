//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTCBigTopApplicationInfo, JBTIBigTopDataComponent;

@protocol JBTIBigTopDataComponentFactory <NSObject, JavaObject>
- (JBTIBigTopDataComponent *)create;
- (void)setStartOfflineWithBoolean:(BOOL)arg1;
- (void)setEventLoggingComponentWithComGoogleAppsBigtopSyncClientLoggingEventLoggingComponent:(id <ComGoogleAppsBigtopSyncClientLoggingEventLoggingComponent>)arg1;
- (void)setBigTopApplicationInfoWithJBTCBigTopApplicationInfo:(JBTCBigTopApplicationInfo *)arg1;
@end

