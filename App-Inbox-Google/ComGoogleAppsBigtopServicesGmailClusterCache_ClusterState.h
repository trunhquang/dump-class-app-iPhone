//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopServicesClustersBigTopCluster;

@interface ComGoogleAppsBigtopServicesGmailClusterCache_ClusterState : NSObject
{
    ComGoogleAppsBigtopServicesClustersBigTopCluster *cluster_;
    long long lastBumpTimeInMs_;
    BOOL isSuspended_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)fromBigTopClusterWithComGoogleAppsBigtopServicesClustersBigTopCluster:(id)arg1 withComGoogleAppsBigtopServicesGmailClusterThrottlingHelper:(id)arg2 withLong:(long long)arg3 withBoolean:(BOOL)arg4;
- (void)dealloc;
- (id)description;
- (BOOL)isSuspended;
- (long long)getLastBumpTimeInMs;
- (id)getCluster;
- (id)initWithComGoogleAppsBigtopServicesClustersBigTopCluster:(id)arg1 withLong:(long long)arg2 withBoolean:(BOOL)arg3;

@end

