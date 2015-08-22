//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBScenePath, NSMutableDictionary;

@interface FBCheckinSearchController : NSObject
{
    unsigned int _handleInUse;
    NSMutableDictionary *_requestsMapper;
    int _numSearchResults;
    FBScenePath *_scenePath;
    int _requestPriority;
}

+ (id)stringForSearchType:(int)arg1;
@property(nonatomic) int requestPriority; // @synthesize requestPriority=_requestPriority;
@property(retain, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
- (void).cxx_destruct;
- (id)_checkinSearchSuggestionQueryWithLocation:(id)arg1 locationAge:(double)arg2 queryString:(id)arg3 searchType:(int)arg4 suggestionContextType:(int)arg5 shouldShowIcons:(BOOL)arg6;
- (void)cancelSearch:(unsigned int)arg1;
- (unsigned int)searchWithLocation:(id)arg1 locationDate:(id)arg2 queryString:(id)arg3 searchType:(int)arg4 suggestionContext:(int)arg5 session:(id)arg6 lifeEventType:(unsigned int)arg7 schoolType:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
- (unsigned int)_generateHandle;
- (id)init;

@end
