//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerSharedLinkPickerController, FBCompositionLinkShare, NSString;

@protocol FBComposerSharedLinkPickerControllerDelegate <NSObject>
- (void)sharedLinkPickerDidCancel:(FBComposerSharedLinkPickerController *)arg1;
- (void)sharedLinkPicker:(FBComposerSharedLinkPickerController *)arg1 didPickSharedLink:(FBCompositionLinkShare *)arg2 linkPickerSessionID:(NSString *)arg3;
@end

