//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSString;

@interface FBSearchSuggestionSetInputQueryFragments : FBGraphQLInput
{
    NSString *_text;
    NSString *_graphQLID;
    NSString *_grammarType;
}

@property(copy, nonatomic) NSString *grammarType; // @synthesize grammarType=_grammarType;
@property(copy, nonatomic) NSString *graphQLID; // @synthesize graphQLID=_graphQLID;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

