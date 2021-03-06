//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBQPCreative, FBQPPromotionEntity, FBQuickPromotionClause, FBQuickPromotionCoordinator, FBQuickPromotionFiltersHelper, FBUserSession, NSArray, NSDate, NSDictionary, NSString;

@interface FBQPPromotion : NSObject
{
    FBUserSession *_session;
    NSArray *_filters;
    FBQuickPromotionClause *_rootClause;
    NSDictionary *_triggerContext;
    NSString *_nuxID;
    NSString *_activeTrigger;
    FBQPPromotionEntity *_promotionEntity;
}

@property(retain, nonatomic) FBQPPromotionEntity *promotionEntity; // @synthesize promotionEntity=_promotionEntity;
@property(copy, nonatomic) NSString *activeTrigger; // @synthesize activeTrigger=_activeTrigger;
@property(copy, nonatomic) NSString *nuxID; // @synthesize nuxID=_nuxID;
@property(copy, nonatomic) NSDictionary *triggerContext; // @synthesize triggerContext=_triggerContext;
@property(copy, nonatomic) FBQuickPromotionClause *rootClause; // @synthesize rootClause=_rootClause;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (id)rawJSON;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setTriggers:(id)arg1;
- (void)setPromotionID:(id)arg1;
- (void)setMaxImpressions:(int)arg1;
- (int)maxImpressions;
- (id)lastOccurrenceTime:(id)arg1;
- (unsigned int)occurrenceCountForEvent:(id)arg1;
- (void)logEvent:(id)arg1 extra:(id)arg2;
- (void)logEvent:(id)arg1;
- (id)actionForButtonTapEvent:(id)arg1;
- (id)handleButtonTapEvent:(id)arg1 withTriggerContext:(id)arg2;
- (id)handleButtonTapEvent:(id)arg1;
- (BOOL)disableCoolDown;
- (BOOL)fetchResourcesForDisplay;
- (BOOL)isReadyForDisplayWithDebugInfo:(id *)arg1;
@property(readonly, nonatomic, getter=isExposureHoldout) BOOL exposureHoldout;
@property(readonly, copy, nonatomic) NSArray *creatives;
- (id)originalCreative;
- (id)_customizeCreative:(id)arg1 withTriggerContext:(id)arg2;
@property(readonly, nonatomic) FBQPCreative *creative;
@property(readonly, copy, nonatomic) NSDictionary *eventLimitMap;
@property(readonly, copy, nonatomic) NSDictionary *instanceLogData;
@property(readonly, copy, nonatomic) NSDictionary *templateParameters;
@property(readonly, copy, nonatomic) NSString *templatename;
@property(readonly, nonatomic) NSDate *endTime;
@property(readonly, nonatomic) NSDate *startTime;
@property(readonly, nonatomic) int priority;
@property(readonly, copy, nonatomic) NSArray *triggers;
@property(readonly, copy, nonatomic) NSString *promotionID;
- (id)description;
- (BOOL)isValid;
@property(readonly, nonatomic) __weak FBQuickPromotionFiltersHelper *filtersHelper;
@property(readonly, nonatomic) __weak FBQuickPromotionCoordinator *quickPromotionCoordinator;
- (id)initWithSession:(id)arg1 promotionEntity:(id)arg2 nuxID:(id)arg3;

@end

