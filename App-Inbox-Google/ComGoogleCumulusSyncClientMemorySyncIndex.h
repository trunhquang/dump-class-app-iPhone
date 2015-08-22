//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientUpdateableSyncIndex.h"

@class NSString;

@interface ComGoogleCumulusSyncClientMemorySyncIndex : NSObject <ComGoogleCumulusSyncClientUpdateableSyncIndex>
{
    id <JavaUtilMap> syncIndexes_;
    id <ComGoogleCumulusApiPluginRanker> ranker_;
}

- (void)dealloc;
- (void)removeQueriesWithNSString:(id)arg1 withJavaUtilSet:(id)arg2;
- (void)clear;
- (void)removeWithNSString:(id)arg1 withComGoogleCumulusApiTypeObjectReader:(id)arg2;
- (void)updateWithNSString:(id)arg1 withComGoogleCumulusApiTypeObjectReader:(id)arg2 withComGoogleCumulusSyncClientObjectUpdate:(id)arg3;
- (id)getOutsideBoundsSyncIndexWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)getSyncIndexWithNSString:(id)arg1;
- (id)getReverseSyncIndexWithNSString:(id)arg1;
- (id)initWithComGoogleCumulusApiPluginRanker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

