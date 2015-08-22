//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGooglePersonalizationAssistAnnotateApiImage, ComGooglePersonalizationAssistAnnotateApiTime, ComGooglePersonalizationAssistAnnotateStatusCodeEnum, NSString;

@protocol ComGooglePersonalizationAssistAnnotateApiFlightInfoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (long long)getExpirationDatetimeMillis;
- (BOOL)hasExpirationDatetimeMillis;
- (ComGooglePersonalizationAssistAnnotateApiImage *)getImage;
- (BOOL)hasImage;
- (NSString *)getImageUrl;
- (BOOL)hasImageUrl;
- (ComGooglePersonalizationAssistAnnotateStatusCodeEnum *)getStatusCode;
- (BOOL)hasStatusCode;
- (NSString *)getArrivalGate;
- (BOOL)hasArrivalGate;
- (NSString *)getDepartureGate;
- (BOOL)hasDepartureGate;
- (NSString *)getArrivalTerminal;
- (BOOL)hasArrivalTerminal;
- (NSString *)getDepartureTerminal;
- (BOOL)hasDepartureTerminal;
- (NSString *)getArrivalCity;
- (BOOL)hasArrivalCity;
- (NSString *)getArrivalAirportCode;
- (BOOL)hasArrivalAirportCode;
- (NSString *)getDepartureCity;
- (BOOL)hasDepartureCity;
- (NSString *)getDepartureAirportCode;
- (BOOL)hasDepartureAirportCode;
- (ComGooglePersonalizationAssistAnnotateApiTime *)getActualArrivalTime;
- (BOOL)hasActualArrivalTime;
- (ComGooglePersonalizationAssistAnnotateApiTime *)getArrivalTime;
- (BOOL)hasArrivalTime;
- (ComGooglePersonalizationAssistAnnotateApiTime *)getActualDepartureTime;
- (BOOL)hasActualDepartureTime;
- (ComGooglePersonalizationAssistAnnotateApiTime *)getDepartureTime;
- (BOOL)hasDepartureTime;
- (NSString *)getFlightNumber;
- (BOOL)hasFlightNumber;
- (NSString *)getAirlineCode;
- (BOOL)hasAirlineCode;
- (NSString *)getAirlineName;
- (BOOL)hasAirlineName;
@end

