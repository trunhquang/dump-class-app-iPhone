//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGooglePersonalizationAssistAnnotateApiAddress, ComGooglePersonalizationAssistAnnotateApiEmailAddress, ComGooglePersonalizationAssistAnnotateApiPhoneNumber, ComGooglePersonalizationAssistAnnotateApiTime, ComGooglePersonalizationAssistAnnotateApiTimeSchedule, NSString;

@protocol ComGooglePersonalizationAssistAnnotateApiOrganizationAssistanceOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getAccountNumber;
- (BOOL)hasAccountNumber;
- (NSString *)getAccountName;
- (BOOL)hasAccountName;
- (ComGooglePersonalizationAssistAnnotateApiTime *)getNextChange;
- (BOOL)hasNextChange;
- (BOOL)getIsOpen;
- (BOOL)hasIsOpen;
- (int)getLongitudeE7;
- (BOOL)hasLongitudeE7;
- (int)getLatitudeE7;
- (BOOL)hasLatitudeE7;
- (ComGooglePersonalizationAssistAnnotateApiTimeSchedule *)getOperatingHours;
- (BOOL)hasOperatingHours;
- (ComGooglePersonalizationAssistAnnotateApiEmailAddress *)getEmailAddress;
- (BOOL)hasEmailAddress;
- (ComGooglePersonalizationAssistAnnotateApiPhoneNumber *)getPhoneNumber;
- (BOOL)hasPhoneNumber;
- (ComGooglePersonalizationAssistAnnotateApiAddress *)getAddress;
- (BOOL)hasAddress;
- (NSString *)getBusinessName;
- (BOOL)hasBusinessName;
@end

