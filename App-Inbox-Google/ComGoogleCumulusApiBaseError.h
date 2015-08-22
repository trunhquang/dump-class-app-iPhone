//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonErrorProto_ErrorInfo;

@interface ComGoogleCumulusApiBaseError : NSObject
{
    ComGoogleCumulusCommonErrorProto_ErrorInfo *errorInfo_;
}

- (void)dealloc;
- (id)description;
- (id)getException;
- (BOOL)hasException;
- (BOOL)isTimeout;
- (BOOL)isFatal;
- (BOOL)isPermanent;
- (BOOL)isLocal;
- (id)getCumulusErrorCode;
- (id)getApplicationErrorCode;
- (BOOL)isApplicationError;
- (id)getDetail;
- (id)initWithComGoogleCumulusCommonErrorProto_ErrorInfo:(id)arg1;

@end

