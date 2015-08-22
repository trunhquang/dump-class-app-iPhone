//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerCompositionStateChangedListener.h"
#import "FBNetworkerRequestDelegate.h"

@class FBSuggestedTaggableActivitiesDownloadRequest, FBUserSession, MPMusicPlayerController, NSArray, NSString, NSTimer;

@interface FBActivitySuggestionManager : NSObject <FBNetworkerRequestDelegate, FBComposerCompositionStateChangedListener>
{
    MPMusicPlayerController *_musicPlayerController;
    FBUserSession *_session;
    FBSuggestedTaggableActivitiesDownloadRequest *_downloadRequest;
    id <FBComposerAudioRendererProtocol> _audioRenderer;
    id <FBComposerAudioRendererFactory> _composerAudioRendererFactory;
    NSTimer *_audioRequestIntervalTimer;
    NSTimer *_audioRequestTimeoutTimer;
    id <FBActivitySuggestionsListener> _listener;
    unsigned int _audioMatchRequestBytesSent;
    NSString *_currentCompositionID;
    BOOL _commercialPlaying;
    BOOL _isLoading;
    NSArray *_suggestions;
    NSString *_audioMatchSessionID;
}

+ (id)disabledTooltipMessage;
+ (id)workingTooltipMessage;
+ (id)externalPlaybackAlertMessage;
+ (id)externalPlaybackAlertTitle;
+ (id)microphoneDisabledAlertMessage;
+ (id)microphoneDisabledAlertTitle;
@property(copy, nonatomic) NSString *audioMatchSessionID; // @synthesize audioMatchSessionID=_audioMatchSessionID;
@property(readonly, nonatomic) BOOL commercialPlaying; // @synthesize commercialPlaying=_commercialPlaying;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void).cxx_destruct;
- (void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2;
- (id)buttonTooltipMessage:(id)arg1;
- (BOOL)showNuxForSuggestionType:(unsigned int)arg1;
- (BOOL)showOptInForSuggestionType:(unsigned int)arg1;
- (unsigned int)stateForSuggestionType:(unsigned int)arg1;
- (void)setOptInState:(unsigned int)arg1 forSuggestionType:(unsigned int)arg2;
- (id)stateKeyForSuggestionType:(unsigned int)arg1;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (id)suggestionsForTaggableActivity:(id)arg1;
- (unsigned int)countOfSuggestionsForTaggableActivity:(id)arg1;
- (unsigned int)countOfSuggestions;
- (float)getAudioLevel;
- (void)suggestionDidChange:(id)arg1;
- (void)fetchSuggestions;
- (BOOL)hasMicrophoneAccess;
- (BOOL)externalAudioRouteConnected;
- (BOOL)canShowAudioMatchSuggestions;
- (BOOL)canShowSuggestions;
- (BOOL)isSongPlayingOnDevice;
- (BOOL)canRecordAudio;
- (void)stopUpdating;
- (BOOL)startUpdating;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1 listener:(id)arg2 composerAudioRendererFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

