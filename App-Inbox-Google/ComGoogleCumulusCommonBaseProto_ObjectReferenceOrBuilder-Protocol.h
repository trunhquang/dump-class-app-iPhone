//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCumulusCommonBaseProto_ObjectId, NSString;

@protocol ComGoogleCumulusCommonBaseProto_ObjectReferenceOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getSliceIdWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getSliceIdList;
- (int)getSliceIdCount;
- (int)getLocalVersion;
- (BOOL)hasLocalVersion;
- (NSString *)getVersion;
- (BOOL)hasVersion;
- (ComGoogleCumulusCommonBaseProto_ObjectId *)getObjectId;
- (BOOL)hasObjectId;
@end

