//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNForwardPreviewContentBase.h"

@class UIImage;

@interface MNForwardVideoPreviewContent : MNForwardPreviewContentBase
{
    UIImage *_thumbnail;
    double _duration;
}

@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (id)init;
- (id)initWithThumbnail:(id)arg1 duration:(double)arg2;

@end

