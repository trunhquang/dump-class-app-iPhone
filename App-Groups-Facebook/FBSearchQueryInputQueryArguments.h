//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBSearchQueryInputQueryArgumentsFilteredQueryArguments, NSNumber, NSString;

@interface FBSearchQueryInputQueryArguments : FBGraphQLInput
{
    NSNumber *_graphQLID;
    NSString *_hashtag;
    NSString *_text;
    NSString *_bqf;
    FBSearchQueryInputQueryArgumentsFilteredQueryArguments *_filteredQueryArguments;
}

@property(copy, nonatomic) FBSearchQueryInputQueryArgumentsFilteredQueryArguments *filteredQueryArguments; // @synthesize filteredQueryArguments=_filteredQueryArguments;
@property(copy, nonatomic) NSString *bqf; // @synthesize bqf=_bqf;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *hashtag; // @synthesize hashtag=_hashtag;
@property(copy, nonatomic) NSNumber *graphQLID; // @synthesize graphQLID=_graphQLID;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

