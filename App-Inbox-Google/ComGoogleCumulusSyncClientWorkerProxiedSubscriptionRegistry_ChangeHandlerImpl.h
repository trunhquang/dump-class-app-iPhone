//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonSubscriptions_ChangeHandler.h"

@class ComGoogleCumulusSyncClientWorkerProxiedSubscriptionRegistry, NSString;

@interface ComGoogleCumulusSyncClientWorkerProxiedSubscriptionRegistry_ChangeHandlerImpl : NSObject <ComGoogleCumulusCommonSubscriptions_ChangeHandler>
{
    ComGoogleCumulusSyncClientWorkerProxiedSubscriptionRegistry *this$0_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientWorkerProxiedSubscriptionRegistry:(id)arg1;
- (void)onErrorWithJavaLangThrowable:(id)arg1;
- (void)onSubscriptionStatusChangeWithNSString:(id)arg1;
- (void)onSubscriptionChangeWithNSString:(id)arg1;
- (void)onInitialized;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

