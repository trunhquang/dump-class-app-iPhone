//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NISnapshotRotation.h"

#import "NISnapshotRotationDelegate.h"

@class NSString;

@interface NITableViewSnapshotRotation : NISnapshotRotation <NISnapshotRotationDelegate>
{
    id <NISnapshotRotationDelegate> _forwardingDelegate;
}

@property(nonatomic) __weak id <NISnapshotRotationDelegate> forwardingDelegate; // @synthesize forwardingDelegate=_forwardingDelegate;
- (void).cxx_destruct;
- (struct UIEdgeInsets)fixedInsetsForSnapshotRotation:(id)arg1;
- (id)rotatingViewForSnapshotRotation:(id)arg1;
- (id)containerViewForSnapshotRotation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)shouldForwardSelectorToDelegate:(SEL)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

