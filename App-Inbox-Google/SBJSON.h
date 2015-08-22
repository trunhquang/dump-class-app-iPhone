//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBJSON : NSObject
{
    BOOL humanReadable;
    BOOL sortKeys;
    unsigned int maxDepth;
    unsigned int depth;
    const char *c;
    id parsingLocale;
}

+ (void)initialize;
@property unsigned int maxDepth; // @synthesize maxDepth;
@property BOOL sortKeys; // @synthesize sortKeys;
@property BOOL humanReadable; // @synthesize humanReadable;
- (BOOL)scanIsAtEnd;
- (BOOL)scanNumber:(id *)arg1 error:(id *)arg2;
- (BOOL)scanHexQuad:(unsigned short *)arg1 error:(id *)arg2;
- (BOOL)scanUnicodeChar:(unsigned short *)arg1 error:(id *)arg2;
- (BOOL)scanRestOfString:(id *)arg1 error:(id *)arg2 objectkey:(BOOL)arg3;
- (BOOL)scanRestOfDictionary:(id *)arg1 error:(id *)arg2;
- (BOOL)scanRestOfArray:(id *)arg1 error:(id *)arg2;
- (BOOL)scanRestOfNull:(id *)arg1 error:(id *)arg2;
- (BOOL)scanRestOfFalse:(id *)arg1 error:(id *)arg2;
- (BOOL)scanRestOfTrue:(id *)arg1 error:(id *)arg2;
- (BOOL)scanValue:(id *)arg1 error:(id *)arg2;
- (id)objectWithString:(id)arg1 error:(id *)arg2;
- (id)fragmentWithString:(id)arg1 error:(id *)arg2;
- (id)objectWithString:(id)arg1 allowScalar:(BOOL)arg2 error:(id *)arg3;
- (BOOL)appendString:(id)arg1 into:(id)arg2 error:(id *)arg3;
- (BOOL)appendDictionary:(id)arg1 into:(id)arg2 error:(id *)arg3;
- (BOOL)appendArray:(id)arg1 into:(id)arg2 error:(id *)arg3;
- (BOOL)appendValue:(id)arg1 into:(id)arg2 error:(id *)arg3;
- (id)indent;
- (id)stringWithObject:(id)arg1 error:(id *)arg2;
- (id)stringWithFragment:(id)arg1 error:(id *)arg2;
- (id)stringWithObject:(id)arg1 allowScalar:(BOOL)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)init;

@end

