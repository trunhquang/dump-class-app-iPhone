//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBScenePath;

@protocol FBWebImageDownloader <NSObject>
- (void)cancel;
- (void)downloadWithSpecifier:(id <FBWebImageSpecifier>)arg1 scenePath:(FBScenePath *)arg2 callPath:(id <FBCallPath>)arg3 downloadBlock:(void (^)(FBWebImageDownloadResponse *))arg4;
@end

