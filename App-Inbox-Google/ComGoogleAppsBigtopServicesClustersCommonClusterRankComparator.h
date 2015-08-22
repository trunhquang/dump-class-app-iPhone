//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilComparator.h"

@class JBTCClusterIdentifier, JBTCTypeIdStringUtil, NSString;

@interface ComGoogleAppsBigtopServicesClustersCommonClusterRankComparator : NSObject <JavaUtilComparator>
{
    JBTCTypeIdStringUtil *typeIdStringUtil_;
    JBTCClusterIdentifier *clusterIdentifier_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)compareWithId:(id)arg1 withId:(id)arg2;
- (id)getRankWithNSString:(id)arg1;
- (id)getRankWithComGoogleAppsBigtopServicesClustersBigTopCluster:(id)arg1;
- (id)initWithJBTCClusterIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

