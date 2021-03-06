//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNImportedContactsAccumulationListener.h"
#import "MNSyncPersonsListDisplayerAvailabilityListener.h"

@class NSArray, NSString;

@interface MNAccumulatedImportedContactsListDisplayer : NSObject <MNSyncPersonsListDisplayerAvailabilityListener, MNImportedContactsAccumulationListener>
{
    NSArray *_importedSyncPersons;
    id <MNSyncPersonsListDisplayer> _syncPersonsListDisplayer;
}

@property(retain, nonatomic) id <MNSyncPersonsListDisplayer> syncPersonsListDisplayer; // @synthesize syncPersonsListDisplayer=_syncPersonsListDisplayer;
@property(retain, nonatomic) NSArray *importedSyncPersons; // @synthesize importedSyncPersons=_importedSyncPersons;
- (void).cxx_destruct;
- (void)accumulatedImportedContacts:(id)arg1;
- (void)syncPersonsListDisplayerNoLongerAvailable;
- (void)syncPersonsListDisplayerAvailable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

