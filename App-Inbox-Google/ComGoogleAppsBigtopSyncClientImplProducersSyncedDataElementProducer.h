//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplProducersElementProducer.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientImplProducersSyncedDataElementProducer : NSObject <ComGoogleAppsBigtopSyncClientImplProducersElementProducer>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_setQueryUpdateListenerWithJBTICommonListener__params;
+ (void)initialize;
+ (id)defaultSegmentAdaptor;
+ (id)toElementAdaptorWithJBTICommonCumulusObjectAdaptor:(id)arg1;
- (id)init;
- (void)setQueryUpdateListenerWithJBTICommonListener:(id)arg1;
- (void)setBackFillWithBoolean:(BOOL)arg1;
- (void)setIsImmediateQueryWithBoolean:(BOOL)arg1;
- (void)setContinuousQueryWithBoolean:(BOOL)arg1;
- (void)setIsObjectFetchWithBoolean:(BOOL)arg1;
- (void)enableIntermediateResults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

