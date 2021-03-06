//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBComposerAuthor, FBComposerPublishTarget, NSString;

@interface FBComposerDataFetchResponse : FBValueObject <NSCopying>
{
    NSString *_graphQLID;
    FBComposerAuthor *_author;
    FBComposerPublishTarget *_publishTarget;
    unsigned int _sourceType;
}

@property(readonly, nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, copy, nonatomic) FBComposerPublishTarget *publishTarget; // @synthesize publishTarget=_publishTarget;
@property(readonly, copy, nonatomic) FBComposerAuthor *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSString *graphQLID; // @synthesize graphQLID=_graphQLID;
- (void).cxx_destruct;
- (id)initWithGraphQLID:(id)arg1 author:(id)arg2 publishTarget:(id)arg3 sourceType:(unsigned int)arg4;

@end

