//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCumulusCommonWorkerControlProto_FeatureEvent, ComGoogleCumulusCommonWorkerControlProto_ProbeResult;

@protocol ComGoogleCumulusCommonWorkerControlProto_ResponseOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (BOOL)getWorkerShutdown;
- (BOOL)hasWorkerShutdown;
- (BOOL)getWorkerConnected;
- (BOOL)hasWorkerConnected;
- (ComGoogleCumulusCommonWorkerControlProto_FeatureEvent *)getFeatureEventWithInt:(int)arg1;
- (id <JavaUtilList>)getFeatureEventList;
- (int)getFeatureEventCount;
- (BOOL)getResetChannel;
- (BOOL)hasResetChannel;
- (ComGoogleCumulusCommonWorkerControlProto_ProbeResult *)getProbeResult;
- (BOOL)hasProbeResult;
@end

