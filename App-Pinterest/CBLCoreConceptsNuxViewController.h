//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionViewController.h"

#import "CBLCoreConceptsNuxViewDelegate.h"
#import "CBLNuxViewControllerDelegate.h"

@class CBLCoreConceptsNuxView, CBLNuxExperienceData, NSString;

@interface CBLCoreConceptsNuxViewController : CBLTraitCollectionViewController <CBLCoreConceptsNuxViewDelegate, CBLNuxViewControllerDelegate>
{
    id <CBLCoreConceptsNuxViewControllerDelegate> _delegate;
    CBLNuxExperienceData *_experienceData;
    CBLCoreConceptsNuxView *_coreConceptsView;
}

@property(retain, nonatomic) CBLCoreConceptsNuxView *coreConceptsView; // @synthesize coreConceptsView=_coreConceptsView;
@property(retain, nonatomic) CBLNuxExperienceData *experienceData; // @synthesize experienceData=_experienceData;
@property(nonatomic) __weak id <CBLCoreConceptsNuxViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nuxViewControllerDidCancel:(id)arg1;
- (void)nuxViewControllerDidFinish:(id)arg1;
- (void)CBLNewUserJourneyBoardCreateViewControllerDidTapBuildFeed:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;
- (id)initWithExperienceData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
