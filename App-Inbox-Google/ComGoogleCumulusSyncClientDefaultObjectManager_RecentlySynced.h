//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleCumulusSyncClientDefaultObjectManager_RecentlySynced : NSObject
{
    id <JavaUtilList> soids_;
    id <JavaUtilMap> syncedVersions_;
}

- (void)dealloc;
- (id)init;
- (id)getSyncedVersionWithNSString:(id)arg1;
- (void)addSyncedVersionWithNSString:(id)arg1 withNSString:(id)arg2;

@end

