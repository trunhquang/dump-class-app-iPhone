//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBJsonStreamParserDelegate.h"

@class NSMutableArray, NSMutableDictionary;

@interface SBJsonStreamParserAdapter : NSObject <SBJsonStreamParserDelegate>
{
    unsigned int depth;
    NSMutableArray *array;
    NSMutableDictionary *dict;
    NSMutableArray *keyStack;
    NSMutableArray *stack;
    int currentType;
    id <SBJsonStreamParserAdapterDelegate> delegate;
    unsigned int levelsToSkip;
}

@property unsigned int levelsToSkip; // @synthesize levelsToSkip;
@property id <SBJsonStreamParserAdapterDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)parser:(id)arg1 foundString:(id)arg2;
- (void)parser:(id)arg1 foundNumber:(id)arg2;
- (void)parserFoundNull:(id)arg1;
- (void)parser:(id)arg1 foundBoolean:(BOOL)arg2;
- (void)parserFoundArrayEnd:(id)arg1;
- (void)parserFoundArrayStart:(id)arg1;
- (void)parserFoundObjectEnd:(id)arg1;
- (void)parser:(id)arg1 foundObjectKey:(id)arg2;
- (void)parserFoundObjectStart:(id)arg1;
- (void)parser:(id)arg1 found:(id)arg2;
- (void)pop;
- (id)init;

@end

