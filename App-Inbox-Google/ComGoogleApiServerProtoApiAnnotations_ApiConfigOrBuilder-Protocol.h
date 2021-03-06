//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleApiServerProtoApiAnnotations_ApiConfig, ComGoogleApiServerProtoApiAnnotations_ApiTemplateImport, ComGoogleApiServerProtoApiAnnotations_AuthenticatorConfigEnum, ComGoogleApiServerProtoApiAnnotations_BodyFormat, ComGoogleApiServerProtoApiAnnotations_ConjunctScopeSet, ComGoogleApiServerProtoApiAnnotations_DiscoveryConfig, ComGoogleApiServerProtoApiAnnotations_FilteringConfig, ComGoogleApiServerProtoApiAnnotations_NamingConfig, ComGoogleApiServerProtoApiAnnotations_VersionTag, ComGoogleGaiaMintProto2apiApiscopecodes_GaiaMintScopeCode_ScopeCodeEnum, NSString;

@protocol ComGoogleApiServerProtoApiAnnotations_ApiConfigOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleApiServerProtoApiAnnotations_BodyFormat *)getOutputFormat;
- (BOOL)hasOutputFormat;
- (BOOL)getLegacyContainerInclusionDefault;
- (BOOL)hasLegacyContainerInclusionDefault;
- (ComGoogleApiServerProtoApiAnnotations_ApiConfig *)getOverrideWithInt:(int)arg1;
- (id <JavaUtilList>)getOverrideList;
- (int)getOverrideCount;
- (NSString *)getVersionSelector;
- (BOOL)hasVersionSelector;
- (BOOL)getSelectMembersByDefault;
- (BOOL)hasSelectMembersByDefault;
- (BOOL)getContextViaSideChannel;
- (BOOL)hasContextViaSideChannel;
- (ComGoogleApiServerProtoApiAnnotations_DiscoveryConfig *)getDiscovery;
- (BOOL)hasDiscovery;
- (ComGoogleApiServerProtoApiAnnotations_VersionTag *)getVersionTagWithInt:(int)arg1;
- (id <JavaUtilList>)getVersionTagList;
- (int)getVersionTagCount;
- (BOOL)getLongBackendMethodNames;
- (BOOL)hasLongBackendMethodNames;
- (ComGoogleApiServerProtoApiAnnotations_BodyFormat *)getBodyFormat;
- (BOOL)hasBodyFormat;
- (NSString *)getDocProtoref;
- (BOOL)hasDocProtoref;
- (NSString *)getDocToken;
- (BOOL)hasDocToken;
- (BOOL)getGenerateDoc;
- (BOOL)hasGenerateDoc;
- (BOOL)getStripEnumNamePrefixFromValues;
- (BOOL)hasStripEnumNamePrefixFromValues;
- (BOOL)getConvertEnumsToLowerCamel;
- (BOOL)hasConvertEnumsToLowerCamel;
- (BOOL)getIncludeTraceRecordsInResponse;
- (BOOL)hasIncludeTraceRecordsInResponse;
- (BOOL)getFlattenTopLevelMessages;
- (BOOL)hasFlattenTopLevelMessages;
- (NSString *)getProtectedTermWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getProtectedTermList;
- (int)getProtectedTermCount;
- (ComGoogleApiServerProtoApiAnnotations_FilteringConfig *)getFiltering;
- (BOOL)hasFiltering;
- (ComGoogleApiServerProtoApiAnnotations_NamingConfig *)getNaming;
- (BOOL)hasNaming;
- (ComGoogleApiServerProtoApiAnnotations_ConjunctScopeSet *)getDefaultConjunctScopeSetWithInt:(int)arg1;
- (id <JavaUtilList>)getDefaultConjunctScopeSetList;
- (int)getDefaultConjunctScopeSetCount;
- (ComGoogleGaiaMintProto2apiApiscopecodes_GaiaMintScopeCode_ScopeCodeEnum *)getDefaultScopeWithInt:(int)arg1;
- (id <JavaUtilList>)getDefaultScopeList;
- (int)getDefaultScopeCount;
- (NSString *)getDefaultScopeNameWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getDefaultScopeNameList;
- (int)getDefaultScopeNameCount;
- (ComGoogleApiServerProtoApiAnnotations_AuthenticatorConfigEnum *)getAuthenticator;
- (BOOL)hasAuthenticator;
- (ComGoogleApiServerProtoApiAnnotations_ApiTemplateImport *)getTemplateImportWithInt:(int)arg1;
- (id <JavaUtilList>)getTemplateImportList;
- (int)getTemplateImportCount;
- (NSString *)getRestBasePath;
- (BOOL)hasRestBasePath;
- (NSString *)getExtends;
- (BOOL)hasExtends;
- (NSString *)getVersion;
- (BOOL)hasVersion;
- (NSString *)getName;
- (BOOL)hasName;
@end

