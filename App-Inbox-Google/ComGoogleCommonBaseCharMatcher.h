//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonBasePredicate.h"

@class NSString;

@interface ComGoogleCommonBaseCharMatcher : NSObject <ComGoogleCommonBasePredicate>
{
    NSString *description__;
}

+ (void)initialize;
+ (id)forPredicateWithComGoogleCommonBasePredicate:(id)arg1;
+ (id)inRangeWithChar:(unsigned short)arg1 withChar:(unsigned short)arg2 withNSString:(id)arg3;
+ (id)inRangeWithChar:(unsigned short)arg1 withChar:(unsigned short)arg2;
+ (id)noneOfWithJavaLangCharSequence:(id)arg1;
+ (id)anyOfWithJavaLangCharSequence:(id)arg1;
+ (id)isNotWithChar:(unsigned short)arg1;
+ (id)isWithChar:(unsigned short)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (BOOL)applyWithId:(id)arg1;
- (id)finishCollapseFromWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withChar:(unsigned short)arg4 withJavaLangStringBuilder:(id)arg5 withBoolean:(BOOL)arg6;
- (id)trimAndCollapseFromWithJavaLangCharSequence:(id)arg1 withChar:(unsigned short)arg2;
- (id)collapseFromWithJavaLangCharSequence:(id)arg1 withChar:(unsigned short)arg2;
- (id)trimTrailingFromWithJavaLangCharSequence:(id)arg1;
- (id)trimLeadingFromWithJavaLangCharSequence:(id)arg1;
- (id)trimFromWithJavaLangCharSequence:(id)arg1;
- (id)replaceFromWithJavaLangCharSequence:(id)arg1 withJavaLangCharSequence:(id)arg2;
- (id)replaceFromWithJavaLangCharSequence:(id)arg1 withChar:(unsigned short)arg2;
- (id)retainFromWithJavaLangCharSequence:(id)arg1;
- (id)removeFromWithJavaLangCharSequence:(id)arg1;
- (int)countInWithJavaLangCharSequence:(id)arg1;
- (int)lastIndexInWithJavaLangCharSequence:(id)arg1;
- (int)indexInWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2;
- (int)indexInWithJavaLangCharSequence:(id)arg1;
- (BOOL)matchesNoneOfWithJavaLangCharSequence:(id)arg1;
- (BOOL)matchesAllOfWithJavaLangCharSequence:(id)arg1;
- (BOOL)matchesAnyOfWithJavaLangCharSequence:(id)arg1;
- (void)setBitsWithJavaUtilBitSet:(id)arg1;
- (id)precomputedInternal;
- (id)withToStringWithNSString:(id)arg1;
- (id)precomputed;
- (id)or__WithComGoogleCommonBaseCharMatcher:(id)arg1;
- (id)and__WithComGoogleCommonBaseCharMatcher:(id)arg1;
- (id)negate;
- (id)init;
- (id)initWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

