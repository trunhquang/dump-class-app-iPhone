//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNNewUserRampUpController.h"
#import "MNNewUserRampUpThreadBumpRequestSenderDelegate.h"

@class FBUserSession, MNNewUserRampUpThreadBumpRequestSender, NSArray, NSString;

@interface MNNewUserRampUpThreadBumpController : NSObject <MNNewUserRampUpThreadBumpRequestSenderDelegate, FBClassProvidable, MNNewUserRampUpController>
{
    MNNewUserRampUpThreadBumpRequestSender *_threadBumpRequestSender;
    NSArray *_selectedContacts;
    FBUserSession *_session;
    id <MNNewUserRampUpControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MNNewUserRampUpControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_bumpThreadsForSelectedContacts:(id)arg1;
- (void)newUserRampUpThreadBumpRequestSender:(id)arg1 didFailWithError:(id)arg2;
- (void)newUserRampUpThreadBumpRequestSender:(id)arg1 didBumpThreadsWithRecipients:(id)arg2;
- (void)processUserSelectedContacts:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

