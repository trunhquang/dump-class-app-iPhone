//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBCheckinSearchQueryInputQueryParamsTaggableActivity, FBCheckinSearchQueryInputQueryParamsViewerCoordinates, NSNumber, NSString;

@interface FBCheckinSearchQueryInputQueryParams : FBGraphQLInput
{
    NSString *_query;
    FBCheckinSearchQueryInputQueryParamsViewerCoordinates *_viewerCoordinates;
    NSString *_locationExtraData;
    NSNumber *_category;
    NSString *_address;
    NSString *_city;
    NSString *_website;
    NSString *_phone;
    FBCheckinSearchQueryInputQueryParamsTaggableActivity *_taggableActivity;
}

@property(copy, nonatomic) FBCheckinSearchQueryInputQueryParamsTaggableActivity *taggableActivity; // @synthesize taggableActivity=_taggableActivity;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *website; // @synthesize website=_website;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSNumber *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *locationExtraData; // @synthesize locationExtraData=_locationExtraData;
@property(copy, nonatomic) FBCheckinSearchQueryInputQueryParamsViewerCoordinates *viewerCoordinates; // @synthesize viewerCoordinates=_viewerCoordinates;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end
