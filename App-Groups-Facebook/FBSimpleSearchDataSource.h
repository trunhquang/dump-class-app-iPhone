//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBQueuePerformer, FBScenePath, FBSearchTypeaheadRequestQueue, FBSimpleSearchCacheEntry, FBSimpleSearchServerSuggestionCache, FBSimpleSearchService, FBUserSession, NSMutableDictionary, NSString, NSTimer;

@interface FBSimpleSearchDataSource : NSObject
{
    FBUserSession *_session;
    FBSimpleSearchService *_service;
    NSString *_analyticsModule;
    FBScenePath *_scenePath;
    FBSimpleSearchCacheEntry *_currentEntry;
    NSMutableDictionary *_queryCache;
    FBSimpleSearchServerSuggestionCache *_serverSuggestionCache;
    double _lastServerRequestTime;
    NSTimer *_serverSearchTimer;
    FBQueuePerformer *_requestCallbackPerformer;
    FBSearchTypeaheadRequestQueue *_typeaheadRequestQueue;
    BOOL _shouldShowNullState;
    id <FBSimpleSearchDataSourceDelegate> _delegate;
    NSString *_typeaheadSessionID;
    unsigned int _maxLocalSuggestionCount;
    unsigned int _maxTotalSuggestionCount;
    unsigned int _maxServerResultCount;
    CDUnknownBlockType _suggestionTransformer;
}

@property(copy, nonatomic) CDUnknownBlockType suggestionTransformer; // @synthesize suggestionTransformer=_suggestionTransformer;
@property(nonatomic) unsigned int maxServerResultCount; // @synthesize maxServerResultCount=_maxServerResultCount;
@property(nonatomic) unsigned int maxTotalSuggestionCount; // @synthesize maxTotalSuggestionCount=_maxTotalSuggestionCount;
@property(nonatomic) unsigned int maxLocalSuggestionCount; // @synthesize maxLocalSuggestionCount=_maxLocalSuggestionCount;
@property(copy, nonatomic) NSString *typeaheadSessionID; // @synthesize typeaheadSessionID=_typeaheadSessionID;
@property(nonatomic) __weak id <FBSimpleSearchDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL shouldShowNullState; // @synthesize shouldShowNullState=_shouldShowNullState;
@property(readonly, nonatomic) FBSimpleSearchCacheEntry *currentEntry; // @synthesize currentEntry=_currentEntry;
- (void).cxx_destruct;
- (void)_logNetworkLatency:(id)arg1 resultCount:(unsigned int)arg2;
- (void)_logLatency:(id)arg1 latency:(double)arg2 resultCount:(unsigned int)arg3 extra:(id)arg4;
- (void)_logLatency:(id)arg1 latency:(double)arg2 resultCount:(unsigned int)arg3;
- (BOOL)_validateConnectivity:(id *)arg1;
- (void)_sendServerRequest:(id)arg1 cacheEntry:(id)arg2;
- (void)_sendServerRequestIfNeeded:(id)arg1;
- (id)cacheEntrySuggestionsForQuery:(id)arg1;
- (id)canonicalQueryString:(id)arg1;
- (id)createTableViewData:(id)arg1 isIndexAvailable:(BOOL)arg2;
- (void)dedupeSuggestions:(id)arg1;
- (id)parseServerResponse:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (id)typeaheadRequestForQueryString:(id)arg1 callbackPerformer:(id)arg2 typeaheadSessionID:(id)arg3;
- (id)bootstrapSuggestionsForQueryString:(id)arg1 indexReady:(char *)arg2;
- (void)reset;
- (void)_setQueryStringInternal:(id)arg1;
@property(copy, nonatomic) NSString *queryString; // @dynamic queryString;
- (void)retryQuery;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1 analyticsModule:(id)arg2 scenePath:(id)arg3;

@end

