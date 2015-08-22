//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilRegexMatchResult.h"

@class IOSCharArray, IOSIntArray, JavaUtilRegexPattern, NSString;

@interface JavaUtilRegexMatcher : NSObject <JavaUtilRegexMatchResult>
{
    JavaUtilRegexPattern *pattern_;
    long long address_;
    NSString *input_;
    IOSCharArray *inputChars_;
    int regionStart_;
    int regionEnd_;
    int appendPos_;
    BOOL matchFound_;
    IOSIntArray *matchOffsets_;
    BOOL anchoringBounds_;
    BOOL transparentBounds_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)useTransparentBoundsImplWithLong:(long long)arg1 withBoolean:(BOOL)arg2;
+ (void)useAnchoringBoundsImplWithLong:(long long)arg1 withBoolean:(BOOL)arg2;
+ (void)setInputImplWithLong:(long long)arg1 withCharArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (BOOL)requireEndImplWithLong:(long long)arg1;
+ (long long)openImplWithLong:(long long)arg1;
+ (BOOL)matchesImplWithLong:(long long)arg1 withIntArray:(id)arg2;
+ (BOOL)lookingAtImplWithLong:(long long)arg1 withIntArray:(id)arg2;
+ (BOOL)hitEndImplWithLong:(long long)arg1;
+ (int)groupCountImplWithLong:(long long)arg1;
+ (BOOL)findNextImplWithLong:(long long)arg1 withIntArray:(id)arg2;
+ (BOOL)findImplWithLong:(long long)arg1 withInt:(int)arg2 withIntArray:(id)arg3;
+ (void)closeImplWithLong:(long long)arg1;
+ (id)quoteReplacementWithNSString:(id)arg1;
- (int)startWithInt:(int)arg1;
- (int)start;
- (int)groupCount;
- (id)groupWithInt:(int)arg1;
- (id)group;
- (int)endWithInt:(int)arg1;
- (int)end;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (BOOL)hitEnd;
- (BOOL)requireEnd;
- (int)regionEnd;
- (int)regionStart;
- (BOOL)hasTransparentBounds;
- (void)ensureMatch;
- (id)useTransparentBoundsWithBoolean:(BOOL)arg1;
- (BOOL)hasAnchoringBounds;
- (id)useAnchoringBoundsWithBoolean:(BOOL)arg1;
- (id)toMatchResult;
- (BOOL)matches;
- (BOOL)lookingAt;
- (BOOL)find;
- (BOOL)findWithInt:(int)arg1;
- (id)pattern;
- (id)replaceAllWithNSString:(id)arg1;
- (id)replaceFirstWithNSString:(id)arg1;
- (id)appendTailWithJavaLangStringBuilder:(id)arg1;
- (id)appendTailWithJavaLangStringBuffer:(id)arg1;
- (id)regionWithInt:(int)arg1 withInt:(int)arg2;
- (void)resetForInput;
- (id)usePatternWithJavaUtilRegexPattern:(id)arg1;
- (id)resetWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)resetWithJavaLangCharSequence:(id)arg1;
- (id)reset;
- (void)appendEvaluatedWithJavaLangStringBuilder:(id)arg1 withNSString:(id)arg2;
- (void)appendEvaluatedWithJavaLangStringBuffer:(id)arg1 withNSString:(id)arg2;
- (id)appendReplacementWithJavaLangStringBuilder:(id)arg1 withNSString:(id)arg2;
- (id)appendReplacementWithJavaLangStringBuffer:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaUtilRegexPattern:(id)arg1 withJavaLangCharSequence:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

