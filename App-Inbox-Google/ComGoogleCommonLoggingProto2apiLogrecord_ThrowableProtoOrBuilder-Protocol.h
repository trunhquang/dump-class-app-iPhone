//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCommonLoggingProto2apiLogrecord_ThrowableBlockProto, ComGoogleCommonLoggingProto2apiLogrecord_ThrowableProto_LANGUAGEEnum;

@protocol ComGoogleCommonLoggingProto2apiLogrecord_ThrowableProtoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCommonLoggingProto2apiLogrecord_ThrowableProto_LANGUAGEEnum *)getLanguage;
- (BOOL)hasLanguage;
- (ComGoogleCommonLoggingProto2apiLogrecord_ThrowableBlockProto *)getCausesWithInt:(int)arg1;
- (id <JavaUtilList>)getCausesList;
- (int)getCausesCount;
- (ComGoogleCommonLoggingProto2apiLogrecord_ThrowableBlockProto *)getOutermost;
- (BOOL)hasOutermost;
@end

