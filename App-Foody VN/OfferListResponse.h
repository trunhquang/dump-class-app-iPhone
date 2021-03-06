//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudPagingResponse.h"

@class DayConstraint, ImageResource, NSMutableArray, Offer, Restaurant, TimeRange;

@interface OfferListResponse : CloudPagingResponse
{
    NSMutableArray *offerList;
    Offer *currentOffer;
    NSMutableArray *restaurantList;
    Restaurant *currentRestaurant;
    ImageResource *imageResource;
    NSMutableArray *imageResourceList;
    TimeRange *timeRange;
    NSMutableArray *currentList;
    DayConstraint *dayConstraint;
}

@property(retain, nonatomic) DayConstraint *dayConstraint; // @synthesize dayConstraint;
@property(retain, nonatomic) NSMutableArray *currentList; // @synthesize currentList;
@property(retain, nonatomic) TimeRange *timeRange; // @synthesize timeRange;
@property(retain, nonatomic) NSMutableArray *imageResourceList; // @synthesize imageResourceList;
@property(retain, nonatomic) ImageResource *imageResource; // @synthesize imageResource;
@property(retain, nonatomic) Restaurant *currentRestaurant; // @synthesize currentRestaurant;
@property(retain, nonatomic) NSMutableArray *restaurantList; // @synthesize restaurantList;
@property(retain, nonatomic) Offer *currentOffer; // @synthesize currentOffer;
@property(retain, nonatomic) NSMutableArray *offerList; // @synthesize offerList;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)getResponsedOfferList;
- (id)init;

@end

