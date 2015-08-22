//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBBoostedComponentCreateInputDataCreative, FBBoostedComponentCreateInputDataTargetSpec, NSNumber, NSString;

@interface FBBoostedComponentCreateInputData : FBGraphQLInput
{
    NSString *_clientMutationId;
    NSString *_actorId;
    NSString *_pageId;
    NSString *_adAccountId;
    NSString *_boostedComponentApp;
    NSNumber *_stopTime;
    FBBoostedComponentCreateInputDataCreative *_creative;
    FBBoostedComponentCreateInputDataTargetSpec *_targetSpec;
    NSNumber *_budget;
    NSString *_placement;
}

@property(copy, nonatomic) NSString *placement; // @synthesize placement=_placement;
@property(copy, nonatomic) NSNumber *budget; // @synthesize budget=_budget;
@property(copy, nonatomic) FBBoostedComponentCreateInputDataTargetSpec *targetSpec; // @synthesize targetSpec=_targetSpec;
@property(copy, nonatomic) FBBoostedComponentCreateInputDataCreative *creative; // @synthesize creative=_creative;
@property(copy, nonatomic) NSNumber *stopTime; // @synthesize stopTime=_stopTime;
@property(copy, nonatomic) NSString *boostedComponentApp; // @synthesize boostedComponentApp=_boostedComponentApp;
@property(copy, nonatomic) NSString *adAccountId; // @synthesize adAccountId=_adAccountId;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end
