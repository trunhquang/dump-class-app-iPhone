//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudResponse.h"

@class Brand, CityModel, ImageResource, NSMutableArray;

@interface BrandDetailResponse : CloudResponse
{
    Brand *currentBrand;
    ImageResource *imageResource;
    NSMutableArray *imageResourceList;
    CityModel *currentProp;
}

@property(retain, nonatomic) CityModel *currentProp; // @synthesize currentProp;
@property(retain, nonatomic) NSMutableArray *imageResourceList; // @synthesize imageResourceList;
@property(retain, nonatomic) ImageResource *imageResource; // @synthesize imageResource;
@property(retain, nonatomic) Brand *currentBrand; // @synthesize currentBrand;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)init;
- (id)getResponsedBrand;

@end

