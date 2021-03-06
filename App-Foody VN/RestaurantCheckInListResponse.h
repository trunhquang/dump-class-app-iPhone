//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RestaurantReviewListResponse.h"

@class Checkin, ImageResource, NSMutableArray, Photo, Restaurant, User;

@interface RestaurantCheckInListResponse : RestaurantReviewListResponse
{
    NSMutableArray *_imageResourceList;
    ImageResource *_imageResource;
    NSMutableArray *_checkinList;
    NSMutableArray *_photoList;
    NSMutableArray *_currentList;
    Checkin *_currentCheckin;
    Photo *_currentPhoto;
    User *_currentUser;
    Restaurant *_currentRes;
}

@property(retain, nonatomic) Restaurant *currentRes; // @synthesize currentRes=_currentRes;
@property(retain, nonatomic) User *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) Photo *currentPhoto; // @synthesize currentPhoto=_currentPhoto;
@property(retain, nonatomic) Checkin *currentCheckin; // @synthesize currentCheckin=_currentCheckin;
@property(retain, nonatomic) NSMutableArray *currentList; // @synthesize currentList=_currentList;
@property(retain, nonatomic) NSMutableArray *photoList; // @synthesize photoList=_photoList;
@property(retain, nonatomic) NSMutableArray *checkinList; // @synthesize checkinList=_checkinList;
@property(retain, nonatomic) ImageResource *imageResource; // @synthesize imageResource=_imageResource;
@property(retain, nonatomic) NSMutableArray *imageResourceList; // @synthesize imageResourceList=_imageResourceList;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)getResponsedCheckinList;
- (id)init;

@end

