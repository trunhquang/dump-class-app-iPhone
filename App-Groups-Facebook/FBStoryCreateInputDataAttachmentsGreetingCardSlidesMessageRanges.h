//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBStoryCreateInputDataAttachmentsGreetingCardSlidesMessageRangesEntity, NSNumber;

@interface FBStoryCreateInputDataAttachmentsGreetingCardSlidesMessageRanges : FBGraphQLInput
{
    NSNumber *_offset;
    NSNumber *_length;
    FBStoryCreateInputDataAttachmentsGreetingCardSlidesMessageRangesEntity *_entity;
}

@property(copy, nonatomic) FBStoryCreateInputDataAttachmentsGreetingCardSlidesMessageRangesEntity *entity; // @synthesize entity=_entity;
@property(copy, nonatomic) NSNumber *length; // @synthesize length=_length;
@property(copy, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

