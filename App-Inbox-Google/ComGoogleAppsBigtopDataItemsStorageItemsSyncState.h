//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleAppsBigtopDataItemsStorageItemsSyncState : NSObject
{
    BOOL initialSyncCompleted_;
    long long lastSyncTimeMs_;
    long long lowWatermark_;
    long long highWatermark_;
    long long highestSyncedVersion_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (long long)getHighestSyncedVersion;
- (long long)getHighWatermark;
- (long long)getLowWatermark;
- (long long)getLastSyncTimeMs;
- (BOOL)getInitialSyncCompleted;
- (id)initWithBoolean:(BOOL)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withLong:(long long)arg5;

@end

