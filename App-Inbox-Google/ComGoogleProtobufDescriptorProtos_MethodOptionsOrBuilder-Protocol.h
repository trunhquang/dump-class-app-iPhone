//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufGeneratedMessage_ExtendableMessageOrBuilder.h"

@class ComGoogleProtobufDescriptorProtos_MethodOptions_FormatEnum, ComGoogleProtobufDescriptorProtos_MethodOptions_LogLevelEnum, ComGoogleProtobufDescriptorProtos_MethodOptions_ProtocolEnum, ComGoogleProtobufDescriptorProtos_MethodOptions_SecurityLevelEnum, ComGoogleProtobufDescriptorProtos_UninterpretedOption, NSString;

@protocol ComGoogleProtobufDescriptorProtos_MethodOptionsOrBuilder <ComGoogleProtobufGeneratedMessage_ExtendableMessageOrBuilder>
- (ComGoogleProtobufDescriptorProtos_UninterpretedOption *)getUninterpretedOptionWithInt:(int)arg1;
- (id <JavaUtilList>)getUninterpretedOptionList;
- (int)getUninterpretedOptionCount;
- (BOOL)getDeprecated;
- (BOOL)hasDeprecated;
- (ComGoogleProtobufDescriptorProtos_MethodOptions_LogLevelEnum *)getLogLevel;
- (BOOL)hasLogLevel;
- (long long)getLegacyServerInitialTokens;
- (BOOL)hasLegacyServerInitialTokens;
- (long long)getLegacyClientInitialTokens;
- (BOOL)hasLegacyClientInitialTokens;
- (NSString *)getLegacyResultType;
- (BOOL)hasLegacyResultType;
- (NSString *)getLegacyStreamType;
- (BOOL)hasLegacyStreamType;
- (BOOL)getServerStreaming;
- (BOOL)hasServerStreaming;
- (BOOL)getClientStreaming;
- (BOOL)hasClientStreaming;
- (NSString *)getSecurityLabel;
- (BOOL)hasSecurityLabel;
- (NSString *)getStreamType;
- (BOOL)hasStreamType;
- (ComGoogleProtobufDescriptorProtos_MethodOptions_FormatEnum *)getRequestFormat;
- (BOOL)hasRequestFormat;
- (ComGoogleProtobufDescriptorProtos_MethodOptions_FormatEnum *)getResponseFormat;
- (BOOL)hasResponseFormat;
- (ComGoogleProtobufDescriptorProtos_MethodOptions_SecurityLevelEnum *)getSecurityLevel;
- (BOOL)hasSecurityLevel;
- (int)getServerLogging;
- (BOOL)hasServerLogging;
- (int)getClientLogging;
- (BOOL)hasClientLogging;
- (BOOL)getEndUserCredsRequested;
- (BOOL)hasEndUserCredsRequested;
- (BOOL)getFailFast;
- (BOOL)hasFailFast;
- (BOOL)getDuplicateSuppression;
- (BOOL)hasDuplicateSuppression;
- (double)getDeadline;
- (BOOL)hasDeadline;
- (ComGoogleProtobufDescriptorProtos_MethodOptions_ProtocolEnum *)getProtocol;
- (BOOL)hasProtocol;
@end

