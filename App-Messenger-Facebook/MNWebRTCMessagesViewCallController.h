//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBWebRTCCallabilityAwareCallControllerDelegate.h"

@class FBExperimentManager, FBMUser, FBWebRTCCallButton, FBWebRTCCallLogActionHandler, FBWebRTCCallabilityAwareCallController, FBWebRTCSynchronousContactsRetriever, NSString, UIBarButtonItem;

@interface MNWebRTCMessagesViewCallController : NSObject <FBWebRTCCallabilityAwareCallControllerDelegate, FBClassProvidable>
{
    FBWebRTCCallabilityAwareCallController *_callController;
    FBExperimentManager *_experimentManager;
    FBWebRTCSynchronousContactsRetriever *_synchronousContactsRetriever;
    FBMUser *_otherUser;
    UIBarButtonItem *_audioButtonItem;
    UIBarButtonItem *_videoButtonItem;
    FBWebRTCCallButton *_audioCallButton;
    FBWebRTCCallButton *_videoCallButton;
    FBWebRTCCallLogActionHandler *_callLogActionHandler;
}

@property(readonly, nonatomic) FBWebRTCCallLogActionHandler *callLogActionHandler; // @synthesize callLogActionHandler=_callLogActionHandler;
- (void).cxx_destruct;
- (void)_updateButtons;
- (void)_setCallButtonsWidth:(float)arg1;
- (void)_didPressVideoButton;
- (void)_didPressAudioButton;
- (void)callabilityAwareCallControllerOtherUserCallabilityDidChange:(id)arg1;
- (id)rencentContacts;
@property(readonly, nonatomic) BOOL isOtherUserCallable;
- (id)barButtonItems;
- (BOOL)hasButtonsForCurrentMessageThread;
- (void)cancelModalUI;
- (void)refreshUI;
- (void)tearDown;
- (void)configureWithThreadSummary:(id)arg1 users:(id)arg2 barButtonWidth:(float)arg3;
- (void)dealloc;
- (id)initWithCallController:(id)arg1 experimentManager:(id)arg2 callLogActionHandler:(id)arg3 synchronousContactsRetriever:(id)arg4;
- (id)initWithProviderMapData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

