//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FBQuickPromotionClause : NSObject
{
    NSString *_type;
    NSArray *_filters;
    NSArray *_clauses;
}

+ (id)validClauseTypes;
@property(readonly, copy, nonatomic) NSArray *clauses; // @synthesize clauses=_clauses;
@property(readonly, copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)_passesClauseWithContext:(id)arg1 withDebugInfo:(id *)arg2;
- (BOOL)passesClauseWithContext:(id)arg1 withDebugInfo:(id *)arg2;
- (id)_coerceNumberValue:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 withPromotion:(id)arg2 session:(id)arg3;

@end

