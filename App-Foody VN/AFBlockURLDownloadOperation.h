//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSURLRequest;

@interface AFBlockURLDownloadOperation : NSOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
    NSURLRequest *_request;
    CDUnknownBlockType _completionHandler;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)blockDownloadOperationWithURLRequest:(id)arg1 withURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)blockDownloadOperationWithURL:(id)arg1 withURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)blockDownloadOperationWithURLRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)blockDownloadOperationWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
@property BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
- (void).cxx_destruct;
- (void)finish;
- (void)cancel;
- (void)startConnection;
- (void)start;
- (BOOL)isConcurrent;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

