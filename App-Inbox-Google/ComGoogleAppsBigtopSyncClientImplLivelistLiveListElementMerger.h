//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTICommonRankedElementList;

@interface ComGoogleAppsBigtopSyncClientImplLivelistLiveListElementMerger : NSObject
{
    id <ComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor> adaptor_;
    id <JavaUtilMap> indicesById_;
    JBTICommonRankedElementList *currentElements_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (id)toLiveListChangeChangeWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)createExternalChangesWithJavaUtilList:(id)arg1 withJavaUtilMap:(id)arg2;
- (void)updateIndicesById;
- (void)addElementsWithJavaUtilList:(id)arg1;
- (void)removeElementsWithJavaUtilSet:(id)arg1;
- (void)classifyChangesWithJavaUtilList:(id)arg1 withJavaUtilSet:(id)arg2 withJavaUtilList:(id)arg3;
- (id)mergeChangesWithJavaUtilList:(id)arg1;
- (id)initWithComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor:(id)arg1 withJBTICommonRankedElementList:(id)arg2;

@end

