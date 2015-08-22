//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MessageParserMatchResult.h"

@class NSDictionary, NSString;

@interface HTMLMatch : NSObject <MessageParserMatchResult>
{
    NSDictionary *_attributes;
    unsigned int _matchType;
    NSString *_sourceString;
    NSString *_matchString;
    struct _NSRange _closeTagRange;
    struct _NSRange _openTagRange;
    struct _NSRange _matchRange;
}

@property(nonatomic) struct _NSRange matchRange; // @synthesize matchRange=_matchRange;
@property(copy, nonatomic) NSString *matchString; // @synthesize matchString=_matchString;
@property(copy, nonatomic) NSString *sourceString; // @synthesize sourceString=_sourceString;
@property(readonly, nonatomic) struct _NSRange openTagRange; // @synthesize openTagRange=_openTagRange;
@property(readonly, nonatomic) unsigned int matchType; // @synthesize matchType=_matchType;
@property(readonly, nonatomic) struct _NSRange closeTagRange; // @synthesize closeTagRange=_closeTagRange;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isPartialMatch;
- (BOOL)isFullMatch;
- (id)initWithSourceString:(id)arg1 matchString:(id)arg2 matchRange:(struct _NSRange)arg3 openTagRange:(struct _NSRange)arg4 closeTagRange:(struct _NSRange)arg5 attributes:(id)arg6 matchType:(unsigned int)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

