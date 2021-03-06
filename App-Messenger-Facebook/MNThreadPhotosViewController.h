//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBContainerViewController.h"

#import "FBClassProvidable.h"
#import "FBMLegacyThreadPhotoViewModelsFetcherDelegate.h"
#import "FBMPhotoViewDelegate.h"
#import "FBMThreadPhotoViewModelListening.h"
#import "FBModalFullscreenControllerDataSource.h"
#import "FBModalFullscreenControllerDelegate.h"
#import "MNMosaicLayoutDelegate.h"
#import "MNPhotoOverlayViewDelegate.h"
#import "MNPhotoViewNodeDelegate.h"
#import "MNThreadViewModelConfigurable.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class FBLazyCreator, FBMLegacyThreadPhotoViewModelsFetcher, FBMPhotoViewImageDownloadController, FBMThreadSharedMediaModelCache, FBModalFullscreenController, FBOpenableAttachmentNode, FBUserSession, MNForwardMessageHandler, MNNavigationCoordinator, MNNoPhotosInThreadView, MNPhotoImageRequester, MNPhotoNodeActionHandler, MNPhotoOverlayView, MNThreadMediaFetcher, MNThreadPhotoViewModelsFetcher, MNThreadViewModel, NSArray, NSMutableDictionary, NSString, UICollectionView, UIImage;

@interface MNThreadPhotosViewController : FBContainerViewController <FBClassProvidable, FBMLegacyThreadPhotoViewModelsFetcherDelegate, FBMPhotoViewDelegate, MNPhotoViewNodeDelegate, FBModalFullscreenControllerDelegate, FBModalFullscreenControllerDataSource, MNPhotoOverlayViewDelegate, MNMosaicLayoutDelegate, UICollectionViewDataSource, UICollectionViewDelegate, MNThreadViewModelConfigurable, FBMThreadPhotoViewModelListening>
{
    FBUserSession *_session;
    MNNavigationCoordinator *_navigationCoordinator;
    id <FBMAppProperties> _appProperties;
    id <FBProvider> _legacyThreadPhotoViewModelFetcherProvider;
    id <FBProvider> _threadPhotoViewModelFetcherProvider;
    id <FBProvider> _threadMediaFetcherProvider;
    MNThreadPhotoViewModelsFetcher *_threadPhotoViewModelFetcher;
    MNThreadMediaFetcher *_threadMediaFetcher;
    id <FBProvider> _nameFormatterProvider;
    MNForwardMessageHandler *_forwardMessageHandler;
    NSMutableDictionary *_photoViewNodesByIndex;
    FBModalFullscreenController *_modalFullscreenController;
    NSMutableDictionary *_photoFBIDsToIndexPaths;
    MNPhotoOverlayView *_photoOverlayView;
    MNPhotoNodeActionHandler *_photoActionHandler;
    FBMPhotoViewImageDownloadController *_photoViewImageDownloadController;
    MNPhotoImageRequester *_imageRequester;
    FBMThreadSharedMediaModelCache *_threadSharedMediaModelCache;
    id <MNAuthenticationManager> _authenticationManager;
    NSMutableDictionary *_photoDownloadRequests;
    MNNoPhotosInThreadView *_noPhotosView;
    BOOL _shouldShowSharedMedia;
    BOOL _fullScreenMode;
    UICollectionView *_collectionView;
    FBMLegacyThreadPhotoViewModelsFetcher *_legacyThreadPhotoViewModelFetcher;
    FBOpenableAttachmentNode *_openedAttachmentNode;
    MNThreadViewModel *_threadViewModel;
    NSArray *_currentPhotoViewModels;
    FBLazyCreator *_noPhotosViewCreator;
    UIImage *_placeholderImage;
}

@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) FBLazyCreator *noPhotosViewCreator; // @synthesize noPhotosViewCreator=_noPhotosViewCreator;
@property(copy, nonatomic) NSArray *currentPhotoViewModels; // @synthesize currentPhotoViewModels=_currentPhotoViewModels;
@property(retain, nonatomic) MNThreadViewModel *threadViewModel; // @synthesize threadViewModel=_threadViewModel;
@property(retain, nonatomic) FBOpenableAttachmentNode *openedAttachmentNode; // @synthesize openedAttachmentNode=_openedAttachmentNode;
@property(retain, nonatomic) FBMLegacyThreadPhotoViewModelsFetcher *legacyThreadPhotoViewModelFetcher; // @synthesize legacyThreadPhotoViewModelFetcher=_legacyThreadPhotoViewModelFetcher;
@property(nonatomic) BOOL fullScreenMode; // @synthesize fullScreenMode=_fullScreenMode;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 headerForItemAtIndexPath:(id)arg3;
- (id)_photoViewModelsFromCache;
- (void)_executeGraphFetchWithIsFirstFetch:(BOOL)arg1;
- (void)_updatePhotoViewModelsOnScreen;
- (float)collectionView:(id)arg1 layout:(id)arg2 aspectRatioForItemAtIndexPath:(id)arg3;
- (void)photoViewNode:(id)arg1 doubleTappedAtPoint:(struct CGPoint)arg2;
- (void)overlayView:(id)arg1 didTapContextualActionButton:(id)arg2;
- (id)modalPresentationView:(id)arg1;
- (id)photoViewCloseView:(id)arg1;
- (struct CGRect)photoViewCloseFrame:(id)arg1;
- (id)analyticsExtras;
- (void)handleIntent:(id)arg1;
- (id)modalPresentationStackManager;
- (void)photoViewModelsDidChangeForThreadWithKey:(id)arg1;
- (void)legacyThreadPhotoViewModelFetcher:(id)arg1 couldNotFetchPhotoViewModelsForThreadWithKey:(id)arg2 error:(id)arg3;
- (void)legacyThreadPhotoViewModelFetcher:(id)arg1 didFetchPhotoViewModelsForThreadWithKey:(id)arg2;
- (id)modalFullscreenController:(id)arg1 nodeBeforeNode:(id)arg2;
- (id)modalFullscreenController:(id)arg1 nodeAfterNode:(id)arg2;
- (id)existingModalLayerForAttachmentNode:(id)arg1;
- (void)attachmentNodeDidClose:(id)arg1;
- (void)attachmentNodeMayClose:(id)arg1;
- (void)attachmentNodeWillClose:(id)arg1 animated:(BOOL)arg2;
- (void)attachmentNodeDidOpen:(id)arg1;
- (void)attachmentNodeWillOpen:(id)arg1 animated:(BOOL)arg2;
- (void)_enableInterationsOnAllNodes;
- (void)_disableInteractionsOnOtherNodes:(id)arg1;
- (void)_initializeThreadMediaFetcherIfNeeded;
- (void)_initializeThreadPhotoViewModelFetcherIfNeeded;
- (id)analyticsModule;
- (unsigned int)_supportedPhotoGesturesForClosingNode;
- (unsigned int)_supportedPhotoGesturesForClosedNode;
- (unsigned int)_supportedPhotoGesturesForOpenNode;
- (unsigned int)_supportedPhotoGesturesForOpeningNode;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)_pickupCellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)_photoViewNodeForPhotoViewModel:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)_startObservations;
- (BOOL)prefersStatusBarHidden;
- (void)_updateNoPhotosViewVisibility;
- (void)_createNoPhotosView;
- (id)_userNameForUserWithId:(id)arg1;
- (void)_updateStatusBarVisibilityAnimated:(BOOL)arg1;
- (void)_processFailedPhotoFetchWithError:(id)arg1 isInitialFetch:(BOOL)arg2;
- (void)_processFetchedPhotoViewModels:(id)arg1 threadKey:(id)arg2 isInitialFetch:(BOOL)arg3;
- (void)fetchMoreIfNecessaryWithScrollView:(id)arg1;
- (void)clearFetches;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)tearDownThreadViewModelDependencies;
- (void)configureThreadViewModelDependenciesWith:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

