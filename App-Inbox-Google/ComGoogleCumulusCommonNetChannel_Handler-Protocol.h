//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusCommonErrorProto_ErrorCodeEnum;

@protocol ComGoogleCumulusCommonNetChannel_Handler <NSObject, JavaObject>
- (void)onClose;
- (void)onErrorWithComGoogleCumulusCommonErrorProto_ErrorCodeEnum:(ComGoogleCumulusCommonErrorProto_ErrorCodeEnum *)arg1;
- (void)onMessageWithId:(id)arg1;
- (void)onOpenWithComGoogleCumulusCommonNetSocket:(id <ComGoogleCumulusCommonNetSocket>)arg1;
@end

