//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface FLAnimatedWebPDemuxer : NSObject
{
    struct WebPDemuxer *_demuxer;
    NSData *_data;
}

- (void).cxx_destruct;
- (struct WebPDemuxer *)demuxer;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

