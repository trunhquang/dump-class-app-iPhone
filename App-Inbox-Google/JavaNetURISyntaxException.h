//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangException.h"

@class NSString;

@interface JavaNetURISyntaxException : JavaLangException
{
    NSString *input_;
    int index_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getMessage;
- (id)getInput;
- (id)getReason;
- (int)getIndex;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3;

@end

