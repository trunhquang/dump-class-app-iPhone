//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudResponse.h"

@class NSString;

@interface SubmitPromotionResponse : CloudResponse
{
    NSString *promotionId;
}

@property(copy, nonatomic) NSString *promotionId; // @synthesize promotionId;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)getResponsedPromotionId;
- (id)init;

@end

