//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FLAnimatedImageData, FLAnimatedImageFrameCache, NSArray, UIImage;

@interface FLAnimatedImage : NSObject <NSCopying>
{
    FLAnimatedImageFrameCache *_frameCache;
    unsigned int _loopCount;
    NSArray *_delayTimes;
    unsigned int _frameCount;
    FLAnimatedImageData *_data;
    id <FLAnimatedImageFrameDataSource> _frameDataSource;
    struct CGSize _size;
}

@property(readonly, nonatomic) id <FLAnimatedImageFrameDataSource> frameDataSource; // @synthesize frameDataSource=_frameDataSource;
@property(readonly, nonatomic) FLAnimatedImageData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned int frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) NSArray *delayTimes; // @synthesize delayTimes=_delayTimes;
@property(readonly, nonatomic) unsigned int loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)description;
- (id)imageLazilyCachedAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) UIImage *posterImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithData:(id)arg1 size:(struct CGSize)arg2 loopCount:(unsigned int)arg3 frameCount:(unsigned int)arg4 delayTimes:(id)arg5 posterImage:(id)arg6 posterImageIndex:(unsigned int)arg7 frameDataSource:(id)arg8;

@end
