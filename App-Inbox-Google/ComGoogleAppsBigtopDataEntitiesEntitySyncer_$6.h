//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentAsyncFunction.h"

@class ComGoogleAppsBigtopDataCommonCommonSyncProtos_SyncProgress, ComGoogleAppsBigtopDataEntitiesEntitySyncer, ComGoogleCommonCollectImmutableList, NSString;

@interface ComGoogleAppsBigtopDataEntitiesEntitySyncer_$6 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataEntitiesEntitySyncer *this$0_;
    ComGoogleAppsBigtopDataCommonCommonSyncProtos_SyncProgress *val$progressOfPreviousIterations_;
    ComGoogleCommonCollectImmutableList *val$changesToUpSync_;
    long long val$deadlineMs_;
    int val$syncIteration_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataEntitiesEntitySyncer:(id)arg1 withComGoogleAppsBigtopDataCommonCommonSyncProtos_SyncProgress:(id)arg2 withComGoogleCommonCollectImmutableList:(id)arg3 withLong:(long long)arg4 withInt:(int)arg5;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

