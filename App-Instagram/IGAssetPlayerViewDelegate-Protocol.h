//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAssetPlayerView;

@protocol IGAssetPlayerViewDelegate <NSObject>

@optional
- (void)assetPlayerView:(IGAssetPlayerView *)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)assetPlayerViewPlayStateDidChange:(IGAssetPlayerView *)arg1;
- (void)assetPlayerViewAssetLoaded:(IGAssetPlayerView *)arg1;
@end
