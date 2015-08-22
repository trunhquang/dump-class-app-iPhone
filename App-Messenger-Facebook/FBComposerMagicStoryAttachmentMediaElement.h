//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface FBComposerMagicStoryAttachmentMediaElement : FBValueObject <NSCopying, NSCoding>
{
    BOOL _isHighlighted;
    NSString *_mediaType;
    NSArray *_assetIds;
}

@property(readonly, nonatomic) BOOL isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(readonly, copy, nonatomic) NSArray *assetIds; // @synthesize assetIds=_assetIds;
@property(readonly, copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (id)initWithMediaType:(id)arg1 assetIds:(id)arg2 isHighlighted:(BOOL)arg3;

@end
