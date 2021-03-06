//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol FBHttpExecutorListener <NSObject>

@optional
- (void)httpRequest:(id <FBHttpRequest>)arg1 didFailWithStatus:(id <FBHttpRequestStatus>)arg2 error:(NSError *)arg3 wasStarted:(BOOL)arg4;
- (void)httpRequest:(id <FBHttpRequest>)arg1 didCancelWithStatus:(id <FBHttpRequestStatus>)arg2 wasStarted:(BOOL)arg3;
- (void)httpRequest:(id <FBHttpRequest>)arg1 didSucceedWithStatus:(id <FBHttpRequestStatus>)arg2;
- (void)httpRequest:(id <FBHttpRequest>)arg1 didReceiveResponseWithStatus:(id <FBHttpRequestStatus>)arg2;
- (void)httpRequest:(id <FBHttpRequest>)arg1 willRetryWithStatus:(id <FBHttpRequestStatus>)arg2 error:(NSError *)arg3;
- (void)httpRequest:(id <FBHttpRequest>)arg1 didStartWithStatus:(id <FBHttpRequestStatus>)arg2;
- (void)httpRequestWasAdded:(id <FBHttpRequest>)arg1;
@end

