//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNavigationCoordinator.h"

@class NSString;

@interface FBResolvableProxyingNavigationCoordinator : NSObject <FBNavigationCoordinator>
{
    id <FBNavigationCoordinator> _navigationCoordinator;
}

- (void).cxx_destruct;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)resolveWithNavigationCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

