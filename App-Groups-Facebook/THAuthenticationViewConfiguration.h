//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAuthenticationViewConfiguration.h"

@class FBGatekeeper, FBImageDownloader;

@interface THAuthenticationViewConfiguration : FBAuthenticationViewConfiguration
{
    FBImageDownloader *_imageDownloader;
    FBGatekeeper *_gatekeeper;
}

- (void).cxx_destruct;
- (int)preferredStatusBarStyle;
- (id)newLogoutView;
- (id)newAuthenticationView;
- (id)initWithImageDownloader:(id)arg1 gatekeeper:(id)arg2;

@end

