//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class JCSAssignedId, JCSImage, JCSOrganization, NSString;

@protocol JCSRestaurantOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCSImage *)getImage;
- (BOOL)hasImage;
- (NSString *)getRestaurantId;
- (BOOL)hasRestaurantId;
- (JCSOrganization *)getOrganization;
- (BOOL)hasOrganization;
- (JCSAssignedId *)getAssignedId;
- (BOOL)hasAssignedId;
@end

