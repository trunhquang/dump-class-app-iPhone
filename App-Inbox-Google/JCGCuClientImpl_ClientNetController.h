//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonNetNetController.h"

@class ComGoogleCumulusCommonNetStateProto_NetStateEnum, JCGCuClientImpl, NSString;

@interface JCGCuClientImpl_ClientNetController : NSObject <ComGoogleCumulusCommonNetNetController>
{
    JCGCuClientImpl *this$0_;
    ComGoogleCumulusCommonNetStateProto_NetStateEnum *lastKnownState_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)dispatchEnableWithBoolean:(BOOL)arg1;
- (void)disconnectWithComGoogleCumulusCommonErrorProto_ErrorInfo:(id)arg1;
- (void)disconnect;
- (void)connect;
- (id)getState;
- (id)initWithJCGCuClientImpl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

