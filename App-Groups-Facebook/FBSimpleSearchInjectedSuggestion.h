//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSearchSuggestionProtocol.h"

@class NSString;

@interface FBSimpleSearchInjectedSuggestion : NSObject <FBSearchSuggestionProtocol>
{
    BOOL _isNonCacheable;
    unsigned int _cacheType;
    NSString *_text;
    NSString *_semantic;
    unsigned int _resultType;
    NSString *_fbid;
    NSString *_subtext;
    NSString *_targetFBID;
    unsigned int _injectedSuggestionType;
}

+ (id)newWithText:(id)arg1 subtext:(id)arg2 targetFBID:(id)arg3 injectedSuggestionType:(unsigned int)arg4;
@property(readonly, nonatomic) unsigned int injectedSuggestionType; // @synthesize injectedSuggestionType=_injectedSuggestionType;
@property(readonly, copy, nonatomic) NSString *targetFBID; // @synthesize targetFBID=_targetFBID;
@property(readonly, copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
@property(readonly, copy, nonatomic) NSString *fbid; // @synthesize fbid=_fbid;
@property(readonly, nonatomic) unsigned int resultType; // @synthesize resultType=_resultType;
@property(readonly, copy, nonatomic) NSString *semantic; // @synthesize semantic=_semantic;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) BOOL isNonCacheable; // @synthesize isNonCacheable=_isNonCacheable;
@property(nonatomic) unsigned int cacheType; // @synthesize cacheType=_cacheType;
- (void).cxx_destruct;
- (id)suggestionTypeForLogging;
- (id)initWithText:(id)arg1 subtext:(id)arg2 targetFBID:(id)arg3 injectedSuggestionType:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

