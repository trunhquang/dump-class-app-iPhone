//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSString;

@interface FBCommentCreateSubscribeInputData : FBGraphQLInput
{
    NSString *_clientSubscriptionId;
    NSString *_feedbackId;
    NSString *_actorId;
}

@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *feedbackId; // @synthesize feedbackId=_feedbackId;
@property(copy, nonatomic) NSString *clientSubscriptionId; // @synthesize clientSubscriptionId=_clientSubscriptionId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

