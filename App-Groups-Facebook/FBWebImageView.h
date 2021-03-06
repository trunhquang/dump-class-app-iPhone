//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBClonePhotoView.h"

@class FBScenePath, FBWebImageSentinelLogger, FBWebImageViewListenerAnnouncer, NSString, UIImage, UIImageView;

@interface FBWebImageView : UIView <FBClonePhotoView>
{
    UIImageView *_imageView;
    id <FBWebImageDownloaderFactoryProtocol> _downloaderFactory;
    id <FBWebImageDownloader> _downloader;
    id <FBWebImageSpecifier> _imageSpecifier;
    id <FBWebImageLogger> _logger;
    id <FBWebImageViewLayoutDelegate> _defaultLayoutDelegate;
    FBWebImageViewListenerAnnouncer *_announcer;
    id <FBWebImageTransitionProtocol> _placeholderTransition;
    FBWebImageSentinelLogger *_sentinelLogger;
    BOOL _currentDownloadIsAsync;
    UIView *_placeholderView;
    unsigned int _transitionType;
    id <FBWebImageViewLayoutDelegate> _layoutDelegate;
    unsigned int _displayedImageFlag;
    FBScenePath *_scenePath;
    id <FBCallPath> _callPath;
}

@property(retain, nonatomic) FBWebImageSentinelLogger *sentinelLogger; // @synthesize sentinelLogger=_sentinelLogger;
@property(retain, nonatomic) id <FBCallPath> callPath; // @synthesize callPath=_callPath;
@property(retain, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
@property(readonly, nonatomic) unsigned int displayedImageFlag; // @synthesize displayedImageFlag=_displayedImageFlag;
@property(nonatomic) __weak id <FBWebImageViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) unsigned int transitionType; // @synthesize transitionType=_transitionType;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) id <FBWebImageSpecifier> imageSpecifier; // @synthesize imageSpecifier=_imageSpecifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_parseImageDownloadResponse:(id)arg1;
- (void)_hidePlaceholder;
- (void)_showPlaceholder;
- (id)_activeLayoutDelegate;
- (BOOL)_isInitialized;
- (void)_resetDownload;
- (void)_resetImage;
- (void)_updateImage:(id)arg1;
- (void)_resetForNewImageSpecifier:(id)arg1;
- (void)_updatePlaceholderTransition;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)cancel;
@property(readonly, nonatomic) id logicalIdentifier;
@property(readonly, nonatomic) UIImage *displayedImage;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initializeWithDownloaderFactory:(id)arg1 logger:(id)arg2;
- (id)initWithDownloaderFactory:(id)arg1 logger:(id)arg2;
- (void)setImageURL:(id)arg1;
- (id)clonePhotoViewInfoWithSourceInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

