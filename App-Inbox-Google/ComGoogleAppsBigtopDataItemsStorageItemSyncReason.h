//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ComGoogleAppsBigtopDataItemsStorageItemSyncReason : NSObject
{
    long long itemRowId_;
    long long syncReasonRowId_;
    NSString *subscriptionRank_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_subscriptionRank_;
+ (id)__annotations_getSubscriptionRank;
+ (id)__annotations_initWithLong_withLong_withNSString__params;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)getSubscriptionRank;
- (long long)getSyncReasonRowId;
- (long long)getItemRowId;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withNSString:(id)arg3;

@end

