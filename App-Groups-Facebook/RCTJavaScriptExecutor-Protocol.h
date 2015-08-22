//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTBridgeModule.h"
#import "RCTInvalidating.h"

@class NSArray, NSString, NSURL;

@protocol RCTJavaScriptExecutor <RCTInvalidating, RCTBridgeModule>
- (void)executeBlockOnJavaScriptQueue:(void (^)(void))arg1;
- (void)injectJSONText:(NSString *)arg1 asGlobalObjectNamed:(NSString *)arg2 callback:(void (^)(NSError *))arg3;
- (void)executeApplicationScript:(NSString *)arg1 sourceURL:(NSURL *)arg2 onComplete:(void (^)(NSError *))arg3;
- (void)executeJSCall:(NSString *)arg1 method:(NSString *)arg2 arguments:(NSArray *)arg3 callback:(void (^)(id, NSError *))arg4;
- (void)setUp;

@optional
- (void)executeAsyncBlockOnJavaScriptQueue:(void (^)(void))arg1;
@end

