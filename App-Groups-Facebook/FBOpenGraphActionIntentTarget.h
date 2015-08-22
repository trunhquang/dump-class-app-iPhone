//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class FBMemOpenGraphAction, NSArray, NSURL;

@interface FBOpenGraphActionIntentTarget : FBIntentTarget
{
    NSArray *_iOSURLStrings;
    NSURL *_fallbackURL;
}

+ (id)openGraphActionTargetWithIOSURLStrings:(id)arg1 fallbackURL:(id)arg2;
+ (id)openGraphActionTargetWithOpenGraphAction:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(readonly, copy, nonatomic) NSArray *iOSURLStrings; // @synthesize iOSURLStrings=_iOSURLStrings;
- (void).cxx_destruct;
- (id)description;
- (id)fallbackURLs;
@property(readonly, nonatomic) FBMemOpenGraphAction *openGraphAction;

@end

