//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPaymentsPeerToPeerDataController.h"
#import "FBPaymentsPeerToPeerFetchControllerListener.h"

@class FBMemPeerToPeerPaymentPIN, FBPaymentsPeerToPeerDataControllerListenerAnnouncer, FBPaymentsPeerToPeerFetchController, FBUserPreferences, NSString;

@interface FBPaymentsPeerToPeerPaymentPinController : NSObject <FBPaymentsPeerToPeerFetchControllerListener, FBPaymentsPeerToPeerDataController>
{
    NSString *_currentUserFBID;
    FBPaymentsPeerToPeerFetchController *_fetchController;
    id <FBNetworkDispatch> _networkDispatcher;
    FBUserPreferences *_userPreferences;
    id _fetchToken;
    BOOL _hasFetched;
    FBPaymentsPeerToPeerDataControllerListenerAnnouncer *_listenerAnnouncer;
    int _paymentPinStatus;
    FBMemPeerToPeerPaymentPIN *_paymentPin;
}

@property(readonly, nonatomic) int paymentPinStatus; // @synthesize paymentPinStatus=_paymentPinStatus;
@property(copy, nonatomic) FBMemPeerToPeerPaymentPIN *paymentPin; // @synthesize paymentPin=_paymentPin;
- (void).cxx_destruct;
- (void)_handleRequestWithType:(int)arg1 error:(id)arg2 isCancelled:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleRequestWithType:(int)arg1 response:(id)arg2 isFinal:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleQuery:(id)arg1 dataTypes:(unsigned int)arg2 error:(id)arg3;
- (void)_handleQuery:(id)arg1 dataTypes:(unsigned int)arg2 response:(id)arg3 date:(id)arg4;
- (void)_setPaymentPin:(id)arg1 isOptimistic:(BOOL)arg2;
- (void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned int)arg4 error:(id)arg5;
- (void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned int)arg4 response:(id)arg5 date:(id)arg6;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)loadData;
@property(readonly, nonatomic) BOOL hasLoadedData;
- (void)performGraphRequestWithType:(int)arg1 oldPasscode:(id)arg2 newPasscode:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) BOOL hasSetPaymentPinBefore;
- (id)initWithCurrentUserFBID:(id)arg1 fetchController:(id)arg2 networkDispatcher:(id)arg3 userPreferences:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

