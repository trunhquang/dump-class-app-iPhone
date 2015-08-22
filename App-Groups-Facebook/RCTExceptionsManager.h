//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTExceptionsManager : NSObject <RCTBridgeModule>
{
    id <RCTExceptionsManagerDelegate> _delegate;
    unsigned int _reloadRetries;
    unsigned int _maxReloadAttempts;
}

+ (id)__rct_export__1033;
+ (id)__rct_export__912;
+ (id)__rct_export__521;
+ (id)__rct_export__400;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) unsigned int maxReloadAttempts; // @synthesize maxReloadAttempts=_maxReloadAttempts;
- (void).cxx_destruct;
- (void)reportUnhandledException:(id)arg1 stack:(id)arg2;
- (void)updateExceptionMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)reportFatalException:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)reportSoftException:(id)arg1 stack:(id)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

