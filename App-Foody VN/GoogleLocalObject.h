//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class NSArray, NSString;

@interface GoogleLocalObject : NSObject <MKAnnotation>
{
    NSString *title;
    NSString *subtitle;
    CDStruct_2c43369c coordinate;
    NSString *streetAddress;
    NSString *city;
    NSString *region;
    NSString *phoneNumber;
    NSString *country;
    NSString *searchTerms;
    NSArray *fullAddressArray;
    NSString *fullAddressString;
}

@property(retain, nonatomic) NSString *fullAddressString; // @synthesize fullAddressString;
@property(retain, nonatomic) NSArray *fullAddressArray; // @synthesize fullAddressArray;
@property(retain, nonatomic) NSString *searchTerms; // @synthesize searchTerms;
@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(retain, nonatomic) NSString *region; // @synthesize region;
@property(retain, nonatomic) NSString *city; // @synthesize city;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber;
@property(retain, nonatomic) NSString *streetAddress; // @synthesize streetAddress;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 streetAddress:(id)arg4 city:(id)arg5 region:(id)arg6 phoneNumber:(id)arg7 country:(id)arg8 searchTerms:(id)arg9 fullAddress:(id)arg10;
- (id)initWithJsonResultDict:(id)arg1 searchTerms:(id)arg2;
- (id)initWithJsonResultDict:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 streetAddress:(id)arg5 city:(id)arg6 region:(id)arg7 phoneNumber:(id)arg8 country:(id)arg9 searchTerms:(id)arg10 fullAddress:(id)arg11;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

