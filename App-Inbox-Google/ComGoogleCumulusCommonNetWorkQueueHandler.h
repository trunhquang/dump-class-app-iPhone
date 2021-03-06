//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonNetChannel_Handler.h"

@class NSString;

@interface ComGoogleCumulusCommonNetWorkQueueHandler : NSObject <ComGoogleCumulusCommonNetChannel_Handler>
{
    id <ComGoogleCumulusCommonNetChannel_Handler> handler_;
    id <JCGCuWorkQueue> workQueue_;
}

- (void)dealloc;
- (void)onOpenWithComGoogleCumulusCommonNetSocket:(id)arg1;
- (void)onMessageWithId:(id)arg1;
- (void)onErrorWithComGoogleCumulusCommonErrorProto_ErrorCodeEnum:(id)arg1;
- (void)onClose;
- (id)initWithComGoogleCumulusCommonNetChannel_Handler:(id)arg1 withJCGCuWorkQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

