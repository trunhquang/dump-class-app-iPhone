//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBVideoCapturePermissionsManager : NSObject
{
}

+ (void)_requestMicrophonePermissionsWithCameraPermissionGrantedBlock:(CDUnknownBlockType)arg1;
+ (void)_requestSystemVideoAndAudioPermissionsWithPermissionGrantedBlock:(CDUnknownBlockType)arg1 permissionDeniedBlock:(CDUnknownBlockType)arg2;
+ (void)_showAudioAndVideoCapturePermissionsPrePromptWithPermissionGrantedBlock:(CDUnknownBlockType)arg1 permissionDeniedBlock:(CDUnknownBlockType)arg2;
+ (void)checkVideoCapturePermissionsWithPermissionGrantedBlock:(CDUnknownBlockType)arg1 permissionDeniedBlock:(CDUnknownBlockType)arg2 shouldRequestPermission:(BOOL)arg3;

@end

