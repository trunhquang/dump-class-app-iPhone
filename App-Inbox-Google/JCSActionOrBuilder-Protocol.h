//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class JCSActionResponse, JCSAssignedId, JCSButtonAction, JCSCallAction, JCSDonateEmailAction, JCSEmailAction, JCSGoTo, JCSIntentAction, JCSReviewAction, JCSRsvpAction, JCSTime, JCSViewMapAction;

@protocol JCSActionOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCSViewMapAction *)getViewMapAction;
- (BOOL)hasViewMapAction;
- (JCSEmailAction *)getEmailAction;
- (BOOL)hasEmailAction;
- (JCSCallAction *)getCallAction;
- (BOOL)hasCallAction;
- (JCSIntentAction *)getIntentAction;
- (BOOL)hasIntentAction;
- (JCSGoTo *)getGoToAction;
- (BOOL)hasGoToAction;
- (JCSDonateEmailAction *)getDonateEmailAction;
- (BOOL)hasDonateEmailAction;
- (JCSButtonAction *)getButtonAction;
- (BOOL)hasButtonAction;
- (JCSReviewAction *)getReviewAction;
- (BOOL)hasReviewAction;
- (JCSRsvpAction *)getRsvpAction;
- (BOOL)hasRsvpAction;
- (JCSTime *)getStartTime;
- (BOOL)hasStartTime;
- (JCSTime *)getExpirationTime;
- (BOOL)hasExpirationTime;
- (JCSActionResponse *)getExternalServiceResponse;
- (BOOL)hasExternalServiceResponse;
- (JCSAssignedId *)getAssignedId;
- (BOOL)hasAssignedId;
@end

