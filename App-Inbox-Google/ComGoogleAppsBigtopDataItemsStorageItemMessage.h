//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataItemsItemsSyncProtos_MessageDetails, NSString;

@interface ComGoogleAppsBigtopDataItemsStorageItemMessage : NSObject
{
    long long itemRowId_;
    NSString *messageServerPermId_;
    ComGoogleAppsBigtopDataItemsItemsSyncProtos_MessageDetails *messageProto_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_messageProto_;
+ (id)__annotations_getMessageProto;
+ (id)__annotations_initWithLong_withNSString_withComGoogleAppsBigtopDataItemsItemsSyncProtos_MessageDetails__params;
+ (id)createWithoutProtoWithLong:(long long)arg1 withNSString:(id)arg2;
+ (id)createWithProtoWithLong:(long long)arg1 withNSString:(id)arg2 withComGoogleAppsBigtopDataItemsItemsSyncProtos_MessageDetails:(id)arg3;
- (void)dealloc;
- (BOOL)hasMessageProto;
- (id)getMessageProto;
- (id)getMessageServerPermId;
- (long long)getItemRowId;
- (id)initWithLong:(long long)arg1 withNSString:(id)arg2 withComGoogleAppsBigtopDataItemsItemsSyncProtos_MessageDetails:(id)arg3;

@end

