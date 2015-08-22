//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, UIViewController;

@interface MediaExtraPicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    UIViewController *pickerViewController_;
    id <MediaExtraPickerDelegate> _pickerDelegate;
}

+ (void)showCameraAccessDeniedAlert;
+ (id)mediaPickerForLocalFilesWithMediaDataType:(unsigned int)arg1;
+ (BOOL)hasMediaExtraPickerForMediaListType:(id)arg1 andMediaDataType:(unsigned int)arg2;
+ (id)createMediaExtraPickerForMediaListType:(id)arg1 andMediaDataType:(unsigned int)arg2;
@property(nonatomic) __weak id <MediaExtraPickerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
@property(readonly, nonatomic) UIViewController *pickerViewController; // @synthesize pickerViewController=pickerViewController_;
- (void).cxx_destruct;
- (void)notifyDelegateOfPickedMediaData:(id)arg1 withError:(id)arg2;
- (id)mediaDataWithImagePickerInfo:(id)arg1 fileName:(id)arg2 loadFileData:(BOOL)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)initWithPickerViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

