//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleProtobufExtensionLite;

@interface JBTICommonQueryExtension : NSObject
{
    ComGoogleProtobufExtensionLite *extension_;
    id <ComGoogleProtobufMessageLite> message_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
+ (void)initialize;
+ (id)wrapWithComGoogleProtobufExtensionLite:(id)arg1 withComGoogleProtobufMessageLite:(id)arg2;
+ (id)none;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)getMessage;
- (id)getExtension;
- (void)decorateWithComGoogleCumulusApiQuerySpec:(id)arg1;
- (id)initWithComGoogleProtobufExtensionLite:(id)arg1 withComGoogleProtobufMessageLite:(id)arg2;

@end

