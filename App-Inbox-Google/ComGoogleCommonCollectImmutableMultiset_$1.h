//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectUnmodifiableIterator.h"

@interface ComGoogleCommonCollectImmutableMultiset_$1 : ComGoogleCommonCollectUnmodifiableIterator
{
    int remaining_;
    id element_;
    id <JavaUtilIterator> val$entryIterator_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJavaUtilIterator:(id)arg1;
- (id)next;
- (BOOL)hasNext;

@end

