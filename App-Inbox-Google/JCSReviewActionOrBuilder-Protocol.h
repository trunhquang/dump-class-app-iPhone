//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class JCSFieldStatusEnum, JCSReviewAction_Option, JCSReviewAction_ReviewResponse;

@protocol JCSReviewActionOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCSReviewAction_ReviewResponse *)getReviewResponse;
- (BOOL)hasReviewResponse;
- (JCSReviewAction_Option *)getOptionWithInt:(int)arg1;
- (id <JavaUtilList>)getOptionList;
- (int)getOptionCount;
- (int)getBestRating;
- (BOOL)hasBestRating;
- (int)getWorstRating;
- (BOOL)hasWorstRating;
- (JCSFieldStatusEnum *)getOptionField;
- (BOOL)hasOptionField;
- (JCSFieldStatusEnum *)getRatingField;
- (BOOL)hasRatingField;
- (JCSFieldStatusEnum *)getReviewBodyField;
- (BOOL)hasReviewBodyField;
@end

