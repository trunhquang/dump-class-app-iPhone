//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleAppsBigtopServicesSmartmailSmartMailMetricsProto_SmartMailClick, JBTCBigTopCommonEnums_MetricEnum, JBTSmartMailComponent_ViewModeEnum, JCSAssignedId, NSString;

@protocol JBTISmartMailSmartMailMetricsRecorder <NSObject, JavaObject>
- (void)endSession;
- (void)flush;
- (void)recordSmartMailViewWithJBTSmartMailComponent_ViewModeEnum:(JBTSmartMailComponent_ViewModeEnum *)arg1 withNSString:(NSString *)arg2 withJCSAssignedId:(JCSAssignedId *)arg3 withBoolean:(BOOL)arg4 withNSString:(NSString *)arg5;
- (void)recordSmartMailClickWithComGoogleAppsBigtopServicesSmartmailSmartMailMetricsProto_SmartMailClick:(ComGoogleAppsBigtopServicesSmartmailSmartMailMetricsProto_SmartMailClick *)arg1;
- (void)recordMetricWithJBTCBigTopCommonEnums_MetricEnum:(JBTCBigTopCommonEnums_MetricEnum *)arg1;
@end

