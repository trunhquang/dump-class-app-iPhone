//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplProducersWrappingElementProducer.h"

@class JBTICommonRankedElementList;

@interface ComGoogleAppsBigtopSyncClientImplProducersWindowedElementProducer : ComGoogleAppsBigtopSyncClientImplProducersWrappingElementProducer
{
    int maxElements_;
    JBTICommonRankedElementList *currentAllElements_;
    JBTICommonRankedElementList *currentWindowedElements_;
    id <ComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor> adaptor_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)rankOfWithId:(id)arg1;
- (id)idOfWithId:(id)arg1;
- (id)createWindowChangesWithJavaUtilList:(id)arg1 withJBTICommonRankedElementList:(id)arg2;
- (void)updateWindow;
- (void)applyChangesWithJavaUtilList:(id)arg1 withJBTICommonRankedElementList:(id)arg2;
- (void)handleChangesWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1 withComGoogleAppsBigtopSyncClientImplProducersElementProducer_ChangeList:(id)arg2;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1 withComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor:(id)arg2 withInt:(int)arg3;

@end

