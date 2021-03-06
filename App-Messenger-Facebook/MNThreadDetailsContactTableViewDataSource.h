//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNThreadViewModelConfigurable.h"
#import "UITableViewDataSource.h"

@class FBMUser, FBUserSession, FBWebRTCCallabilityAwareCallController, MNThreadViewModel, NSString;

@interface MNThreadDetailsContactTableViewDataSource : NSObject <UITableViewDataSource, MNThreadViewModelConfigurable>
{
    FBUserSession *_session;
    MNThreadViewModel *_threadViewModel;
    FBMUser *_currentContact;
    FBWebRTCCallabilityAwareCallController *_callController;
    id <MNThreadDetailsContactTableViewDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <MNThreadDetailsContactTableViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_viewer;
- (unsigned int)settingsRowWithSettingsRowIndex:(unsigned int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)_numberOfRowsInSection:(int)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)threadViewModel;
- (void)tearDownThreadViewModelDependencies;
- (void)configureThreadViewModelDependenciesWith:(id)arg1;
- (id)initWithSession:(id)arg1 contact:(id)arg2 callController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

