//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplRpcRpcProto_RpcRequestHeader, ComGoogleAppsBigtopSyncClientImplRpcRpcProto_RpcResponseHeader_Builder, ComGoogleAppsBigtopSyncClientImplRpcServiceParameters;

@interface ComGoogleAppsBigtopSyncClientImplRpcRpcServerContext : NSObject
{
    ComGoogleAppsBigtopSyncClientImplRpcRpcProto_RpcRequestHeader *requestHeader_;
    ComGoogleAppsBigtopSyncClientImplRpcRpcProto_RpcResponseHeader_Builder *responseHeaderBuilder_;
    id <ComGoogleAppsBigtopSyncClientImplRpcRpcReceiver> responseReceiver_;
    ComGoogleAppsBigtopSyncClientImplRpcServiceParameters *serviceParams_;
    BOOL finished_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_sendErrorWithComGoogleNetUtilErrorCodes_CodeEnum_withNSString_withJavaLangThrowable__params;
+ (id)__annotations_finishWithErrorWithComGoogleNetUtilErrorCodes_CodeEnum_withNSString_withJavaLangThrowable__params;
+ (void)initialize;
- (void)dealloc;
- (id)getRequestSpanId;
- (id)getClientAddress;
- (void)sendErrorWithComGoogleNetUtilErrorCodes_CodeEnum:(id)arg1 withNSString:(id)arg2 withJavaLangThrowable:(id)arg3;
- (void)finishWithErrorWithComGoogleNetUtilErrorCodes_CodeEnum:(id)arg1 withNSString:(id)arg2 withJavaLangThrowable:(id)arg3;
- (void)finishWithErrorWithComGoogleNetUtilErrorCodes_CodeEnum:(id)arg1 withNSString:(id)arg2;
- (void)finishWithResponseWithComGoogleProtobufMessageLite:(id)arg1;
- (void)markFinished;
- (id)initWithComGoogleAppsBigtopSyncClientImplRpcRpcProto_RpcRequestHeader:(id)arg1 withComGoogleAppsBigtopSyncClientImplRpcRpcReceiver:(id)arg2 withComGoogleAppsBigtopSyncClientImplRpcServiceParameters:(id)arg3;

@end

