//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientSyncIndex_Iterator.h"

@class NSString;

@interface ComGoogleCumulusSyncClientSyncIndex_Iterator_$1 : NSObject <ComGoogleCumulusSyncClientSyncIndex_Iterator>
{
}

- (id)init;
- (void)advanceAsyncWithJavaLangRunnable:(id)arg1;
- (BOOL)advance;
- (id)getCurrentRank;
- (id)getCurrentId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

