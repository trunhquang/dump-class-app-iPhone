//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonSapiCallback.h"

@class ComGoogleAppsBigtopSyncClientImplSettingsCumulusSettingsFetcher_SettingsFetcherCallback, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSettingsCumulusSettingsFetcher_$1 : NSObject <JBTICommonSapiCallback>
{
    ComGoogleAppsBigtopSyncClientImplSettingsCumulusSettingsFetcher_SettingsFetcherCallback *val$mergingCallback_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopSyncClientImplSettingsCumulusSettingsFetcher_SettingsFetcherCallback:(id)arg1;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1 withJBTSpan:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

