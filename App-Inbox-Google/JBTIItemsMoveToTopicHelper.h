//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher, JBTIClustersClusterFetcher;

@interface JBTIItemsMoveToTopicHelper : NSObject
{
    JBTIClustersClusterFetcher *clusterFetcher_;
    ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher *settingsFetcher_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithJBTIClustersClusterFetcher_withComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher_;
+ (id)__annotations;
- (void)dealloc;
- (BOOL)canMoveToAtLeastOneTopicClusterWithJBTItem:(id)arg1 withJBTTopicTypeEnum:(id)arg2;
- (BOOL)isTopicEnabledWithJBTTopicTypeEnum:(id)arg1;
- (BOOL)canMoveItemToTopicWithJBTItem:(id)arg1 withJBTTopicTypeEnum:(id)arg2;
- (id)initWithJBTIClustersClusterFetcher:(id)arg1 withComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher:(id)arg2;

@end

