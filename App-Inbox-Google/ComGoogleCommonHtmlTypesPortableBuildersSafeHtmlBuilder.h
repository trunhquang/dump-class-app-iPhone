//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ComGoogleCommonHtmlTypesPortableBuildersSafeHtmlBuilder : NSObject
{
    NSString *elementName_;
    id <JavaUtilMap> attributes_;
    id <JavaUtilList> contents_;
    BOOL hrefSetFromSafeUrl_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)createUnmodifiableSetWithNSStringArray:(id)arg1;
- (void)dealloc;
- (id)setAttributeWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)build;
- (id)escapeAndAppendContentWithNSString:(id)arg1;
- (void)checkNotVoidElement;
- (id)appendContentWithJavaUtilIterator:(id)arg1;
- (id)appendContentWithJavaLangIterable:(id)arg1;
- (id)appendContentWithComGoogleCommonHtmlTypesSafeHtmlArray:(id)arg1;
- (id)setTitleWithNSString:(id)arg1;
- (id)setTargetWithComGoogleCommonHtmlTypesPortableBuildersSafeHtmlBuilder_TargetValueEnum:(id)arg1;
- (id)setValueWithNSString:(id)arg1;
- (id)setTypeWithNSString:(id)arg1;
- (id)setRelWithNSString:(id)arg1;
- (id)setStyleWithComGoogleCommonHtmlTypesSafeStyle:(id)arg1;
- (id)setSrcWithComGoogleCommonHtmlTypesTrustedResourceUrl:(id)arg1;
- (id)setSrcWithComGoogleCommonHtmlTypesSafeUrl:(id)arg1;
- (id)setPlaceholderWithNSString:(id)arg1;
- (id)setNameWithNSString:(id)arg1;
- (id)setIdWithPrefixWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setIdWithNSString:(id)arg1;
- (id)setHrefWithComGoogleCommonHtmlTypesTrustedResourceUrl:(id)arg1;
- (id)setHrefWithComGoogleCommonHtmlTypesSafeUrl:(id)arg1;
- (id)setDirWithComGoogleCommonHtmlTypesPortableBuildersSafeHtmlBuilder_DirValueEnum:(id)arg1;
- (id)setDataAttributeWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setColorWithNSString:(id)arg1;
- (id)setClassWithNSString:(id)arg1;
- (id)setAltWithNSString:(id)arg1;
- (id)initWithNSString:(id)arg1;

@end

