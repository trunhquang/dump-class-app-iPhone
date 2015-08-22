//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSError, NSURL, UIImage;

@interface MNImageFetchResult : FBValueObject <NSCopying>
{
    NSURL *_imageURL;
    UIImage *_image;
    NSError *_error;
}

@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)initWithImageURL:(id)arg1 image:(id)arg2 error:(id)arg3;

@end
