//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity, NSString;

@protocol ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncFromServerResponseOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (BOOL)getResyncRequired;
- (BOOL)hasResyncRequired;
- (NSString *)getNewHighestSyncedVersion;
- (BOOL)hasNewHighestSyncedVersion;
- (NSString *)getHighWatermark;
- (BOOL)hasHighWatermark;
- (NSString *)getLowWatermark;
- (BOOL)hasLowWatermark;
- (ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity *)getEntityWithInt:(int)arg1;
- (id <JavaUtilList>)getEntityList;
- (int)getEntityCount;
@end

