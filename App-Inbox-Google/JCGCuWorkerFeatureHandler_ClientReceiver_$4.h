//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JCGCuCallback.h"

@class ComGoogleCumulusCommonWorkerControlProto_FeatureRequest, JCGCuWorkerFeatureHandler_ClientReceiver, NSString;

@interface JCGCuWorkerFeatureHandler_ClientReceiver_$4 : NSObject <JCGCuCallback>
{
    JCGCuWorkerFeatureHandler_ClientReceiver *this$0_;
    ComGoogleCumulusCommonWorkerControlProto_FeatureRequest *val$featureRequest_;
}

- (void)dealloc;
- (id)initWithJCGCuWorkerFeatureHandler_ClientReceiver:(id)arg1 withComGoogleCumulusCommonWorkerControlProto_FeatureRequest:(id)arg2;
- (void)onFailureWithJavaLangException:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

