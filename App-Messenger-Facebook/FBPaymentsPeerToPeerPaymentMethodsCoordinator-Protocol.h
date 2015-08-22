//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMemPeerToPeerPaymentMethod, FBPaymentsPeerToPeerPaymentMethodDescription, NSString;

@protocol FBPaymentsPeerToPeerPaymentMethodsCoordinator <NSObject>
@property(readonly, nonatomic) id <FBPaymentsPeerToPeerPaymentMethodsDataFetcher> dataFetcher;
@property(readonly, nonatomic) id <FBPaymentsPeerToPeerPaymentMethodsDataLoader> dataLoader;
@property(readonly, nonatomic) id <FBPaymentsPeerToPeerPaymentMethodsDataMutator> dataMutator;
@property(readonly, copy, nonatomic) FBMemPeerToPeerPaymentMethod *presetPaymentMethod;
- (void)removeListener:(id <FBPaymentsPeerToPeerPaymentMethodsCoordinatorListener>)arg1;
- (void)addListener:(id <FBPaymentsPeerToPeerPaymentMethodsCoordinatorListener>)arg1;
- (void)updatePaymentMethodEligibility:(FBPaymentsPeerToPeerPaymentMethodDescription *)arg1 completion:(void (^)(BOOL, FBMemPeerToPeerPaymentMethod *, NSError *))arg2;
- (void)updatePaymentMethod:(FBPaymentsPeerToPeerPaymentMethodDescription *)arg1 completion:(void (^)(BOOL, FBMemPeerToPeerPaymentMethod *, NSError *))arg2;
- (void)removePaymentMethod:(FBPaymentsPeerToPeerPaymentMethodDescription *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)addPaymentMethod:(FBPaymentsPeerToPeerPaymentMethodDescription *)arg1 completion:(void (^)(BOOL, FBMemPeerToPeerPaymentMethod *, NSError *))arg2;
- (void)setPresetPaymentMethod:(FBPaymentsPeerToPeerPaymentMethodDescription *)arg1 withTransferFBID:(NSString *)arg2 completion:(void (^)(BOOL, FBMemPeerToPeerPaymentMethod *, NSError *))arg3;
- (void)loadPaymentMethods;
@end
