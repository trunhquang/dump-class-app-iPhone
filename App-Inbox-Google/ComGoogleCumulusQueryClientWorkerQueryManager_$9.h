//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonNetRequestDispatcher_RequestCallback.h"

@class ComGoogleCumulusCommonNetNetRequest, ComGoogleCumulusQueryClientWorkerQueryManager, NSString;

@interface ComGoogleCumulusQueryClientWorkerQueryManager_$9 : NSObject <ComGoogleCumulusCommonNetRequestDispatcher_RequestCallback>
{
    ComGoogleCumulusQueryClientWorkerQueryManager *this$0_;
    ComGoogleCumulusCommonNetNetRequest *val$netRequest_;
    NSString *val$queryId_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusQueryClientWorkerQueryManager:(id)arg1 withComGoogleCumulusCommonNetNetRequest:(id)arg2 withNSString:(id)arg3;
- (void)onAbort;
- (void)onFailureWithComGoogleCumulusCommonErrorProto_ErrorInfo:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

