//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudPagingResponse.h"

@class CityModel, NSMutableArray;

@interface BranchDetailResponse : CloudPagingResponse
{
    NSMutableArray *cityList;
    CityModel *_currentProp;
}

@property(retain, nonatomic) CityModel *currentProp; // @synthesize currentProp=_currentProp;
@property(retain, nonatomic) NSMutableArray *cityList; // @synthesize cityList;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)init;
- (id)getResponsedCityList;

@end

