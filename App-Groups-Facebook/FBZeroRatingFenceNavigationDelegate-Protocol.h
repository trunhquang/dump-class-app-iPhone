//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@protocol FBZeroRatingFenceNavigationDelegate <NSObject>
- (void)zeroRatingFence:(id <ZRTariffedUxSessionFence>)arg1 wantsToDismissInterstitialController:(UIViewController *)arg2;
- (void)zeroRatingFence:(id <ZRTariffedUxSessionFence>)arg1 wantsToPresentInterstitialController:(UIViewController *)arg2;
@end

