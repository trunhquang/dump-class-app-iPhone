//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSMutableSet, NSString, NSTimer;

@interface GBTWebViewPool : NSObject <UIWebViewDelegate>
{
    int maxWebViewsAssignedDuringInterval_;
    NSTimer *checkSizeTimer_;
    int targetRetainedWebViewsCount_;
    int webViewsAssigned_;
    NSMutableSet *webViews_;
    NSMutableSet *resettingWebViews_;
    BOOL replenishingScheduled_;
}

+ (id)sharedWebViewPool;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)startCheckSizeTimerIfNeeded;
- (void)checkSizeTimerFired:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)replenishWebviewsIfNeeded;
- (void)scheduleReplenishingIfNeeeded;
- (void)delayWebViewReplenishing;
- (id)emptyWebView;
- (void)shutdown;
- (void)returnWebView:(id)arg1;
- (id)requestWebView;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

