//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config;

@protocol ComGoogleAppsBigtopSyncClientImplProducersElementProducer <NSObject, JavaObject>
- (BOOL)hasMore;
- (id <JavaUtilList>)getQueryStrings;
- (ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *)getConfig;
- (void)updateConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (void)setListenerWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener:(id <ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener>)arg1;
- (BOOL)isExpectingMoreChanges;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startWithJBTSpan:(id <JBTSpan>)arg1;
- (void)acceptVisitorWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Visitor:(id <ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Visitor>)arg1;
@end

