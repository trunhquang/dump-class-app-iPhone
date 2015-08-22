//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSPDFGalleryConfigurationBuilder : NSObject
{
    BOOL _displayModeUserInteractionEnabled;
    BOOL _fullscreenZoomEnabled;
    BOOL _loopEnabled;
    BOOL _loopHUDEnabled;
    BOOL _usesExternalPlaybackWhileExternalScreenIsActive;
    BOOL _allowPlayingMultipleInstances;
    unsigned int _maximumConcurrentDownloads;
    unsigned int _maximumPrefetchDownloads;
    float _fullscreenDismissPanThreshold;
    float _maximumFullscreenZoomScale;
    float _minimumFullscreenZoomScale;
}

@property(nonatomic) BOOL allowPlayingMultipleInstances; // @synthesize allowPlayingMultipleInstances=_allowPlayingMultipleInstances;
@property(nonatomic) BOOL usesExternalPlaybackWhileExternalScreenIsActive; // @synthesize usesExternalPlaybackWhileExternalScreenIsActive=_usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) BOOL loopHUDEnabled; // @synthesize loopHUDEnabled=_loopHUDEnabled;
@property(nonatomic) BOOL loopEnabled; // @synthesize loopEnabled=_loopEnabled;
@property(nonatomic) float minimumFullscreenZoomScale; // @synthesize minimumFullscreenZoomScale=_minimumFullscreenZoomScale;
@property(nonatomic) float maximumFullscreenZoomScale; // @synthesize maximumFullscreenZoomScale=_maximumFullscreenZoomScale;
@property(nonatomic) BOOL fullscreenZoomEnabled; // @synthesize fullscreenZoomEnabled=_fullscreenZoomEnabled;
@property(nonatomic) float fullscreenDismissPanThreshold; // @synthesize fullscreenDismissPanThreshold=_fullscreenDismissPanThreshold;
@property(nonatomic) BOOL displayModeUserInteractionEnabled; // @synthesize displayModeUserInteractionEnabled=_displayModeUserInteractionEnabled;
@property(nonatomic) unsigned int maximumPrefetchDownloads; // @synthesize maximumPrefetchDownloads=_maximumPrefetchDownloads;
@property(nonatomic) unsigned int maximumConcurrentDownloads; // @synthesize maximumConcurrentDownloads=_maximumConcurrentDownloads;
- (id)build;

@end

