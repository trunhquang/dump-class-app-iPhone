//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusCommonErrorProto_ErrorInfo, ComGoogleCumulusCommonNetStateProto_NetStateEnum;

@protocol ComGoogleCumulusCommonNetNetController <NSObject, JavaObject>
- (void)disconnectWithComGoogleCumulusCommonErrorProto_ErrorInfo:(ComGoogleCumulusCommonErrorProto_ErrorInfo *)arg1;
- (void)disconnect;
- (void)connect;
- (ComGoogleCumulusCommonNetStateProto_NetStateEnum *)getState;
@end

