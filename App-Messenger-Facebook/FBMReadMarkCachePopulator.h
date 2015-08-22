//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMThreadSetObserver.h"

@class FBMReadMarkCache, NSString;

@interface FBMReadMarkCachePopulator : NSObject <FBMThreadSetObserver>
{
    FBMReadMarkCache *_serverCache;
    id <MNAuthenticationManager> _authenticationManager;
}

- (void).cxx_destruct;
- (void)_updateCacheForThread:(id)arg1;
- (void)threadSetWillClearAllThreads:(id)arg1;
- (void)threadSet:(id)arg1 didEvictThread:(id)arg2 forReason:(unsigned int)arg3;
- (void)threadSet:(id)arg1 didReplaceThreadWithThread:(id)arg2;
- (void)threadSet:(id)arg1 didAddThread:(id)arg2;
- (id)initWithServerCache:(id)arg1 authenticationManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
