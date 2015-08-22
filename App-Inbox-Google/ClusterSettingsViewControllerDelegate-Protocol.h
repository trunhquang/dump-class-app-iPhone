//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ClusterSettingsViewController;

@protocol ClusterSettingsViewControllerDelegate <NSObject>
- (void)dismissClusterSettingsViewController:(ClusterSettingsViewController *)arg1 withCompletion:(void (^)(void))arg2;
- (void)clusterSettingsViewController:(ClusterSettingsViewController *)arg1 didDeleteCluster:(id <JBTClusterConfig>)arg2;

@optional
- (void)clusterSettingsViewController:(ClusterSettingsViewController *)arg1 didCreateCluster:(id <JBTCustomClusterConfig>)arg2;
- (void)clusterSettingsViewControllerDidSwitchToIndividualVisibility:(ClusterSettingsViewController *)arg1;
- (void)clusterSettingsViewControllerDidDismiss:(ClusterSettingsViewController *)arg1;
@end

