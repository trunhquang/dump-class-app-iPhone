//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum, JavaLangLong, NSString;

@interface ComGoogleAppsBigtopDataItemsStorageItemVisibilityEntry : NSObject
{
    JavaLangLong *itemRowId_;
    ComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum *viewType_;
    JavaLangLong *clusterRowId_;
    NSString *rank_;
    NSString *clusterRank_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_clusterRank_;
+ (id)__annotations_clusterRowId_;
+ (id)__annotations_getClusterRank;
+ (id)__annotations_getClusterRowId;
+ (id)__annotations_initWithJavaLangLong_withComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum_withJavaLangLong_withNSString_withNSString__params;
+ (void)initialize;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)getClusterRank;
- (id)getRank;
- (id)getClusterRowId;
- (id)getViewType;
- (id)getItemRowId;
- (id)initWithJavaLangLong:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum:(id)arg2 withJavaLangLong:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5;

@end

