//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"

@class NSLock, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURLSession;

@interface PINURLSessionManager : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSObject<OS_dispatch_queue> *_completionQueue;
    id <PINURLSessionManagerDelegate> _delegate;
    NSLock *_sessionManagerLock;
    NSURLSession *_session;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_completions;
}

@property(retain, nonatomic) NSMutableDictionary *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSLock *sessionManagerLock; // @synthesize sessionManagerLock=_sessionManagerLock;
@property __weak id <PINURLSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)unlock;
- (void)lock;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateSessionAndCancelTasks;
- (id)initWithSessionConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

