//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL;

@protocol AFAssetDownloadProcessingOperation <NSObject>
@property(copy, nonatomic) CDUnknownBlockType progressBlock;
- (NSError *)error;
- (void)setURL:(NSURL *)arg1;
@end

