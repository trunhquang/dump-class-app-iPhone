//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RKCameraManager : RCTViewManager <RCTBridgeModule>
{
}

+ (id)__rct_export__250;
+ (void)load;
+ (id)moduleName;
- (void)takePhoto:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)view;

// Remaining properties
@property(nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

