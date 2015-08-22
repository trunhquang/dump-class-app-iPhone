//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class MNImageCreator, NSArray;

@interface MNProfileImageInfo : FBValueObject <NSCopying>
{
    NSArray *_imageURLs;
    MNImageCreator *_placeholderImageCreator;
}

@property(readonly, copy, nonatomic) MNImageCreator *placeholderImageCreator; // @synthesize placeholderImageCreator=_placeholderImageCreator;
@property(readonly, copy, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
- (void).cxx_destruct;
- (id)initWithImageURLs:(id)arg1 placeholderImageCreator:(id)arg2;

@end
