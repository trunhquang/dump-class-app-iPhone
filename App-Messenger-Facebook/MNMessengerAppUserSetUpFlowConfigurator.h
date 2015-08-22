//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNUserSetUpFlowConfigurator.h"

@class FBUserSession, MNNewUserVoipExperimentContext, NSString;

@interface MNMessengerAppUserSetUpFlowConfigurator : NSObject <MNUserSetUpFlowConfigurator, FBSessionClassProvidable>
{
    FBUserSession *_session;
    id <FBProvider> _pushRegistrarProvider;
    id <FBProvider> _userSettingsProvider;
    id <FBProvider> _userSetUpPersisterProvider;
    MNNewUserVoipExperimentContext *_newUserVoipExperimentContext;
}

- (void).cxx_destruct;
- (id)configuration;
- (BOOL)_shouldShowNewUserVoipStep;
- (BOOL)_shouldShowNewUserRampUpStep;
- (BOOL)_shouldShowWelcomeStep;
- (BOOL)_shouldShowRequestCIStep;
- (BOOL)_shouldShowRequirePushStep;
- (BOOL)_shouldShowPhoneEntryStep;
- (id)_userSetUpPersister;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithUserSession:(id)arg1 pushRegistrarProvider:(id)arg2 userSettingsProvider:(id)arg3 userSetUpPersisterProvider:(id)arg4 newUserVoipExperimentContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
