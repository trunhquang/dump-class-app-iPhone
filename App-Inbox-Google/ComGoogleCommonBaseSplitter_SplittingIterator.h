//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonBaseAbstractIterator.h"

@class ComGoogleCommonBaseCharMatcher;

@interface ComGoogleCommonBaseSplitter_SplittingIterator : ComGoogleCommonBaseAbstractIterator
{
    id <JavaLangCharSequence> toSplit_;
    ComGoogleCommonBaseCharMatcher *trimmer_;
    BOOL omitEmptyStrings_;
    int offset_;
    int limit_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)computeNext;
- (id)initWithComGoogleCommonBaseSplitter:(id)arg1 withJavaLangCharSequence:(id)arg2;
- (int)separatorEndWithInt:(int)arg1;
- (int)separatorStartWithInt:(int)arg1;

@end

