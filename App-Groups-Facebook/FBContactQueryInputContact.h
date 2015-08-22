//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBContactQueryInputContactName, NSArray, NSString;

@interface FBContactQueryInputContact : FBGraphQLInput
{
    NSString *_key;
    FBContactQueryInputContactName *_name;
    NSArray *_emails;
    NSArray *_phones;
}

@property(copy, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(copy, nonatomic) NSArray *emails; // @synthesize emails=_emails;
@property(copy, nonatomic) FBContactQueryInputContactName *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

