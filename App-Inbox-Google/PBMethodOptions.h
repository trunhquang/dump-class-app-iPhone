//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, PBMutableArray;

@interface PBMethodOptions : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int clientLogging; // @dynamic clientLogging;
@property(nonatomic) BOOL clientStreaming; // @dynamic clientStreaming;
@property(nonatomic) double deadline; // @dynamic deadline;
@property(nonatomic) BOOL deprecated; // @dynamic deprecated;
@property(nonatomic) BOOL duplicateSuppression; // @dynamic duplicateSuppression;
@property(nonatomic) BOOL endUserCredsRequested; // @dynamic endUserCredsRequested;
@property(nonatomic) BOOL failFast; // @dynamic failFast;
@property(nonatomic) BOOL hasClientLogging; // @dynamic hasClientLogging;
@property(nonatomic) BOOL hasClientStreaming; // @dynamic hasClientStreaming;
@property(nonatomic) BOOL hasDeadline; // @dynamic hasDeadline;
@property(nonatomic) BOOL hasDeprecated; // @dynamic hasDeprecated;
@property(nonatomic) BOOL hasDuplicateSuppression; // @dynamic hasDuplicateSuppression;
@property(nonatomic) BOOL hasEndUserCredsRequested; // @dynamic hasEndUserCredsRequested;
@property(nonatomic) BOOL hasFailFast; // @dynamic hasFailFast;
@property(nonatomic) BOOL hasLegacyClientInitialTokens; // @dynamic hasLegacyClientInitialTokens;
@property(nonatomic) BOOL hasLegacyResultType; // @dynamic hasLegacyResultType;
@property(nonatomic) BOOL hasLegacyServerInitialTokens; // @dynamic hasLegacyServerInitialTokens;
@property(nonatomic) BOOL hasLegacyStreamType; // @dynamic hasLegacyStreamType;
@property(nonatomic) BOOL hasLogLevel; // @dynamic hasLogLevel;
@property(nonatomic) BOOL hasProtocol; // @dynamic hasProtocol;
@property(nonatomic) BOOL hasRequestFormat; // @dynamic hasRequestFormat;
@property(nonatomic) BOOL hasResponseFormat; // @dynamic hasResponseFormat;
@property(nonatomic) BOOL hasSecurityLabel; // @dynamic hasSecurityLabel;
@property(nonatomic) BOOL hasSecurityLevel; // @dynamic hasSecurityLevel;
@property(nonatomic) BOOL hasServerLogging; // @dynamic hasServerLogging;
@property(nonatomic) BOOL hasServerStreaming; // @dynamic hasServerStreaming;
@property(nonatomic) BOOL hasStreamType; // @dynamic hasStreamType;
@property(nonatomic) BOOL hasUninterpretedOptionArray; // @dynamic hasUninterpretedOptionArray;
@property(nonatomic) long long legacyClientInitialTokens; // @dynamic legacyClientInitialTokens;
@property(retain, nonatomic) NSString *legacyResultType; // @dynamic legacyResultType;
@property(nonatomic) long long legacyServerInitialTokens; // @dynamic legacyServerInitialTokens;
@property(retain, nonatomic) NSString *legacyStreamType; // @dynamic legacyStreamType;
@property(nonatomic) int logLevel; // @dynamic logLevel;
@property(nonatomic) int protocol; // @dynamic protocol;
@property(nonatomic) int requestFormat; // @dynamic requestFormat;
@property(nonatomic) int responseFormat; // @dynamic responseFormat;
@property(retain, nonatomic) NSString *securityLabel; // @dynamic securityLabel;
@property(nonatomic) int securityLevel; // @dynamic securityLevel;
@property(nonatomic) int serverLogging; // @dynamic serverLogging;
@property(nonatomic) BOOL serverStreaming; // @dynamic serverStreaming;
@property(retain, nonatomic) NSString *streamType; // @dynamic streamType;
@property(retain, nonatomic) PBMutableArray *uninterpretedOptionArray; // @dynamic uninterpretedOptionArray;

@end

