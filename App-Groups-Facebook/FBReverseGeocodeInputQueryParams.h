//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray, NSString;

@interface FBReverseGeocodeInputQueryParams : FBGraphQLInput
{
    NSArray *_gpsPoints;
    NSString *_language;
}

@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSArray *gpsPoints; // @synthesize gpsPoints=_gpsPoints;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

