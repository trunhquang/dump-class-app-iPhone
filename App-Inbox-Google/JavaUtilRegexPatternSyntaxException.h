//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangIllegalArgumentException.h"

@class NSString;

@interface JavaUtilRegexPatternSyntaxException : JavaLangIllegalArgumentException
{
    NSString *desc_;
    NSString *pattern_;
    int index_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)getIndex;
- (id)getDescription;
- (id)getMessage;
- (id)getPattern;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3;

@end

