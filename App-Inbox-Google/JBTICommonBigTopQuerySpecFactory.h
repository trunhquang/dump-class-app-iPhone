//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JBTICommonBigTopQuerySpecFactory : NSObject
{
    id <ComGoogleCumulusApiBigSet> bigSet_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithComGoogleCumulusApiBigSet_;
+ (id)__annotations;
- (void)dealloc;
- (id)createQuerySpecWithJBTCBigTopCommonEnums_TypeIdEnum:(id)arg1 withJavaUtilList:(id)arg2 withInt:(int)arg3 withJBTICommonQueryExtension:(id)arg4 withNSString:(id)arg5;
- (id)newQueryByPredicateWithComGoogleCumulusQueryQueryProto_Query_Predicate:(id)arg1 withJBTCBigTopCommonEnums_TypeIdEnum:(id)arg2 withJavaUtilList:(id)arg3 withInt:(int)arg4 withJBTICommonQueryExtension:(id)arg5 withNSString:(id)arg6;
- (id)newQueryByIdListWithJavaUtilList:(id)arg1 withJBTCBigTopCommonEnums_TypeIdEnum:(id)arg2 withJavaUtilList:(id)arg3 withInt:(int)arg4 withJBTICommonQueryExtension:(id)arg5 withNSString:(id)arg6;
- (id)initWithComGoogleCumulusApiBigSet:(id)arg1;

@end

