//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGTrackingTag.h"

@class GAILoggerImpl, NSDictionary, NSSet, TAGDataLayer;

@interface TAGUniversalAnalytics : TAGTrackingTag
{
    GAILoggerImpl *_logger;
    TAGDataLayer *_dataLayer;
    NSSet *_turnOffAnonymizeIpValues;
    NSDictionary *_defaultTransactionMap;
    NSDictionary *_defaultItemMap;
}

+ (id)functionId;
@property(retain, nonatomic) NSDictionary *defaultItemMap; // @synthesize defaultItemMap=_defaultItemMap;
@property(retain, nonatomic) NSDictionary *defaultTransactionMap; // @synthesize defaultTransactionMap=_defaultTransactionMap;
@property(retain, nonatomic) NSSet *turnOffAnonymizeIpValues; // @synthesize turnOffAnonymizeIpValues=_turnOffAnonymizeIpValues;
@property(retain, nonatomic) TAGDataLayer *dataLayer; // @synthesize dataLayer=_dataLayer;
@property(retain, nonatomic) GAILoggerImpl *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)transactionItemFieldsForTag:(id)arg1;
- (id)transactionFieldsForTag:(id)arg1;
- (void)setLoggerIfNecessary;
- (void)closeTracker:(id)arg1;
- (id)openTracker;
- (id)gaFieldsWithAnalyticsFields:(id)arg1;
- (id)valueToStringMap:(id)arg1;
- (void)sendTransaction:(id)arg1 withTracker:(id)arg2;
- (void)addParam:(id)arg1 value:(id)arg2 toParams:(id)arg3;
- (id)transactionsItems;
- (id)dataLayerString:(id)arg1;
- (void)evaluateTrackingTag:(id)arg1;
- (BOOL)checkBooleanPropertyForTag:(id)arg1 key:(id)arg2;
- (id)initWithDataLayer:(id)arg1;

@end

