//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface FBRangedDataListener : NSObject
{
    CDUnknownBlockType _dataReceivedCallback;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _sendHeaderCallback;
    CDUnknownBlockType _redirectCallback;
    struct _NSRange _range;
    struct _NSRange _absoluteRange;
    unsigned int _totalLength;
    BOOL _headerDone;
    BOOL _done;
    NSURL *_URL;
    NSString *_dataKey;
    unsigned int _bytesCached;
    unsigned int _prefetchBytesCached;
    unsigned int _cacheReadDurationMS;
    unsigned int _prefetchCacheReadDurationMS;
    unsigned int _sentOffset;
}

@property(readonly, nonatomic) BOOL done; // @synthesize done=_done;
@property(readonly, nonatomic) struct _NSRange absoluteRange; // @synthesize absoluteRange=_absoluteRange;
@property(readonly, nonatomic) unsigned int sentOffset; // @synthesize sentOffset=_sentOffset;
@property(readonly, nonatomic) BOOL headerDone; // @synthesize headerDone=_headerDone;
@property(nonatomic) unsigned int prefetchCacheReadDurationMS; // @synthesize prefetchCacheReadDurationMS=_prefetchCacheReadDurationMS;
@property(nonatomic) unsigned int cacheReadDurationMS; // @synthesize cacheReadDurationMS=_cacheReadDurationMS;
@property(nonatomic) unsigned int prefetchBytesCached; // @synthesize prefetchBytesCached=_prefetchBytesCached;
@property(nonatomic) unsigned int bytesCached; // @synthesize bytesCached=_bytesCached;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, copy, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
@property(readonly, retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) struct _NSRange unsatisfiedRange;
- (void)finish:(id)arg1;
- (void)sendRedirect;
- (void)sendBodyData:(id)arg1 range:(struct _NSRange)arg2 isCached:(BOOL)arg3 isPrefetched:(BOOL)arg4;
- (void)sendBodyData:(id)arg1 range:(struct _NSRange)arg2;
- (void)setResponseHeaderWithRange:(struct _NSRange)arg1 length:(unsigned int)arg2;
- (void)updateRangeLength:(unsigned int)arg1;
- (id)initWithDataRange:(struct _NSRange)arg1 absoluteDataRange:(struct _NSRange)arg2 dataKey:(id)arg3 URL:(id)arg4 dataReceivedCallback:(CDUnknownBlockType)arg5 sendHeaderCallback:(CDUnknownBlockType)arg6 sendRedirectCallback:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)init;

@end

