//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBScenePath, NSObject<OS_dispatch_queue>, NSURL;

@protocol FBImageStreamingService <NSObject>
- (void)updateScenePath:(FBScenePath *)arg1 andPriority:(int)arg2 forToken:(id)arg3;
- (void)clearAllImageCache:(void (^)(NSString *, NSString *))arg1;
- (void)cancelStreamingForToken:(id)arg1;
- (id)streamImageWithURL:(NSURL *)arg1 desiredImageFlag:(unsigned int)arg2 imageFlagsToBeNotified:(unsigned int)arg3 scenePath:(FBScenePath *)arg4 priority:(int)arg5 callPath:(id <FBCallPath>)arg6 options:(unsigned int)arg7 queue:(NSObject<OS_dispatch_queue> *)arg8 streamingBlock:(void (^)(FBImageStreamingResponse *))arg9;
@end

