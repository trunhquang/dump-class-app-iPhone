//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNuxPresenter.h"

@class FBUserSession, NSArray, NSAttributedString, NSDictionary, NSString;

@interface FBHeadPublisherFeedNuxPresenter : NSObject <FBNuxPresenter>
{
    FBUserSession *_session;
    NSAttributedString *_defaultTitle;
    NSAttributedString *_emptyFeedTitle;
    BOOL _feedIsEmpty;
    id <FBNuxDelegate> _nuxCoordinator;
    NSString *_nuxID;
    NSAttributedString *_title;
    NSArray *_triggerIDs;
}

@property(copy, nonatomic) NSArray *triggerIDs; // @synthesize triggerIDs=_triggerIDs;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *nuxID; // @synthesize nuxID=_nuxID;
@property(nonatomic) BOOL feedIsEmpty; // @synthesize feedIsEmpty=_feedIsEmpty;
@property(nonatomic) id <FBNuxDelegate> nuxCoordinator; // @synthesize nuxCoordinator=_nuxCoordinator;
- (void).cxx_destruct;
- (void)nuxWasDismissed;
- (void)nuxDidAppear;
@property(readonly, nonatomic) int nuxType;
- (int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2;
- (id)viewControllerForPresentation;
- (id)initWithSession:(id)arg1 nuxID:(id)arg2 title:(id)arg3 emptyFeedTitle:(id)arg4 triggerIDs:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *extraLogData;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSString *nuxAnalyticsModule;
@property(copy, nonatomic) CDUnknownBlockType onClosedBlock;
@property(readonly) Class superclass;

@end

