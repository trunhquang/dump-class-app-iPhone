//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageLite_Builder.h"
#import "ComGoogleProtobufMessageOrBuilder.h"
#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleProtobufByteString, ComGoogleProtobufDescriptors_FieldDescriptor, ComGoogleProtobufExtensionRegistryLite, IOSByteArray, JavaIoInputStream;

@protocol ComGoogleProtobufMessage_Builder <ComGoogleProtobufMessageLite_Builder, ComGoogleProtobufMessageOrBuilder, NSObject, JavaObject>
+ (id)getDescriptor;
- (id <ComGoogleProtobufMessage>)buildPartial;
- (id <ComGoogleProtobufMessage>)build;
- (BOOL)mergeDelimitedFromWithJavaIoInputStream:(JavaIoInputStream *)arg1 withComGoogleProtobufExtensionRegistryLite:(ComGoogleProtobufExtensionRegistryLite *)arg2;
- (BOOL)mergeDelimitedFromWithJavaIoInputStream:(JavaIoInputStream *)arg1;
- (id <ComGoogleProtobufMessage_Builder>)mergeFromWithJavaIoInputStream:(JavaIoInputStream *)arg1 withComGoogleProtobufExtensionRegistryLite:(ComGoogleProtobufExtensionRegistryLite *)arg2;
- (id <ComGoogleProtobufMessage_Builder>)mergeFromWithJavaIoInputStream:(JavaIoInputStream *)arg1;
- (id <ComGoogleProtobufMessage_Builder>)mergeFromWithByteArray:(IOSByteArray *)arg1 withComGoogleProtobufExtensionRegistryLite:(ComGoogleProtobufExtensionRegistryLite *)arg2;
- (id <ComGoogleProtobufMessage_Builder>)mergeFromWithComGoogleProtobufByteString:(ComGoogleProtobufByteString *)arg1 withComGoogleProtobufExtensionRegistryLite:(ComGoogleProtobufExtensionRegistryLite *)arg2;
- (id <ComGoogleProtobufMessage_Builder>)mergeFromWithComGoogleProtobufMessage:(id <ComGoogleProtobufMessage>)arg1;
- (id <ComGoogleProtobufMessage_Builder>)newBuilderForFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(ComGoogleProtobufDescriptors_FieldDescriptor *)arg1;
- (id <ComGoogleProtobufMessage_Builder>)addRepeatedFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(id)arg1 withId:(id)arg2;
- (id <ComGoogleProtobufMessage_Builder>)clearFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(id)arg1;
- (id <ComGoogleProtobufMessage_Builder>)clear;
- (id <ComGoogleProtobufMessage_Builder>)setFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(id)arg1 withId:(id)arg2;
- (id <ComGoogleProtobufMessage_Builder>)setRepeatedFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(id)arg1 withInt:(int)arg2 withId:(id)arg3;
@end

