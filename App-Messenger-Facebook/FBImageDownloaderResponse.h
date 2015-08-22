//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface FBImageDownloaderResponse : NSObject
{
    struct CGImage *_image;
    unsigned int _imageSource;
    NSError *_error;
    id _extraData;
}

+ (id)newWithError:(id)arg1;
+ (id)newWithImage:(struct CGImage *)arg1 source:(unsigned int)arg2;
+ (id)newWithCachedImage:(id)arg1 source:(unsigned int)arg2 error:(id)arg3;
+ (id)newWithCachedImage:(id)arg1 source:(unsigned int)arg2;
+ (id)newWithImage:(struct CGImage *)arg1 source:(unsigned int)arg2 error:(id)arg3;
+ (id)newWithImage:(struct CGImage *)arg1 extraData:(id)arg2 source:(unsigned int)arg3 error:(id)arg4;
@property(retain, nonatomic) id extraData; // @synthesize extraData=_extraData;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned int imageSource; // @synthesize imageSource=_imageSource;
@property(readonly, nonatomic) struct CGImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isCached;
- (id)webP_animatedImage;
- (id)animatedImage;

@end
