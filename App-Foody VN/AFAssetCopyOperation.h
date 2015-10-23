//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "AFAssetDownloadProcessingOperation.h"

@class NSError, NSString, NSURL;

@interface AFAssetCopyOperation : NSOperation <AFAssetDownloadProcessingOperation>
{
    CDUnknownBlockType _progressBlock;
    NSError *_error;
    NSURL *_URL;
    NSString *_destinationPath;
}

@property(retain, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)main;
- (id)initWithDestinationPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

