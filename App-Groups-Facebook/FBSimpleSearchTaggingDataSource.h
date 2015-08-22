//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSimpleSearchDataSource.h"

@class FBUserSession, NSArray, NSSet, NSString;

@interface FBSimpleSearchTaggingDataSource : FBSimpleSearchDataSource
{
    FBUserSession *_session;
    NSSet *_commenters;
    BOOL _explicitMention;
    BOOL _canTagSelf;
    unsigned int _fetchLimit;
    NSArray *_avatarCollections;
    NSSet *_excludedIDs;
    NSString *_authorType;
}

@property(copy, nonatomic) NSString *authorType; // @synthesize authorType=_authorType;
@property(copy, nonatomic) NSSet *excludedIDs; // @synthesize excludedIDs=_excludedIDs;
@property(copy, nonatomic) NSArray *avatarCollections; // @synthesize avatarCollections=_avatarCollections;
@property(nonatomic) BOOL canTagSelf; // @synthesize canTagSelf=_canTagSelf;
@property(nonatomic) BOOL explicitMention; // @synthesize explicitMention=_explicitMention;
@property(nonatomic) unsigned int fetchLimit; // @synthesize fetchLimit=_fetchLimit;
- (void).cxx_destruct;
- (id)getNullState;
- (void)dedupeSuggestions:(id)arg1;
- (id)parseServerResponse:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (id)bootstrapSuggestionsForQueryString:(id)arg1 indexReady:(char *)arg2;
- (id)typeaheadRequestForQueryString:(id)arg1 callbackPerformer:(id)arg2 typeaheadSessionID:(id)arg3;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2;

@end

