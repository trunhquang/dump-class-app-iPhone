//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBMPhotoViewDelegate.h"

@class FBMPhotoViewImageDownloadController, NSArray, NSMutableArray, NSString, UIColor;

@interface FBMPhotosView : UIView <FBMPhotoViewDelegate>
{
    FBMPhotoViewImageDownloadController *_photoViewImageDownloadController;
    NSArray *_photoViewModels;
    id <FBMPhotosViewDelegate> _delegate;
    UIColor *_borderColor;
    NSMutableArray *_photoViews;
}

+ (struct CGSize)sizeForSinglePhotoViewModel:(id)arg1;
+ (int)contentModeForSinglePhotoViewModel:(id)arg1;
+ (struct CGSize)sizeForPhotoViewModels:(id)arg1;
@property(retain, nonatomic) NSMutableArray *photoViews; // @synthesize photoViews=_photoViews;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) __weak id <FBMPhotosViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *photoViewModels; // @synthesize photoViewModels=_photoViewModels;
- (void).cxx_destruct;
- (void)didSelectPhotoView:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)handleLongPress:(id)arg1;
- (void)layoutSubviews;
- (void)removePhotoViews;
- (void)addPhotoViews;
- (void)configureWithPhotoViewModels:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 photoViewImageDownloadController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

