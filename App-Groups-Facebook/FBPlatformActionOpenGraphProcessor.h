//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBPlatformActionProcessor.h"

#import "FBPlatformOpenGraphActionMediaManagerDelegate.h"

@class FBPlatformOpenGraphActionMediaManager, FBPlatformSharePublishingBundle, FBPublisherManager, FBUserSession, NSMutableDictionary;

@interface FBPlatformActionOpenGraphProcessor : FBPlatformActionProcessor <FBPlatformOpenGraphActionMediaManagerDelegate>
{
    FBPublisherManager *_publisherManager;
    FBUserSession *_userSession;
    NSMutableDictionary *_openGraphActionParameters;
    FBPlatformSharePublishingBundle *_publishingBundle;
    BOOL _allowsPlace;
    BOOL _allowsTags;
    FBPlatformOpenGraphActionMediaManager *_mediaManager;
}

@property(retain, nonatomic) FBPlatformOpenGraphActionMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
@property(nonatomic) BOOL allowsTags; // @synthesize allowsTags=_allowsTags;
@property(nonatomic) BOOL allowsPlace; // @synthesize allowsPlace=_allowsPlace;
- (void).cxx_destruct;
- (void)mediaManagerHasAllThumbnailsAvailable:(id)arg1;
- (id)sharedObject;
- (void)processOperationResult:(id)arg1;
- (void)process;
- (id)publishingBundle;
- (BOOL)allDataLoaded;
@property(readonly, nonatomic) NSMutableDictionary *openGraphActionParameters;
- (void)dealloc;
- (id)initWithAction:(id)arg1 publisherManager:(id)arg2;
- (id)initWithAction:(id)arg1;

@end

