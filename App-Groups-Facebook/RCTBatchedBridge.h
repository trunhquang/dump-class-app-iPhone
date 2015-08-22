//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTBridge.h"

@class CADisplayLink, NSMutableArray, NSMutableSet, RCTModuleMap, RCTSparseArray;

@interface RCTBatchedBridge : RCTBridge
{
    BOOL _loading;
    id <RCTJavaScriptExecutor> _javaScriptExecutor;
    NSMutableArray *_moduleDataByID;
    RCTModuleMap *_modulesByName;
    CADisplayLink *_mainDisplayLink;
    CADisplayLink *_jsDisplayLink;
    NSMutableSet *_frameUpdateObservers;
    NSMutableArray *_scheduledCalls;
    RCTSparseArray *_scheduledCallbacks;
    BOOL _valid;
    RCTBridge *_parentBridge;
}

@property(nonatomic) __weak RCTBridge *parentBridge; // @synthesize parentBridge=_parentBridge;
- (void).cxx_destruct;
- (void)stopProfiling;
- (void)startProfiling;
- (void)_mainThreadUpdate:(id)arg1;
- (void)_jsThreadUpdate:(id)arg1;
- (BOOL)_handleRequestNumber:(unsigned int)arg1 moduleID:(unsigned int)arg2 methodID:(unsigned int)arg3 params:(id)arg4;
- (void)_handleBuffer:(id)arg1;
- (void)_actuallyInvokeAndProcessModule:(id)arg1 method:(id)arg2 arguments:(id)arg3;
- (void)_invokeAndProcessModule:(id)arg1 method:(id)arg2 arguments:(id)arg3;
- (void)enqueueApplicationScript:(id)arg1 url:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)_immediatelyCallTimer:(id)arg1;
- (void)enqueueJSCall:(id)arg1 args:(id)arg2;
- (void)invalidate;
- (id)modules;
- (void)initJS;
- (void)registerModules;
- (BOOL)isValid;
- (BOOL)isLoading;
- (id)delegate;
- (void)setBundleURL:(id)arg1;
- (id)bundleURL;
- (void)setExecutorClass:(Class)arg1;
- (Class)executorClass;
- (void)reload;
- (void)bindKeys;
- (void)setUp;
- (id)initWithBundleURL:(id)arg1 moduleProvider:(CDUnknownBlockType)arg2 launchOptions:(id)arg3;
- (id)initWithParentBridge:(id)arg1;

@end

