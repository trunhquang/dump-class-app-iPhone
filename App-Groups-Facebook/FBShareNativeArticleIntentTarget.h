//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class FBMemInstantArticle, NSString;

@interface FBShareNativeArticleIntentTarget : FBIntentTarget
{
    BOOL _onlyShowShareComposer;
    NSString *_graphQLID;
}

+ (id)shareNativeArticleTargetWithInstantArticleGraphQLID:(id)arg1 onlyShowShareComposer:(BOOL)arg2;
+ (id)shareNativeArticleTargetWithInstantArticle:(id)arg1 onlyShowShareComposer:(BOOL)arg2;
@property(readonly, nonatomic) BOOL onlyShowShareComposer; // @synthesize onlyShowShareComposer=_onlyShowShareComposer;
@property(readonly, copy, nonatomic) NSString *graphQLID; // @synthesize graphQLID=_graphQLID;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) FBMemInstantArticle *instantArticle;

@end

