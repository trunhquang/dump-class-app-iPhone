//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTFetchModeEnum, JBTSettingKey, NSString;

@protocol JBTSettings <NSObject, JavaObject>
- (void)getAllSettingsForDebuggingWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (void)preloadAllSettingsIntoCacheWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (void)setStringWithJBTSettingKey:(JBTSettingKey *)arg1 withNSString:(NSString *)arg2 withJBTCallback:(id <JBTCallback>)arg3 withJBTSpan:(id <JBTSpan>)arg4;
- (BOOL)isValidStringSettingValueWithNSString:(NSString *)arg1;
- (NSString *)getPreloadedStringWithJBTSettingKey:(JBTSettingKey *)arg1;
- (void)getStringWithModeWithJBTSettingKey:(JBTSettingKey *)arg1 withJBTFetchModeEnum:(JBTFetchModeEnum *)arg2 withJBTCallback:(id <JBTCallback>)arg3 withJBTSpan:(id <JBTSpan>)arg4;
- (void)getStringWithJBTSettingKey:(JBTSettingKey *)arg1 withJBTCallback:(id <JBTCallback>)arg2 withJBTSpan:(id <JBTSpan>)arg3;
- (void)setIntegerWithJBTSettingKey:(JBTSettingKey *)arg1 withInt:(int)arg2 withJBTCallback:(id <JBTCallback>)arg3 withJBTSpan:(id <JBTSpan>)arg4;
- (int)getPreloadedIntegerWithJBTSettingKey:(JBTSettingKey *)arg1;
- (void)getIntegerWithModeWithJBTSettingKey:(JBTSettingKey *)arg1 withJBTFetchModeEnum:(JBTFetchModeEnum *)arg2 withJBTCallback:(id <JBTCallback>)arg3 withJBTSpan:(id <JBTSpan>)arg4;
- (void)getIntegerWithJBTSettingKey:(JBTSettingKey *)arg1 withJBTCallback:(id <JBTCallback>)arg2 withJBTSpan:(id <JBTSpan>)arg3;
- (void)setBooleanWithJBTSettingKey:(JBTSettingKey *)arg1 withBoolean:(BOOL)arg2 withJBTCallback:(id <JBTCallback>)arg3 withJBTSpan:(id <JBTSpan>)arg4;
- (BOOL)getPreloadedBooleanWithJBTSettingKey:(JBTSettingKey *)arg1;
- (void)getBooleanWithModeWithJBTSettingKey:(JBTSettingKey *)arg1 withJBTFetchModeEnum:(JBTFetchModeEnum *)arg2 withJBTCallback:(id <JBTCallback>)arg3 withJBTSpan:(id <JBTSpan>)arg4;
- (void)getBooleanWithJBTSettingKey:(JBTSettingKey *)arg1 withJBTCallback:(id <JBTCallback>)arg2 withJBTSpan:(id <JBTSpan>)arg3;
@end

