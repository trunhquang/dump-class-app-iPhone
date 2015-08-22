//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerPhotoEditingController, FBMultiPickerPhotoAttachment, NSString, UIImage;

@protocol FBComposerPhotoEditingControllerDelegate <NSObject>
- (void)didEndShowingInstructionalNuxForEditingController:(FBComposerPhotoEditingController *)arg1;
- (void)didBeginShowingInstructionalNuxForEditingController:(FBComposerPhotoEditingController *)arg1;
- (void)photoEditingController:(FBComposerPhotoEditingController *)arg1 updateSwipingViewImageFromDataSourceForAttachment:(FBMultiPickerPhotoAttachment *)arg2;
- (BOOL)swipableFilterEnabledForPhotoEditingController:(FBComposerPhotoEditingController *)arg1;
- (BOOL)photoEditingController:(FBComposerPhotoEditingController *)arg1 isAttachmentInCompositionWithAssetID:(NSString *)arg2;
- (void)photoEditingController:(FBComposerPhotoEditingController *)arg1 didEndFilterSetupForAttachment:(FBMultiPickerPhotoAttachment *)arg2;
- (void)photoEditingController:(FBComposerPhotoEditingController *)arg1 didBeginFilterSetupForAttachment:(FBMultiPickerPhotoAttachment *)arg2;
- (void)photoEditingController:(FBComposerPhotoEditingController *)arg1 didDisableAutoEnhanceForAttachment:(FBMultiPickerPhotoAttachment *)arg2;
- (void)photoEditingController:(FBComposerPhotoEditingController *)arg1 didStartOpeningUnifiedGalleryViewForAttachment:(FBMultiPickerPhotoAttachment *)arg2;
- (void)photoEditingController:(FBComposerPhotoEditingController *)arg1 updateAssetEditsAndThumbnail:(UIImage *)arg2 forAssetID:(NSString *)arg3;
@end

