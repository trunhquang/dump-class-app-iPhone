//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "THBasicCollageGridViewController.h"

#import "FBComposerFlowDelegate.h"
#import "FBComposerPublicationProgressDisplayListener.h"
#import "THGroupAlbumCollageGridHeaderDelegate.h"
#import "THPhotosCollageGridViewControllerProtocol.h"

@class FBMemAlbum, FBPublicationProgressOverlayDisplayer, NSString, UIButton;

@interface THGroupAlbumCollageGridViewController : THBasicCollageGridViewController <THGroupAlbumCollageGridHeaderDelegate, FBComposerFlowDelegate, FBComposerPublicationProgressDisplayListener, THPhotosCollageGridViewControllerProtocol>
{
    FBMemAlbum *_album;
    UIButton *_addPhotosButton;
    FBPublicationProgressOverlayDisplayer *_publicationDisplayer;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_backButtonPressed:(id)arg1;
- (id)viewForEmptyStateWithFrame:(struct CGRect)arg1;
- (void)initializeDataSource;
- (void)uploadViewUpdatedForSuccessOfPublicationForPublisherData:(id)arg1 response:(id)arg2;
- (void)uploadViewUpdatedForTransientFailureOfPublicationForPublisherData:(id)arg1;
- (void)uploadViewUpdatedForTerminalFailureOfPublicationForPublisherData:(id)arg1;
- (void)uploadViewUpdatedForCancellationOfPublicationForPublisherData:(id)arg1;
- (void)retryButtonTappedForPublisherData:(id)arg1;
- (void)dismissButtonTappedForPublisherData:(id)arg1;
- (void)cancelButtonTappedForPublisherData:(id)arg1 withReason:(id)arg2;
- (void)composerCompletedWithResult:(id)arg1;
- (void)didTapOnAddPhotos;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 album:(id)arg2 intentHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

