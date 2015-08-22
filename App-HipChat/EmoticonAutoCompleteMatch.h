//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MessageParserMatchResult.h"

@class NSString;

@interface EmoticonAutoCompleteMatch : NSObject <MessageParserMatchResult>
{
    NSString *_sourceString;
    NSString *_matchString;
}

@property(copy, nonatomic) NSString *matchString; // @synthesize matchString=_matchString;
@property(copy, nonatomic) NSString *sourceString; // @synthesize sourceString=_sourceString;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (struct _NSRange)matchRange;
- (BOOL)isPartialMatch;
- (BOOL)isFullMatch;
- (id)initWithSourceString:(id)arg1 matchString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

