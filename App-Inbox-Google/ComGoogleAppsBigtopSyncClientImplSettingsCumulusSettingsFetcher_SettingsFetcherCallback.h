//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplSettingsSettingsCache;

@interface ComGoogleAppsBigtopSyncClientImplSettingsCumulusSettingsFetcher_SettingsFetcherCallback : NSObject
{
    id <JBTICommonSapiCallback> fullResultsCallback_;
    id <JavaUtilSet> keysOfMissingSettings_;
    id <JavaUtilMap> mergedResults_;
    ComGoogleAppsBigtopSyncClientImplSettingsSettingsCache *cache_;
    id <JavaUtilSet> expectedCallers_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)onErrorWithJBTICommonSapiCallback:(id)arg1 withJBTError:(id)arg2;
- (void)onSuccessWithJBTICommonSapiCallback:(id)arg1 withJavaUtilList:(id)arg2 withJBTSpan:(id)arg3;
- (BOOL)hasFoundAllSettings;
- (id)initWithJavaUtilSet:(id)arg1 withJavaUtilMap:(id)arg2 withJBTICommonSapiCallback:(id)arg3 withComGoogleAppsBigtopSyncClientImplSettingsSettingsCache:(id)arg4 withJavaUtilSet:(id)arg5;

@end

