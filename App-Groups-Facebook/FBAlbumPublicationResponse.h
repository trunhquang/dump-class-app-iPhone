//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBAlbumPublicationResponse : FBValueObject <NSCopying>
{
    NSString *_albumGraphQLID;
}

@property(readonly, copy, nonatomic) NSString *albumGraphQLID; // @synthesize albumGraphQLID=_albumGraphQLID;
- (void).cxx_destruct;
- (id)initWithAlbumGraphQLID:(id)arg1;

@end

