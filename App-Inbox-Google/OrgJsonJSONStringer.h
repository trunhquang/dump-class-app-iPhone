//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaLangStringBuilder, NSString;

@interface OrgJsonJSONStringer : NSObject
{
    JavaLangStringBuilder *out_;
    id <JavaUtilList> stack_;
    NSString *indent_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)description;
- (void)beforeValue;
- (void)beforeKey;
- (id)keyWithNSString:(id)arg1;
- (void)newline;
- (void)stringWithNSString:(id)arg1;
- (id)valueWithLong:(long long)arg1;
- (id)valueWithDouble:(double)arg1;
- (id)valueWithBoolean:(BOOL)arg1;
- (id)valueWithId:(id)arg1;
- (void)replaceTopWithOrgJsonJSONStringer_ScopeEnum:(id)arg1;
- (id)peek;
- (id)closeWithOrgJsonJSONStringer_ScopeEnum:(id)arg1 withOrgJsonJSONStringer_ScopeEnum:(id)arg2 withNSString:(id)arg3;
- (id)openWithOrgJsonJSONStringer_ScopeEnum:(id)arg1 withNSString:(id)arg2;
- (id)endObject;
- (id)object;
- (id)endArray;
- (id)array;
- (id)initWithInt:(int)arg1;
- (id)init;

@end

