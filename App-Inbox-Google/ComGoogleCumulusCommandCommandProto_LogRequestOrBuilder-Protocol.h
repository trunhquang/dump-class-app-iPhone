//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCumulusCommonAppExtensionProto_AppExtension, ComGoogleCumulusCommonBaseProto_ObjectReference, ComGoogleCumulusCommonIntentProto_Intent, ComGoogleCumulusTypeTypeProto_Command, NSString;

@protocol ComGoogleCumulusCommandCommandProto_LogRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCumulusCommonAppExtensionProto_AppExtension *)getSourceAnnotation;
- (BOOL)hasSourceAnnotation;
- (int)getMutationOrderIncrement;
- (BOOL)hasMutationOrderIncrement;
- (int)getRetryCount;
- (BOOL)hasRetryCount;
- (ComGoogleCumulusCommonIntentProto_Intent *)getIntentWithInt:(int)arg1;
- (id <JavaUtilList>)getIntentList;
- (int)getIntentCount;
- (NSString *)getRequiredVersion;
- (BOOL)hasRequiredVersion;
- (BOOL)getIsBackground;
- (BOOL)hasIsBackground;
- (ComGoogleCumulusTypeTypeProto_Command *)getAppendCommandWithInt:(int)arg1;
- (id <JavaUtilList>)getAppendCommandList;
- (int)getAppendCommandCount;
- (NSString *)getSequenceId;
- (BOOL)hasSequenceId;
- (NSString *)getSliceIdWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getSliceIdList;
- (int)getSliceIdCount;
- (ComGoogleCumulusCommonBaseProto_ObjectReference *)getObjectRef;
- (BOOL)hasObjectRef;
@end

