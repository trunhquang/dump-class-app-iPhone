//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNMegaphonePresentationCoordinator.h"

@class NSString;

@interface MNPeopleMegaphonePresentationCoordinator : NSObject <MNMegaphonePresentationCoordinator, FBClassProvidable>
{
    id <MNMegaphonePresentationCoordinator> _contactImportMegaphonePresentationCoordinator;
    id <MNMegaphonePresentationCoordinator> _contactInviteMegaphonePresentationCoordinator;
}

@property(retain, nonatomic) id <MNMegaphonePresentationCoordinator> contactInviteMegaphonePresentationCoordinator; // @synthesize contactInviteMegaphonePresentationCoordinator=_contactInviteMegaphonePresentationCoordinator;
@property(retain, nonatomic) id <MNMegaphonePresentationCoordinator> contactImportMegaphonePresentationCoordinator; // @synthesize contactImportMegaphonePresentationCoordinator=_contactImportMegaphonePresentationCoordinator;
- (void).cxx_destruct;
- (BOOL)megaphonePresenterAvailableForUse:(id)arg1 withNavigationController:(id)arg2;
- (id)initWithContactImportMegaphonePresentationCoordinator:(id)arg1 contactInviteMegaphonePresentationCoordinator:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

