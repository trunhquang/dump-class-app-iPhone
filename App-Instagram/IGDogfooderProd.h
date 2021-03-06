//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDogfooder.h"

@class NSURL;

@interface IGDogfooderProd : IGDogfooder
{
    NSURL *_masterBuildOpenURL;
    NSURL *_rcBuildOpenURL;
}

@property(retain, nonatomic) NSURL *rcBuildOpenURL; // @synthesize rcBuildOpenURL=_rcBuildOpenURL;
@property(retain, nonatomic) NSURL *masterBuildOpenURL; // @synthesize masterBuildOpenURL=_masterBuildOpenURL;
- (void).cxx_destruct;
- (BOOL)isFBEmployee;
- (BOOL)canOpenRCBuild;
- (BOOL)canOpenMasterBuild;
- (BOOL)canOpenInternalBuild;
- (BOOL)shouldStoreLatestBuildInfoAfterUpdateCheck;
- (void)checkForUpdatesIfNeeded;
- (id)releaseChannelForUpdateCheck;
- (id)accessTokenForUpdateCheck;
- (BOOL)shouldBeUsingInternalBuild;

@end

