//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCumulusSyncSyncProto_BackwardRangeResult, ComGoogleCumulusSyncSyncProto_ForwardRangeResult, ComGoogleCumulusSyncSyncProto_RangeResponse_EventEnum;

@protocol ComGoogleCumulusSyncSyncProto_RangeResponseOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCumulusSyncSyncProto_BackwardRangeResult *)getBackwardResult;
- (BOOL)hasBackwardResult;
- (ComGoogleCumulusSyncSyncProto_ForwardRangeResult *)getForwardResult;
- (BOOL)hasForwardResult;
- (ComGoogleCumulusSyncSyncProto_RangeResponse_EventEnum *)getEvent;
- (BOOL)hasEvent;
@end

