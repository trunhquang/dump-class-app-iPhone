//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMPhotoViewController, MNPhotoViewModel;

@protocol FBMPhotoViewControllerDelegate <NSObject>

@optional
- (void)photoViewController:(FBMPhotoViewController *)arg1 didSelectForwardPhotoViewModel:(MNPhotoViewModel *)arg2;
- (void)dismissPhotoViewController:(FBMPhotoViewController *)arg1;
@end
