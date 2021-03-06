//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonNetDefaultNetManager_EffectiveStateEnum, ComGoogleCumulusCommonNetStateProto_NetStateEnum;

@interface ComGoogleCumulusCommonNetNetStateMerger : NSObject
{
    id <ComGoogleCumulusCommonNetNetManager_Handler> handler_;
    id <JavaUtilMap> channels_;
    ComGoogleCumulusCommonNetDefaultNetManager_EffectiveStateEnum *currentEffectiveState_;
    ComGoogleCumulusCommonNetStateProto_NetStateEnum *currentState_;
}

+ (BOOL)isDisconnectedWithComGoogleCumulusCommonNetStateProto_NetStateEnum:(id)arg1;
+ (BOOL)isTestingWithComGoogleCumulusCommonNetStateProto_NetStateEnum:(id)arg1;
+ (BOOL)isConnectingWithComGoogleCumulusCommonNetStateProto_NetStateEnum:(id)arg1;
+ (BOOL)isConnectedWithComGoogleCumulusCommonNetStateProto_NetStateEnum:(id)arg1;
- (void)dealloc;
- (id)getEffectiveState;
- (id)getExternalState;
- (void)onNetworkStateChangedWithComGoogleCumulusCommonNetStateProto_NetStateEnum:(id)arg1 withJavaLangInteger:(id)arg2 withComGoogleCumulusCommonErrorProto_ErrorInfo:(id)arg3;
- (id)initWithComGoogleCumulusCommonNetNetManager_Handler:(id)arg1 withJavaUtilMap:(id)arg2;

@end

