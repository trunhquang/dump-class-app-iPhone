//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleCommonCollectImmutableMultimap_Builder : NSObject
{
    id <ComGoogleCommonCollectMultimap> builderMultimap_;
    id <JavaUtilComparator> keyComparator_;
    id <JavaUtilComparator> valueComparator_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)build;
- (id)orderValuesByWithJavaUtilComparator:(id)arg1;
- (id)orderKeysByWithJavaUtilComparator:(id)arg1;
- (id)putAllWithComGoogleCommonCollectMultimap:(id)arg1;
- (id)putAllWithId:(id)arg1 withNSObjectArray:(id)arg2;
- (id)putAllWithId:(id)arg1 withJavaLangIterable:(id)arg2;
- (id)putWithJavaUtilMap_Entry:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)init;

@end

