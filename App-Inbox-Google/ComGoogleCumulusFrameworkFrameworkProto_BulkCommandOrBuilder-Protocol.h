//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCumulusCommonBaseProto_ObjectReference, ComGoogleCumulusQueryQueryProto_Query, ComGoogleCumulusTypeTypeProto_Command, NSString;

@protocol ComGoogleCumulusFrameworkFrameworkProto_BulkCommandOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getBatchId;
- (BOOL)hasBatchId;
- (ComGoogleCumulusCommonBaseProto_ObjectReference *)getAffectedObjectsWithInt:(int)arg1;
- (id <JavaUtilList>)getAffectedObjectsList;
- (int)getAffectedObjectsCount;
- (ComGoogleCumulusTypeTypeProto_Command *)getCommand;
- (BOOL)hasCommand;
- (ComGoogleCumulusQueryQueryProto_Query *)getQuery;
- (BOOL)hasQuery;
- (NSString *)getBulkCommandId;
- (BOOL)hasBulkCommandId;
@end

