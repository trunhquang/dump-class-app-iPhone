//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMLocationAttachmentData, MNLocationPickerPresenter, UIAlertView;

@protocol MNLocationPickerPresenterDelegate <NSObject>
- (void)locationPickerPresenter:(MNLocationPickerPresenter *)arg1 didDismissAlertView:(UIAlertView *)arg2;
- (void)locationPickerPresenter:(MNLocationPickerPresenter *)arg1 didSendWithLocationAttachmentData:(FBMLocationAttachmentData *)arg2;
@end
