//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class JCSAssignedId, JCSOffer, NSString;

@protocol JCSProductOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (BOOL)getIsDigital;
- (BOOL)hasIsDigital;
- (JCSOffer *)getOfferWithInt:(int)arg1;
- (id <JavaUtilList>)getOfferList;
- (int)getOfferCount;
- (NSString *)getImageUrl;
- (BOOL)hasImageUrl;
- (NSString *)getName;
- (BOOL)hasName;
- (JCSAssignedId *)getAssignedId;
- (BOOL)hasAssignedId;
@end

