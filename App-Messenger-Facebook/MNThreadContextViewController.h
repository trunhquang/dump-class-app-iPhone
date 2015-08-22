//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBScenePathHolding.h"
#import "MNMessageCellElementController.h"
#import "MNThreadContextViewDelegate.h"

@class FBAnalytics, FBImageDownloader, FBLazyCreator, FBMThreadContextViewModel, FBUserSession, MNThreadContextView, NSString;

@interface MNThreadContextViewController : NSObject <FBScenePathHolding, MNThreadContextViewDelegate, FBClassProvidable, MNMessageCellElementController>
{
    FBImageDownloader *_imageDownloader;
    FBAnalytics *_analytics;
    MNThreadContextView *_threadContextView;
    FBMThreadContextViewModel *_threadContextViewModel;
    id _imageDownload;
    id <FBMProfileURLUtils> _profileURLUtils;
    FBUserSession *_session;
    FBLazyCreator *_tapExperimentContextCreator;
}

- (void).cxx_destruct;
- (void)_imageDownloaderFinishedWithResponse:(id)arg1 forUrl:(id)arg2;
- (void)_showPlaceholderIfNeeded;
- (void)_deprioritizeImageDownloadIfNeeded;
- (void)_downloadProfileImage;
- (void)_resetThreadContextView;
- (void)_updateThreadContextViewWithViewModel:(id)arg1;
- (void)threadContextViewDidTapProfileImageButton:(id)arg1;
- (void)didDisappearInContainerView:(id)arg1;
- (void)willUpdateWithViewModel:(id)arg1 inContainerView:(id)arg2;
- (void)willAppearWithViewModel:(id)arg1 inContainerView:(id)arg2;
- (void)awakeWithView:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithImageDownloader:(id)arg1 analytics:(id)arg2 profileURLUtils:(id)arg3 session:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
