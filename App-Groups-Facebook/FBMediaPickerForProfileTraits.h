//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMediaPickerBaseTraits.h"

@class FBUserSession;

@interface FBMediaPickerForProfileTraits : FBMediaPickerBaseTraits
{
    FBUserSession *_session;
    BOOL _unifiedMediaGalleryEnabled;
}

+ (id)traitsWithSession:(id)arg1 isUnifiedMediaGalleryEnabled:(BOOL)arg2;
- (void).cxx_destruct;
- (unsigned int)initialToolForMediaGallery;
- (BOOL)tapToBringUpGalleryView;
- (BOOL)unifiedMediaGalleryEnabled;
- (BOOL)autoNavigationEnabled;
- (unsigned int)postSelectionAction;
- (BOOL)requireSquarePhoto;
- (unsigned int)maxPhotosSelected;
- (BOOL)allowFaceDetection;
- (BOOL)allowTagging;
- (id)init;
- (id)initWithSession:(id)arg1 isUnifiedMediaGalleryEnabled:(BOOL)arg2;

@end

