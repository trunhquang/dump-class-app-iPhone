//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleAppsFrameworkDebugProtoDebugOptions;

@protocol ComGoogleAppsFrameworkDebugProtoDebugRequestExtensionOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (BOOL)getIgnoreXsds;
- (BOOL)hasIgnoreXsds;
- (BOOL)getInitiatedByXsds;
- (BOOL)hasInitiatedByXsds;
- (ComGoogleAppsFrameworkDebugProtoDebugOptions *)getDebugOptionsWithInt:(int)arg1;
- (id <JavaUtilList>)getDebugOptionsList;
- (int)getDebugOptionsCount;
- (BOOL)getOutboundRpcsNeeded;
- (BOOL)hasOutboundRpcsNeeded;
- (BOOL)getLogRecordsNeeded;
- (BOOL)hasLogRecordsNeeded;
@end

