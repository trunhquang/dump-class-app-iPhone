//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSNumber;

@interface FBPlaceTipsNeighborhoodInputNeighborhoodTriggerDataViewerCoordinates : FBGraphQLInput
{
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_accuracy;
    NSNumber *_staleTime;
}

@property(copy, nonatomic) NSNumber *staleTime; // @synthesize staleTime=_staleTime;
@property(copy, nonatomic) NSNumber *accuracy; // @synthesize accuracy=_accuracy;
@property(copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

