//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaUtilLinkedHashMap, NSString;

@interface JBTICommonSimpleUriBuilder : NSObject
{
    NSString *urlWithoutQueryParameters_;
    JavaUtilLinkedHashMap *queryParamMap_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getQueryParameterWithNSString_;
+ (void)initialize;
+ (id)parseParametersWithNSString:(id)arg1;
+ (id)parseWithNSString:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)build;
- (id)getQueryParameterWithNSString:(id)arg1;
- (id)addParamsFromQueryStringWithNSString:(id)arg1;
- (id)addQueryParameterWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1;

@end

