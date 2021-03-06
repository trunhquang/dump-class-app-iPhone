//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL, UIImage;

@interface MNComposerImageLoader : NSObject <NSCopying>
{
    unsigned int _subtype;
    NSString *_bundleImage_name;
    UIImage *_image_image;
    NSURL *_networkImage_url;
}

+ (id)networkImageWithUrl:(id)arg1;
+ (id)imageWithImage:(id)arg1;
+ (id)bundleImageWithName:(id)arg1;
- (void).cxx_destruct;
- (void)matchBundleImage:(CDUnknownBlockType)arg1 image:(CDUnknownBlockType)arg2 networkImage:(CDUnknownBlockType)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

