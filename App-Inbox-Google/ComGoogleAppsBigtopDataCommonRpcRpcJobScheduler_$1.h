//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleAppsBigtopDataCommonRpcRpcJob, ComGoogleAppsBigtopDataCommonRpcRpcJobScheduler, NSString;

@interface ComGoogleAppsBigtopDataCommonRpcRpcJobScheduler_$1 : NSObject <JavaLangRunnable>
{
    ComGoogleAppsBigtopDataCommonRpcRpcJobScheduler *this$0_;
    ComGoogleAppsBigtopDataCommonRpcRpcJob *val$job_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataCommonRpcRpcJobScheduler:(id)arg1 withComGoogleAppsBigtopDataCommonRpcRpcJob:(id)arg2;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

