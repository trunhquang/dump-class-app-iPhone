//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNMessageSupplementaryElementFactory.h"

@class FBUserSession, NSString;

@interface MNMessageSingleSeenHeadElementFactory : NSObject <MNMessageSupplementaryElementFactory, FBClassProvidable>
{
    id <FBProvider> _singleSeenHeadControllerProvider;
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (id)disappearingTransformerForViewModel:(id)arg1;
- (id)appearingTransformerForViewModel:(id)arg1;
- (id)appearanceTransitioningForViewModel:(id)arg1;
- (id)controllerForSupplementaryViewModel:(id)arg1;
- (id)supplementaryViewForViewModel:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
