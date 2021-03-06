//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBScenePath, NSString, NSURL;

@interface FBImagePrefetchSpecifier : NSObject
{
    BOOL _useImageStreamer;
    BOOL _prefetchOnCellular;
    NSURL *_url;
    NSString *_module;
    unsigned int _desiredImageFlag;
    FBScenePath *_scenePath;
}

@property(readonly, nonatomic) BOOL prefetchOnCellular; // @synthesize prefetchOnCellular=_prefetchOnCellular;
@property(readonly, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
@property(readonly, nonatomic) unsigned int desiredImageFlag; // @synthesize desiredImageFlag=_desiredImageFlag;
@property(readonly, nonatomic) BOOL useImageStreamer; // @synthesize useImageStreamer=_useImageStreamer;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithURL:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 prefetchOnCellular:(BOOL)arg4;
- (id)initWithURL:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 useImageStreamer:(BOOL)arg4 desiredImageFlag:(unsigned int)arg5 prefetchOnCellular:(BOOL)arg6;

@end

