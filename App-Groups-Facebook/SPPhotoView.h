//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBPagingViewContentView.h"
#import "FBTagDecoratorDelegate.h"
#import "FBZoomingPhotoViewDelegate.h"

@class FBKVOController, FBPhotoAsset, FBScenePath, FBTagDecorator, FBUserSession, FBZoomingPhotoView, NSString, UIImageView, UITapGestureRecognizer;

@interface SPPhotoView : UIView <FBZoomingPhotoViewDelegate, FBTagDecoratorDelegate, FBPagingViewContentView>
{
    struct CGRect _photoViewFrameBeforeBounce;
    BOOL _builtForStandardSize;
    FBTagDecorator *_tagDecorator;
    FBKVOController *_observation;
    FBZoomingPhotoView *_zoomView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    FBUserSession *_currentFBSession;
    NSString *_focusedFaceboxID;
    BOOL _taggingEnabled;
    BOOL _faceRecognitionEnabled;
    UIImageView *_imageView;
    FBPhotoAsset *_photoAsset;
    id <FBAvatarTaggingSectionDataSource> _tagSearchDataSource;
    id <SPPhotoViewDelegate> _delegate;
    FBScenePath *_scenePath;
    struct UIEdgeInsets _photoViewEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets photoViewEdgeInsets; // @synthesize photoViewEdgeInsets=_photoViewEdgeInsets;
@property(readonly, nonatomic) BOOL faceRecognitionEnabled; // @synthesize faceRecognitionEnabled=_faceRecognitionEnabled;
@property(readonly, nonatomic) BOOL taggingEnabled; // @synthesize taggingEnabled=_taggingEnabled;
@property(retain, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
@property(nonatomic) __weak id <SPPhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <FBAvatarTaggingSectionDataSource> tagSearchDataSource; // @synthesize tagSearchDataSource=_tagSearchDataSource;
@property(retain, nonatomic) FBPhotoAsset *photoAsset; // @synthesize photoAsset=_photoAsset;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)_updateImageView;
- (void)resetAutoTagging;
- (void)reloadTags;
- (void)_addSuggestedTags;
- (void)didLoseCenterFocus;
- (void)prepareForReuse;
- (id)tagAnalyticsModule;
- (void)tagDecoratorTaggingInterfaceWillAppear:(id)arg1;
- (void)tagDecoratorTaggingInterfaceDidDisappear:(id)arg1;
- (id)tagDecorator:(id)arg1 addFaceRect:(struct CGRect)arg2 toAvatar:(id)arg3 text:(id)arg4 loggingSuffix:(id)arg5;
- (void)tagDecorator:(id)arg1 didRemoveTagsEdge:(id)arg2;
- (void)tagDecorator:(id)arg1 didTapFaceboxesEdge:(id)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)zoomingPhotoViewDidLayoutSubviews:(id)arg1;
@property(nonatomic) unsigned int taggingMode;
@property(nonatomic) BOOL tagsVisible;
- (void)setFaceboxesHidden:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL faceboxesHidden;
- (void)dismissTaggingAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_photoTapped:(id)arg1;
- (void)layoutSubviews;
- (void)animateToFocusOnFacebox:(id)arg1;
- (void)updateTagDecoratorWithAccessibilityTrait:(unsigned long long)arg1;
- (void)resetImageViewZoomScaleAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clearPhotoView;
- (void)clearTags;
- (void)setTagsVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_startObservingPhotoAsset:(id)arg1;
- (void)setFocusedFaceboxID:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSession:(id)arg1 faceRecognitionEnabled:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

