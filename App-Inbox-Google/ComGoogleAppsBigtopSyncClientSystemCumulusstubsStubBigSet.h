//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiBigSet.h"

@class ComGoogleCumulusFrameworkObjectHandleManager_Client, NSString;

@interface ComGoogleAppsBigtopSyncClientSystemCumulusstubsStubBigSet : NSObject <ComGoogleCumulusApiBigSet>
{
    ComGoogleCumulusFrameworkObjectHandleManager_Client *objectHandleManager_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)init;
- (id)deserializeObjectHandleWithNSString:(id)arg1;
- (BOOL)flushRequests;
- (id)createRemoteBatch;
- (id)createBatch;
- (id)createQueryWithComGoogleCumulusApiQueryObserver:(id)arg1 withComGoogleCumulusApiQuerySettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

