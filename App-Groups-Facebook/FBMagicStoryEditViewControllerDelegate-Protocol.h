//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController<FBMagicStoryEditViewControllerProtocol>;

@protocol FBMagicStoryEditViewControllerDelegate <NSObject>
- (void)editViewController:(UIViewController<FBMagicStoryEditViewControllerProtocol> *)arg1 didScrollToItemAtIndex:(unsigned int)arg2;
- (void)editViewController:(UIViewController<FBMagicStoryEditViewControllerProtocol> *)arg1 didSetBurstBestFrameMode:(BOOL)arg2 burstBestFrame:(unsigned int)arg3 inBurstAtIndex:(unsigned int)arg4;
- (void)editViewController:(UIViewController<FBMagicStoryEditViewControllerProtocol> *)arg1 didRemoveAssetAtIndex:(unsigned int)arg2 fromBurstAtIndex:(unsigned int)arg3;
- (void)editViewController:(UIViewController<FBMagicStoryEditViewControllerProtocol> *)arg1 didRemoveAssetAtIndex:(unsigned int)arg2;
- (void)editViewControllerDidCancel:(UIViewController<FBMagicStoryEditViewControllerProtocol> *)arg1;
@end

