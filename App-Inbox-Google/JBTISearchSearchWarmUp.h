//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTISearchZeroStateSuggestFetcher;

@interface JBTISearchSearchWarmUp : NSObject
{
    JBTISearchZeroStateSuggestFetcher *zeroStateSuggestFetcher_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithJBTISearchZeroStateSuggestFetcher_;
+ (id)__annotations;
- (void)dealloc;
- (void)warmUpWithJBTISearchZeroStateSuggestionsCache:(id)arg1 withNSString:(id)arg2 withJBTSpan:(id)arg3;
- (id)initWithJBTISearchZeroStateSuggestFetcher:(id)arg1;

@end

