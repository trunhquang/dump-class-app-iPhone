//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBWebRTCPersonPickerViewController;

@protocol FBWebRTCPersonPickerViewControllerDelegate <NSObject>
- (BOOL)choosePersonViewControllerShouldSearchServer:(FBWebRTCPersonPickerViewController *)arg1;
- (BOOL)choosePersonViewControllerIsVideoCallingAvailable:(FBWebRTCPersonPickerViewController *)arg1;
- (BOOL)choosePersonViewControllerIsAudioCallingAvailable:(FBWebRTCPersonPickerViewController *)arg1;
- (void)choosePersonViewControllerDidCancel:(FBWebRTCPersonPickerViewController *)arg1 animated:(BOOL)arg2;
- (void)choosePersonViewController:(FBWebRTCPersonPickerViewController *)arg1 didCallContact:(id <FBConversationContact>)arg2 isVideoCall:(BOOL)arg3 source:(unsigned int)arg4;
@end
