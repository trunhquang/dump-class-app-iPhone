//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSURL;

@interface MNAdaptiveImageDownloaderStreamingConfiguration : FBValueObject <NSCopying>
{
    NSURL *_url;
    unsigned int _imageFlags;
}

@property(readonly, nonatomic) unsigned int imageFlags; // @synthesize imageFlags=_imageFlags;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithUrl:(id)arg1 imageFlags:(unsigned int)arg2;

@end

