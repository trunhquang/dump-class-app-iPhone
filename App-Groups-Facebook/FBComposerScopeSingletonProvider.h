//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBActivitySuggestionManagerFactory.h"
#import "FBAudienceEducationEligibilityControllerFactory.h"
#import "FBAutoTaggingControllerFactory.h"
#import "FBCollageToolLoggerFactory.h"
#import "FBComposerActivityTagPickerControllerFactory.h"
#import "FBComposerAlbumPickerControllerFactory.h"
#import "FBComposerAudienceSelectionFlowControllerFactory.h"
#import "FBComposerCompositionTextChangeHandlerFactory.h"
#import "FBComposerDataUpdateManagerFactory.h"
#import "FBComposerDatePickerControllerFactory.h"
#import "FBComposerDestinationControllerFactory.h"
#import "FBComposerLocationPickerControllerFactory.h"
#import "FBComposerLoggerFactory.h"
#import "FBComposerLoopsLoggerFactory.h"
#import "FBComposerMediaPickerControllerFactory.h"
#import "FBComposerNuxInitialCoordinatorFactory.h"
#import "FBComposerPostCompositionViewControllerFactory.h"
#import "FBComposerSharedLinkPickerControllerFactory.h"
#import "FBComposerTaggableCollectionProviderFactory.h"
#import "FBCompositionLinkShareControllerFactory.h"
#import "FBMLETitleIconControllerFactory.h"
#import "FBMediaDataSourceManagerFactory.h"
#import "FBMediaTraitsObserverFactory.h"
#import "FBMediaUploadItemManagerFactory.h"
#import "FBPhotoTaggingAssetObserverFactory.h"
#import "FBPlacePickerNearbyFetcherFactory.h"

@class NSString;

@interface FBComposerScopeSingletonProvider : NSObject <FBActivitySuggestionManagerFactory, FBAudienceEducationEligibilityControllerFactory, FBAutoTaggingControllerFactory, FBComposerActivityTagPickerControllerFactory, FBComposerAlbumPickerControllerFactory, FBComposerDataUpdateManagerFactory, FBComposerLocationPickerControllerFactory, FBComposerLoggerFactory, FBComposerMediaPickerControllerFactory, FBComposerTaggableCollectionProviderFactory, FBComposerNuxInitialCoordinatorFactory, FBCompositionLinkShareControllerFactory, FBMLETitleIconControllerFactory, FBMediaDataSourceManagerFactory, FBMediaTraitsObserverFactory, FBMediaUploadItemManagerFactory, FBPhotoTaggingAssetObserverFactory, FBPlacePickerNearbyFetcherFactory, FBCollageToolLoggerFactory, FBComposerPostCompositionViewControllerFactory, FBComposerAudienceSelectionFlowControllerFactory, FBComposerDatePickerControllerFactory, FBComposerDestinationControllerFactory, FBComposerLoopsLoggerFactory, FBComposerCompositionTextChangeHandlerFactory, FBComposerSharedLinkPickerControllerFactory>
{
    id _block;
    struct tuple<std::__1::mutex, signed char, id> _state;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)sharedLinkPickerController;
- (BOOL)isCreated;
- (id)textChangeHandler;
- (id)composerNuxInitialCoordinator;
- (id)collageLogger;
- (id)loopsLogger;
- (id)mediaDataSourceManager;
- (id)mediaTraitsObserver;
- (id)taggableCollectionProvider;
- (id)postCompositionViewController;
- (id)placePickerNearbyFetcher;
- (id)photoTaggingAssetObserver;
- (id)mleTitleIconController;
- (id)mediaUploadItemManager;
- (id)mediaPickerController;
- (id)logger;
- (id)locationPickerController;
- (id)destinationController;
- (id)datePickerController;
- (id)linkShareController;
- (id)dataUpdateManager;
- (id)audienceSelectionFlowController;
- (id)autoTaggingController;
- (id)audienceEducationEligibilityController;
- (id)albumPickerController;
- (id)activityTagPickerController;
- (id)activitySuggestionManager;
- (void)invalidate;
- (id)initWithBlock:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

