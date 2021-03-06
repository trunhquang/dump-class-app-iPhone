//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSData, NSURLRequest;

@interface AFBlockURLUploadOperation : NSOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
    NSURLRequest *_request;
    NSData *_data;
    CDUnknownBlockType _completionHandler;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)blockUploadOperationWithURLRequest:(id)arg1 fromData:(id)arg2 withURLSession:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)blockUploadOperationWithURLRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
@property BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
- (void).cxx_destruct;
- (void)finish;
- (void)cancel;
- (void)startConnection;
- (void)start;
- (BOOL)isConcurrent;
- (id)initWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

