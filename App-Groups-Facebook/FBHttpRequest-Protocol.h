//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSURLRequest;

@protocol FBHttpRequest
@property(readonly, nonatomic) unsigned int hardTimeout;
@property(readonly, nonatomic) BOOL silentLoading;
@property(readonly, nonatomic) BOOL disableCustomProtocols;
@property(readonly, nonatomic) BOOL allowRetry;
@property(readonly, nonatomic) unsigned int priorityOrder;
@property(readonly, nonatomic) int priority;
@property(readonly, copy, nonatomic) NSString *logName;
@property(readonly, copy, nonatomic) NSString *logNamespace;
@property(readonly, nonatomic) NSURLRequest *request;
@end

