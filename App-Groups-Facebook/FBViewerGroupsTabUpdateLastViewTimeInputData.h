//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSNumber, NSString;

@interface FBViewerGroupsTabUpdateLastViewTimeInputData : FBGraphQLInput
{
    NSString *_clientMutationId;
    NSString *_actorId;
    NSNumber *_lastViewTime;
}

@property(copy, nonatomic) NSNumber *lastViewTime; // @synthesize lastViewTime=_lastViewTime;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

