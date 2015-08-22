//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFModel.h"

#import "PSPDFOverridable.h"

@class NSArray, NSDictionary, NSString, PSPDFGalleryConfiguration, UIColor;

@interface PSPDFConfiguration : PSPDFModel <PSPDFOverridable>
{
    BOOL _textSelectionEnabled;
    BOOL _imageSelectionEnabled;
    BOOL _shouldAutomaticallyAdjustScrollViewInsets;
    BOOL _doublePageModeOnFirstPage;
    BOOL _zoomingSmallDocumentsEnabled;
    BOOL _pageCurlDirectionLeftToRight;
    BOOL _fitToWidthEnabled;
    BOOL _fixedVerticalPositionForFitToWidthEnabledMode;
    BOOL _clipToPageBoundaries;
    BOOL _shadowEnabled;
    BOOL _alwaysBouncePages;
    BOOL _showsHorizontalScrollIndicator;
    BOOL _showsVerticalScrollIndicator;
    BOOL _renderAnimationEnabled;
    BOOL _smartZoomEnabled;
    BOOL _formElementZoomEnabled;
    BOOL _scrollOnTapPageEndEnabled;
    BOOL _scrollOnTapPageEndAnimationEnabled;
    BOOL _textSelectionShouldSnapToWord;
    BOOL _pageLabelEnabled;
    BOOL _documentLabelEnabled;
    BOOL _shouldHideHUDOnPageChange;
    BOOL _shouldShowHUDOnViewWillAppear;
    BOOL _allowToolbarTitleChange;
    BOOL _shouldHideNavigationBarWithHUD;
    BOOL _shouldHideStatusBar;
    BOOL _shouldHideStatusBarWithHUD;
    BOOL _showBackActionButton;
    BOOL _showForwardActionButton;
    BOOL _showBackForwardActionButtonLabels;
    BOOL _annotationGroupingEnabled;
    BOOL _createAnnotationMenuEnabled;
    BOOL _naturalDrawingAnnotationEnabled;
    BOOL _showAnnotationMenuAfterCreation;
    BOOL _shouldAskForAnnotationUsername;
    BOOL _annotationEntersEditModeAfterSecondTapEnabled;
    BOOL _shouldScrollToChangedPage;
    BOOL _autosaveEnabled;
    BOOL _allowBackgroundSaving;
    BOOL _signatureSavingEnabled;
    BOOL _customerSignatureFeatureEnabled;
    BOOL _naturalSignatureDrawingEnabled;
    BOOL _internalTapGesturesEnabled;
    BOOL _useParentNavigationBar;
    BOOL _shouldCacheThumbnails;
    unsigned int _pageMode;
    unsigned int _pageTransition;
    float _shadowOpacity;
    UIColor *_backgroundColor;
    unsigned int _scrollDirection;
    float _minimumZoomScale;
    float _maximumZoomScale;
    float _pagePadding;
    unsigned int _renderingMode;
    unsigned int _renderStatusViewPosition;
    float _scrollOnTapPageEndMargin;
    unsigned int _linkAction;
    unsigned int _allowedMenuActions;
    unsigned int _textSelectionMode;
    unsigned int _typesShowingColorPresets;
    unsigned int _HUDViewMode;
    unsigned int _HUDViewAnimation;
    unsigned int _thumbnailBarMode;
    unsigned int _scrobbleBarType;
    unsigned int _thumbnailGrouping;
    float _annotationAnimationDuration;
    NSArray *_createAnnotationMenuGroups;
    unsigned int _searchMode;
    id <PSPDFSignatureStore> _signatureStore;
    NSArray *_applicationActivities;
    NSArray *_excludedActivityTypes;
    unsigned int _printSharingOptions;
    unsigned int _openInSharingOptions;
    unsigned int _mailSharingOptions;
    unsigned int _messageSharingOptions;
    PSPDFGalleryConfiguration *_galleryConfiguration;
    NSDictionary *_overrideClassNames;
    struct CGSize _thumbnailSize;
    struct UIEdgeInsets _margin;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _thumbnailMargin;
}

+ (id)propertyKeys;
+ (id)configurationWithBuilder:(CDUnknownBlockType)arg1;
+ (id)defaultConfiguration;
@property(readonly, copy, nonatomic) NSDictionary *overrideClassNames; // @synthesize overrideClassNames=_overrideClassNames;
@property(readonly, nonatomic) PSPDFGalleryConfiguration *galleryConfiguration; // @synthesize galleryConfiguration=_galleryConfiguration;
@property(readonly, nonatomic) BOOL shouldCacheThumbnails; // @synthesize shouldCacheThumbnails=_shouldCacheThumbnails;
@property(readonly, nonatomic) BOOL useParentNavigationBar; // @synthesize useParentNavigationBar=_useParentNavigationBar;
@property(readonly, nonatomic) BOOL internalTapGesturesEnabled; // @synthesize internalTapGesturesEnabled=_internalTapGesturesEnabled;
@property(readonly, nonatomic) unsigned int messageSharingOptions; // @synthesize messageSharingOptions=_messageSharingOptions;
@property(readonly, nonatomic) unsigned int mailSharingOptions; // @synthesize mailSharingOptions=_mailSharingOptions;
@property(readonly, nonatomic) unsigned int openInSharingOptions; // @synthesize openInSharingOptions=_openInSharingOptions;
@property(readonly, nonatomic) unsigned int printSharingOptions; // @synthesize printSharingOptions=_printSharingOptions;
@property(readonly, copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(readonly, copy, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(readonly, nonatomic) id <PSPDFSignatureStore> signatureStore; // @synthesize signatureStore=_signatureStore;
@property(readonly, nonatomic) BOOL naturalSignatureDrawingEnabled; // @synthesize naturalSignatureDrawingEnabled=_naturalSignatureDrawingEnabled;
@property(readonly, nonatomic) BOOL customerSignatureFeatureEnabled; // @synthesize customerSignatureFeatureEnabled=_customerSignatureFeatureEnabled;
@property(readonly, nonatomic) BOOL signatureSavingEnabled; // @synthesize signatureSavingEnabled=_signatureSavingEnabled;
@property(readonly, nonatomic) unsigned int searchMode; // @synthesize searchMode=_searchMode;
@property(readonly, nonatomic) BOOL allowBackgroundSaving; // @synthesize allowBackgroundSaving=_allowBackgroundSaving;
@property(readonly, nonatomic, getter=isAutosaveEnabled) BOOL autosaveEnabled; // @synthesize autosaveEnabled=_autosaveEnabled;
@property(readonly, nonatomic) BOOL shouldScrollToChangedPage; // @synthesize shouldScrollToChangedPage=_shouldScrollToChangedPage;
@property(readonly, nonatomic) BOOL annotationEntersEditModeAfterSecondTapEnabled; // @synthesize annotationEntersEditModeAfterSecondTapEnabled=_annotationEntersEditModeAfterSecondTapEnabled;
@property(readonly, nonatomic) BOOL shouldAskForAnnotationUsername; // @synthesize shouldAskForAnnotationUsername=_shouldAskForAnnotationUsername;
@property(readonly, nonatomic) BOOL showAnnotationMenuAfterCreation; // @synthesize showAnnotationMenuAfterCreation=_showAnnotationMenuAfterCreation;
@property(readonly, nonatomic) BOOL naturalDrawingAnnotationEnabled; // @synthesize naturalDrawingAnnotationEnabled=_naturalDrawingAnnotationEnabled;
@property(readonly, copy, nonatomic) NSArray *createAnnotationMenuGroups; // @synthesize createAnnotationMenuGroups=_createAnnotationMenuGroups;
@property(readonly, nonatomic, getter=isCreateAnnotationMenuEnabled) BOOL createAnnotationMenuEnabled; // @synthesize createAnnotationMenuEnabled=_createAnnotationMenuEnabled;
@property(readonly, nonatomic) BOOL annotationGroupingEnabled; // @synthesize annotationGroupingEnabled=_annotationGroupingEnabled;
@property(readonly, nonatomic) float annotationAnimationDuration; // @synthesize annotationAnimationDuration=_annotationAnimationDuration;
@property(readonly, nonatomic) struct UIEdgeInsets thumbnailMargin; // @synthesize thumbnailMargin=_thumbnailMargin;
@property(readonly, nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(readonly, nonatomic) unsigned int thumbnailGrouping; // @synthesize thumbnailGrouping=_thumbnailGrouping;
@property(readonly, nonatomic) unsigned int scrobbleBarType; // @synthesize scrobbleBarType=_scrobbleBarType;
@property(readonly, nonatomic) unsigned int thumbnailBarMode; // @synthesize thumbnailBarMode=_thumbnailBarMode;
@property(readonly, nonatomic) BOOL showBackForwardActionButtonLabels; // @synthesize showBackForwardActionButtonLabels=_showBackForwardActionButtonLabels;
@property(readonly, nonatomic) BOOL showForwardActionButton; // @synthesize showForwardActionButton=_showForwardActionButton;
@property(readonly, nonatomic) BOOL showBackActionButton; // @synthesize showBackActionButton=_showBackActionButton;
@property(readonly, nonatomic) BOOL shouldHideStatusBarWithHUD; // @synthesize shouldHideStatusBarWithHUD=_shouldHideStatusBarWithHUD;
@property(readonly, nonatomic) BOOL shouldHideStatusBar; // @synthesize shouldHideStatusBar=_shouldHideStatusBar;
@property(readonly, nonatomic) BOOL shouldHideNavigationBarWithHUD; // @synthesize shouldHideNavigationBarWithHUD=_shouldHideNavigationBarWithHUD;
@property(readonly, nonatomic) BOOL allowToolbarTitleChange; // @synthesize allowToolbarTitleChange=_allowToolbarTitleChange;
@property(readonly, nonatomic) BOOL shouldShowHUDOnViewWillAppear; // @synthesize shouldShowHUDOnViewWillAppear=_shouldShowHUDOnViewWillAppear;
@property(readonly, nonatomic) BOOL shouldHideHUDOnPageChange; // @synthesize shouldHideHUDOnPageChange=_shouldHideHUDOnPageChange;
@property(readonly, nonatomic, getter=isDocumentLabelEnabled) BOOL documentLabelEnabled; // @synthesize documentLabelEnabled=_documentLabelEnabled;
@property(readonly, nonatomic, getter=isPageLabelEnabled) BOOL pageLabelEnabled; // @synthesize pageLabelEnabled=_pageLabelEnabled;
@property(readonly, nonatomic) unsigned int HUDViewAnimation; // @synthesize HUDViewAnimation=_HUDViewAnimation;
@property(readonly, nonatomic) unsigned int HUDViewMode; // @synthesize HUDViewMode=_HUDViewMode;
@property(readonly, nonatomic) unsigned int typesShowingColorPresets; // @synthesize typesShowingColorPresets=_typesShowingColorPresets;
@property(readonly, nonatomic) BOOL textSelectionShouldSnapToWord; // @synthesize textSelectionShouldSnapToWord=_textSelectionShouldSnapToWord;
@property(readonly, nonatomic) unsigned int textSelectionMode; // @synthesize textSelectionMode=_textSelectionMode;
@property(readonly, nonatomic) unsigned int allowedMenuActions; // @synthesize allowedMenuActions=_allowedMenuActions;
@property(readonly, nonatomic) unsigned int linkAction; // @synthesize linkAction=_linkAction;
@property(readonly, nonatomic) float scrollOnTapPageEndMargin; // @synthesize scrollOnTapPageEndMargin=_scrollOnTapPageEndMargin;
@property(readonly, nonatomic, getter=isScrollOnTapPageEndAnimationEnabled) BOOL scrollOnTapPageEndAnimationEnabled; // @synthesize scrollOnTapPageEndAnimationEnabled=_scrollOnTapPageEndAnimationEnabled;
@property(readonly, nonatomic, getter=isScrollOnTapPageEndEnabled) BOOL scrollOnTapPageEndEnabled; // @synthesize scrollOnTapPageEndEnabled=_scrollOnTapPageEndEnabled;
@property(readonly, nonatomic, getter=isFormElementZoomEnabled) BOOL formElementZoomEnabled; // @synthesize formElementZoomEnabled=_formElementZoomEnabled;
@property(readonly, nonatomic, getter=isSmartZoomEnabled) BOOL smartZoomEnabled; // @synthesize smartZoomEnabled=_smartZoomEnabled;
@property(readonly, nonatomic) unsigned int renderStatusViewPosition; // @synthesize renderStatusViewPosition=_renderStatusViewPosition;
@property(readonly, nonatomic, getter=isRenderAnimationEnabled) BOOL renderAnimationEnabled; // @synthesize renderAnimationEnabled=_renderAnimationEnabled;
@property(readonly, nonatomic) unsigned int renderingMode; // @synthesize renderingMode=_renderingMode;
@property(readonly, nonatomic) float pagePadding; // @synthesize pagePadding=_pagePadding;
@property(readonly, nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(readonly, nonatomic) float maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(readonly, nonatomic) float minimumZoomScale; // @synthesize minimumZoomScale=_minimumZoomScale;
@property(readonly, nonatomic) BOOL showsVerticalScrollIndicator; // @synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator;
@property(readonly, nonatomic) BOOL showsHorizontalScrollIndicator; // @synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator;
@property(readonly, nonatomic) BOOL alwaysBouncePages; // @synthesize alwaysBouncePages=_alwaysBouncePages;
@property(readonly, nonatomic) unsigned int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) float shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(readonly, nonatomic, getter=isShadowEnabled) BOOL shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
@property(readonly, nonatomic) BOOL clipToPageBoundaries; // @synthesize clipToPageBoundaries=_clipToPageBoundaries;
@property(readonly, nonatomic) BOOL fixedVerticalPositionForFitToWidthEnabledMode; // @synthesize fixedVerticalPositionForFitToWidthEnabledMode=_fixedVerticalPositionForFitToWidthEnabledMode;
@property(readonly, nonatomic, getter=isFitToWidthEnabled) BOOL fitToWidthEnabled; // @synthesize fitToWidthEnabled=_fitToWidthEnabled;
@property(readonly, nonatomic, getter=isPageCurlDirectionLeftToRight) BOOL pageCurlDirectionLeftToRight; // @synthesize pageCurlDirectionLeftToRight=_pageCurlDirectionLeftToRight;
@property(readonly, nonatomic, getter=isZoomingSmallDocumentsEnabled) BOOL zoomingSmallDocumentsEnabled; // @synthesize zoomingSmallDocumentsEnabled=_zoomingSmallDocumentsEnabled;
@property(readonly, nonatomic, getter=isDoublePageModeOnFirstPage) BOOL doublePageModeOnFirstPage; // @synthesize doublePageModeOnFirstPage=_doublePageModeOnFirstPage;
@property(readonly, nonatomic) unsigned int pageTransition; // @synthesize pageTransition=_pageTransition;
@property(readonly, nonatomic) unsigned int pageMode; // @synthesize pageMode=_pageMode;
@property(readonly, nonatomic) BOOL shouldAutomaticallyAdjustScrollViewInsets; // @synthesize shouldAutomaticallyAdjustScrollViewInsets=_shouldAutomaticallyAdjustScrollViewInsets;
- (void).cxx_destruct;
- (Class)classForClass:(Class)arg1;
@property(readonly, nonatomic, getter=isImageSelectionEnabled) BOOL imageSelectionEnabled; // @synthesize imageSelectionEnabled=_imageSelectionEnabled;
@property(readonly, nonatomic, getter=isTextSelectionEnabled) BOOL textSelectionEnabled; // @synthesize textSelectionEnabled=_textSelectionEnabled;
- (id)initWithBuilder:(id)arg1;
- (id)configurationUpdatedWithBuilder:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
