//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplProducersElementProducer.h"

@class ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config, JBTICommonSapiSpan_Factory, NSString;

@interface JBTISearchZeroStateSuggestElementProducer : NSObject <ComGoogleAppsBigtopSyncClientImplProducersElementProducer>
{
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *config_;
    id <JavaUtilList> changes_;
    id <JavaUtilList> elementIds_;
    id <ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener> listener_;
    BOOL started_;
    BOOL hasEverStarted_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_updateConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config_withJBTSpan__params;
+ (id)getRankForPositionWithInt:(int)arg1;
- (void)dealloc;
- (BOOL)hasMore;
- (id)getQueryStrings;
- (id)getConfig;
- (void)updateConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTSpan:(id)arg2;
- (void)setListenerWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener:(id)arg1;
- (BOOL)isExpectingMoreChanges;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startWithJBTSpan:(id)arg1;
- (void)acceptVisitorWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Visitor:(id)arg1;
- (void)maybeUpdateListenerWithJavaUtilList:(id)arg1;
- (void)replaceElementsWithJavaUtilList:(id)arg1;
- (id)initWithJBTICommonSapiSpan_Factory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

