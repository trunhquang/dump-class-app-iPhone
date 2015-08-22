//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface FBGraphQLQuery : NSObject
{
    unordered_map_a1506d7e _aliasMap;
    const char *_annotatedResultType;
    NSSet *_exportedFieldNames;
    NSMutableDictionary *_parameters;
    NSDictionary *_rawDataToUpload;
    NSString *_persistID;
    const struct FBGraphQLFieldSet *_queriedFieldSet;
    NSString *_queryString;
    NSMutableDictionary *_refParameterNameToExportedFieldMap;
    NSMutableSet *_intentionallyOmittedParameters;
    NSMutableSet *_parametersUsingDefaultValue;
    NSArray *_paramsToIndexMappingArray;
    BOOL _enabledParameterToIndexMapping;
    BOOL _enabledStripNulls;
    BOOL _escapeRootID;
    NSString *_rootID;
    NSString *_callName;
    NSString *_queryKey;
    NSString *_queryName;
    NSString *_queryLabel;
    int _priority;
    id <FBGraphQLCacheKeySerializer> _cacheKeySerializer;
}

+ (id)graphQLQueryWithRootID:(id)arg1 callName:(id)arg2;
+ (id)graphQLNodeQuery:(id)arg1;
+ (id)graphQLMeQuery;
+ (id)graphQLViewerQuery;
+ (void)setGlobalDefaultGraphQLQueryParameters;
+ (void)clearDefaultGraphQLQueryParameters;
+ (void)setDefaultGraphQLQueryParameter:(id)arg1 value:(id)arg2;
+ (id)valueForDefaultGraphQLQueryParameter:(id)arg1;
+ (id)copyDefaultParameters;
@property(retain, nonatomic) id <FBGraphQLCacheKeySerializer> cacheKeySerializer; // @synthesize cacheKeySerializer=_cacheKeySerializer;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *queryLabel; // @synthesize queryLabel=_queryLabel;
@property(copy, nonatomic) NSString *queryName; // @synthesize queryName=_queryName;
@property(nonatomic) BOOL escapeRootID; // @synthesize escapeRootID=_escapeRootID;
@property(nonatomic) BOOL enabledStripNulls; // @synthesize enabledStripNulls=_enabledStripNulls;
@property(nonatomic) BOOL enabledParameterToIndexMapping; // @synthesize enabledParameterToIndexMapping=_enabledParameterToIndexMapping;
@property(readonly, copy, nonatomic) NSString *callName; // @synthesize callName=_callName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const unordered_map_a1506d7e *)aliasMap;
- (void)setPersistID:(id)arg1;
- (void)setQueryString:(id)arg1;
- (void)setExportedFieldsWithNames:(id)arg1;
- (void)setQueriedFieldSet:(const struct FBGraphQLFieldSet *)arg1;
- (void)addRefParameterWithName:(id)arg1 exportedField:(id)arg2;
- (void)addParameterWithName:(id)arg1 value:(id)arg2;
@property(readonly, copy, nonatomic) NSString *queryKey; // @synthesize queryKey=_queryKey;
@property(readonly, copy, nonatomic) NSString *rootID; // @synthesize rootID=_rootID;
@property(readonly, copy, nonatomic) NSDictionary *parametersWithNameMappedToIndex;
- (void)setRawDataToUpload:(id)arg1;
- (id)rawDataToUpload;
- (id)refParameterNameToExportedFieldMap;
- (id)parameters;
- (const struct FBGraphQLFieldSet *)queriedFieldSet;
- (const char *)annotatedResultType;
- (id)persistID;
- (id)description;
- (id)queryString;
- (id)exportedFieldWithName:(id)arg1 pluralMode:(unsigned int)arg2 fallbackBehavior:(unsigned int)arg3;
- (id)exportedFieldWithName:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRootID:(id)arg1 callName:(id)arg2;
- (id)initNodeQueryWithRootID:(id)arg1;

@end
