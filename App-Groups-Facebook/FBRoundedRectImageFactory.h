//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBCache;

@interface FBRoundedRectImageFactory : NSObject
{
    FBCache *_RoundedRectImageCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)roundedRectImageWithSpec:(id)arg1;
- (id)initWithCache:(id)arg1;
- (id)init;

@end

