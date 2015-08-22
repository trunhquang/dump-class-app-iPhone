//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AnalyticsService.h"

@class AnalyticServiceConfiguration, AtlassianAnalyticsKit, NSString;

@interface AtlassianAnalyticsAdaptor : NSObject <AnalyticsService>
{
    AtlassianAnalyticsKit *_analyticsAPI;
    AnalyticServiceConfiguration *_analyticsConfig;
}

@property(retain, nonatomic) AnalyticServiceConfiguration *analyticsConfig; // @synthesize analyticsConfig=_analyticsConfig;
@property(retain, nonatomic) AtlassianAnalyticsKit *analyticsAPI; // @synthesize analyticsAPI=_analyticsAPI;
- (void).cxx_destruct;
- (void)trackMaxAllowedEventsWithCompletion:(CDUnknownBlockType)arg1;
- (void)trackEvent:(id)arg1;
- (id)initWithServiceConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

