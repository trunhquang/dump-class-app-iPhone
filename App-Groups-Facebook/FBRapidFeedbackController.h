//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBRapidFeedbackSurveyManagerDelegate.h"

@class FBRapidFeedbackSurveyDisplayListenerAnnouncer, FBRapidFeedbackSurveyManager, NSString;

@interface FBRapidFeedbackController : NSObject <FBRapidFeedbackSurveyManagerDelegate>
{
    FBRapidFeedbackSurveyManager *_surveyManager;
    FBRapidFeedbackSurveyDisplayListenerAnnouncer *_announcer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)surveyManager:(id)arg1 shouldDismiss:(BOOL)arg2;
- (void)_setDeveloperModeEnabled:(BOOL)arg1;
- (BOOL)_isDeveloperModeEnabled;
- (void)_clearLastSurveySeenDate;
- (id)_lastSurveySeenDate;
- (void)_setLastSurveySeenDate;
- (BOOL)_hasRecentlySeenSurvey;
- (void)_dismissSurveyViewController:(BOOL)arg1;
- (void)_showSurveyForIntegrationPointId:(id)arg1 navigationCoordinator:(id)arg2 userSession:(id)arg3 optionalPresentingViewController:(id)arg4;
- (void)showSurveyForIntegrationPointId:(id)arg1 navigationCoordinator:(id)arg2 userSession:(id)arg3;
- (void)showSurveyForIntegrationPointId:(id)arg1 presentingViewController:(id)arg2 userSession:(id)arg3;
- (void)fetchSurveyForIntegrationPoint:(id)arg1 userSession:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addListener:(id)arg1;
- (id)_initPrivate;
- (id)init;
- (void)setDeveloperModeEnabled:(BOOL)arg1;
- (BOOL)isDeveloperModeEnabled;
- (id)lastSurveySeenDate;
- (void)clearLastSurveySeenDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

