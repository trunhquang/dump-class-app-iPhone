//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCommonLoggingProto2apiEventid_EventIdMessage, ComGoogleCommonLoggingProto2apiLogrecord_ThrowableProto, NSString;

@protocol ComGoogleCommonLoggingProto2apiLogrecord_LogRecordProtoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCommonLoggingProto2apiLogrecord_ThrowableProto *)getThrown;
- (BOOL)hasThrown;
- (NSString *)getParameterWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getParameterList;
- (int)getParameterCount;
- (NSString *)getMessage;
- (BOOL)hasMessage;
- (NSString *)getSourceMethodName;
- (BOOL)hasSourceMethodName;
- (NSString *)getSourceClassName;
- (BOOL)hasSourceClassName;
- (int)getLevel;
- (BOOL)hasLevel;
- (NSString *)getThreadName;
- (BOOL)hasThreadName;
- (ComGoogleCommonLoggingProto2apiEventid_EventIdMessage *)getEventId;
- (BOOL)hasEventId;
@end

