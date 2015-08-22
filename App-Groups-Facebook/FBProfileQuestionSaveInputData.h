//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBProfileQuestionSaveInputDataPrivacy, NSString;

@interface FBProfileQuestionSaveInputData : FBGraphQLInput
{
    NSString *_clientMutationId;
    NSString *_actorId;
    NSString *_profileQuestionId;
    NSString *_session;
    FBProfileQuestionSaveInputDataPrivacy *_privacy;
    NSString *_profileQuestionOptionId;
}

@property(copy, nonatomic) NSString *profileQuestionOptionId; // @synthesize profileQuestionOptionId=_profileQuestionOptionId;
@property(copy, nonatomic) FBProfileQuestionSaveInputDataPrivacy *privacy; // @synthesize privacy=_privacy;
@property(copy, nonatomic) NSString *session; // @synthesize session=_session;
@property(copy, nonatomic) NSString *profileQuestionId; // @synthesize profileQuestionId=_profileQuestionId;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

