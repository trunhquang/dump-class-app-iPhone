//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplContactsResolverContactAvatarScorer, ComGoogleAppsBigtopSyncClientImplContactsResolverEmailNormalizer, ComGoogleCumulusCommonCollectLRUCache;

@interface ComGoogleAppsBigtopSyncClientImplContactsResolverContactsCache : NSObject
{
    int maxSize_;
    ComGoogleAppsBigtopSyncClientImplContactsResolverEmailNormalizer *emailNormalizer_;
    ComGoogleCumulusCommonCollectLRUCache *contactsByEmailAddress_;
    ComGoogleAppsBigtopSyncClientImplContactsResolverContactAvatarScorer *contactAvatarScorer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getWithNSString_;
+ (void)initialize;
+ (id)getEmailsFromContactsQueryWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
+ (BOOL)isEmailsPredicateWithComGoogleCumulusQueryQueryProto_Query_Predicate:(id)arg1;
+ (BOOL)isContactsQueryWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
- (void)dealloc;
- (void)addPreloadedResultsWithJavaUtilList:(id)arg1 withComGoogleCumulusApiBigSet:(id)arg2 withJBTIContactsContactImpl_Factory:(id)arg3;
- (id)chooseBestContactForEmailWithNSString:(id)arg1 withJBTIContactsContactImpl:(id)arg2 withJBTIContactsContactImpl:(id)arg3;
- (void)addOrReplaceContactWithNSString:(id)arg1 withJBTIContactsContactImpl:(id)arg2;
- (void)addContactWithJavaUtilSet:(id)arg1 withJBTIContactsContactImpl:(id)arg2;
- (id)getWithNSString:(id)arg1;
- (int)getMaxSize;
- (id)initWithInt:(int)arg1 withComGoogleAppsBigtopSyncClientImplContactsResolverEmailNormalizer:(id)arg2 withComGoogleAppsBigtopSyncClientImplContactsResolverContactAvatarScorer:(id)arg3;

@end

