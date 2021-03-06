//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMediaAttachmentPickerControllerDelegate.h"

@class FBMediaAttachmentPickerController, NSObject<ThreadImagePickerDelegate>, NSString, UIViewController;

@interface ThreadImagePicker : NSObject <FBMediaAttachmentPickerControllerDelegate>
{
    NSObject<ThreadImagePickerDelegate> *_delegate;
    FBMediaAttachmentPickerController *_mediaPickerController;
    UIViewController *_presentedImagePicker;
    int _pickerSourceType;
}

@property(nonatomic) int pickerSourceType; // @synthesize pickerSourceType=_pickerSourceType;
@property(retain, nonatomic) UIViewController *presentedImagePicker; // @synthesize presentedImagePicker=_presentedImagePicker;
@property(retain, nonatomic) FBMediaAttachmentPickerController *mediaPickerController; // @synthesize mediaPickerController=_mediaPickerController;
@property(nonatomic) NSObject<ThreadImagePickerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)mediaAttachmentPickerController:(id)arg1 openURL:(id)arg2;
- (void)mediaAttachmentPickerControllerPermissionDenied:(id)arg1;
- (void)mediaAttachmentPickerControllerDidCancel:(id)arg1;
- (void)mediaAttachmentPickerControllerDidClearMediaAttachments:(id)arg1;
- (void)mediaAttachmentPickerController:(id)arg1 didSelectMediaAttachments:(id)arg2 fromSource:(int)arg3;
- (BOOL)shouldWrapPickerInNavigationController:(id)arg1;
- (void)setSourceType:(int)arg1;
@property(readonly, nonatomic) UIViewController *picker;
- (void)dealloc;
- (id)initWithMultipickerEnabled:(BOOL)arg1 session:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

