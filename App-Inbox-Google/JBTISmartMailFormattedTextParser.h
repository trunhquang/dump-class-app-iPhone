//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTISmartMailSmartMailTranslationHelper, JBTISmartMailTimeHelper;

@interface JBTISmartMailFormattedTextParser : NSObject
{
    JBTISmartMailTimeHelper *timeHelper_;
    JBTISmartMailSmartMailTranslationHelper *translationHelper_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (id)formatPluralPlaceholderWithJCSFormattedText_TextOrPlaceholder:(id)arg1;
- (id)formatDatePlaceholderWithJCSDatePlaceholder:(id)arg1;
- (id)formatPlaceholdersForTranslationParametersWithJavaUtilList:(id)arg1;
- (id)createTextRegionsFromTranslationIdWithJCSFormattedText:(id)arg1 withJavaUtilList:(id)arg2;
- (id)createTextRegionsFromPartListWithJCSFormattedText:(id)arg1;
- (id)formattedTextToTextRegionsWithJCSFormattedText:(id)arg1;
- (id)initWithJBTISmartMailTimeHelper:(id)arg1 withJBTISmartMailSmartMailTranslationHelper:(id)arg2;

@end

