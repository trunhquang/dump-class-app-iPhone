//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Property.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface CountryModel : Property <NSCoding>
{
    BOOL isFullSupport;
    NSArray *cities;
    NSArray *categories;
    NSString *countryCode;
    NSString *languageCode;
    NSString *apiServiceURL;
    NSString *mediaServiceURL;
}

@property(copy, nonatomic) NSString *mediaServiceURL; // @synthesize mediaServiceURL;
@property(copy, nonatomic) NSString *apiServiceURL; // @synthesize apiServiceURL;
@property(nonatomic) BOOL isFullSupport; // @synthesize isFullSupport;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories;
@property(retain, nonatomic) NSArray *cities; // @synthesize cities;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCities:(id)arg1 categories:(id)arg2 countryCode:(id)arg3 languageCode:(id)arg4 isFullSupport:(BOOL)arg5 apiServiceURL:(id)arg6 mediaServiceURL:(id)arg7 coder:(id)arg8;

@end

