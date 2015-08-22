//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBReceivedDataBufferDelegate.h"
#import "FBResponseHandling.h"
#import "FBResponseProcessorDelegate.h"

@class FBGraphBatchRequest, FBReceivedDataMemoryBuffer, FBResponseProcessor, FBResponseProcessorConfiguration, NSHTTPURLResponse, NSObject<OS_dispatch_queue>, NSString;

@interface FBBatchJSONResponseHandler : NSObject <FBResponseProcessorDelegate, FBReceivedDataBufferDelegate, FBResponseHandling>
{
    FBGraphBatchRequest *_batchRequest;
    FBResponseProcessor *_processor;
    FBResponseProcessorConfiguration *_configuration;
    id <FBDataDeserializing> _dataDeserializer;
    NSHTTPURLResponse *_HTTPURLResponse;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    FBReceivedDataMemoryBuffer *_receivedDataBuffer;
    BOOL _requireAllRequestsToSucceed;
    id <FBRequest> _request;
    id <FBResponseHandlerDelegate> _delegate;
}

@property(readonly, nonatomic) BOOL requireAllRequestsToSucceed; // @synthesize requireAllRequestsToSucceed=_requireAllRequestsToSucceed;
@property(nonatomic) __weak id <FBResponseHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <FBRequest> request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)responseProcessor:(id)arg1 didFailWithError:(id)arg2;
- (void)responseProcessor:(id)arg1 didProcessResponse:(id)arg2;
- (void)receivedDataBuffer:(id)arg1 didFailWithError:(id)arg2;
- (void)receivedDataBuffer:(id)arg1 didReceiveData:(id)arg2;
- (void)abort;
- (void)close;
- (void)handleData:(id)arg1;
- (void)open;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 HTTPURLResponse:(id)arg2 callbackQueue:(id)arg3 requireAllRequestsToSucceed:(BOOL)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
