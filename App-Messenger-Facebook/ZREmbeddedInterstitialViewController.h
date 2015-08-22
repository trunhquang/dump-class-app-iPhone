//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ZRTariffedUxSentryDelegate.h"

@class ZREmbeddedInterstitialCoordinator, ZRTariffedUxSentry;

@interface ZREmbeddedInterstitialViewController : UIViewController <ZRTariffedUxSentryDelegate>
{
    id <FBProvider> _interstitialProvider;
    ZRTariffedUxSentry *_sentry;
    BOOL _avoidInterstitialIfPossible;
    BOOL _sharedActivationEnabled;
    ZREmbeddedInterstitialCoordinator *_coordinator;
}

@property(nonatomic) BOOL sharedActivationEnabled; // @synthesize sharedActivationEnabled=_sharedActivationEnabled;
@property(nonatomic) BOOL avoidInterstitialIfPossible; // @synthesize avoidInterstitialIfPossible=_avoidInterstitialIfPossible;
@property(readonly, retain, nonatomic) ZRTariffedUxSentry *sentry; // @synthesize sentry=_sentry;
@property(nonatomic) ZREmbeddedInterstitialCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)nonZeroRatedSessionUxMustDeactivate:(id)arg1;
- (void)nonZeroRatedSessionUxMayActivate:(id)arg1;
- (void)nonZeroRatedSessionDidFailToStart:(id)arg1;
- (void)activateSession;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (void)setView:(id)arg1;
- (void)dealloc;
- (id)initWithNonZeroRatedUxSentry:(id)arg1 interstitialProvider:(id)arg2;

@end
