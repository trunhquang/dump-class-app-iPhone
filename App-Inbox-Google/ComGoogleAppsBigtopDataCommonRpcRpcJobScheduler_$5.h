//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentAsyncFunction.h"

@class ComGoogleAppsBigtopDataCommonRpcRpcJobPriorityEnum, ComGoogleAppsBigtopDataCommonRpcRpcJobScheduler, NSString;

@interface ComGoogleAppsBigtopDataCommonRpcRpcJobScheduler_$5 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataCommonRpcRpcJobScheduler *this$0_;
    ComGoogleAppsBigtopDataCommonRpcRpcJobPriorityEnum *val$minPriority_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataCommonRpcRpcJobScheduler:(id)arg1 withComGoogleAppsBigtopDataCommonRpcRpcJobPriorityEnum:(id)arg2;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

