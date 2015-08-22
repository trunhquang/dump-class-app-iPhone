//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMMessageVideoDownloadListener.h"
#import "FBSessionClassProvidable.h"
#import "MNVideoAttachmentGetter.h"

@class FBAnalytics, FBMMessageAttachments, FBMVideoStorageManager, MNMessageVideoAttachmentGetterListenerAnnouncer, MNMessageVideoDownloaderManager, NSMutableDictionary, NSMutableSet, NSString;

@interface MNMessageVideoAttachmentGetter : NSObject <FBMMessageVideoDownloadListener, FBSessionClassProvidable, MNVideoAttachmentGetter>
{
    FBMMessageAttachments *_messageAttachments;
    FBMVideoStorageManager *_videoStorageManager;
    MNMessageVideoDownloaderManager *_videoDownloadManager;
    NSMutableDictionary *_ongoingVideoDownloadForMessagesById;
    MNMessageVideoAttachmentGetterListenerAnnouncer *_announcer;
    FBAnalytics *_analytics;
    NSMutableSet *_messageIdsForUserDownloads;
    NSMutableDictionary *_messageIdToRetryStatus;
}

- (void).cxx_destruct;
- (void)_retryGetVideoForMessageId:(id)arg1 dueToError:(id)arg2;
- (BOOL)_shouldRetryVideoDownloadForMessageWithMessageId:(id)arg1;
- (void)_initializeRetriesIfNecessaryForMessage:(id)arg1;
- (void)_clearAllStatesForMessageId:(id)arg1;
- (void)_initiateVideoDownloadForMessage:(id)arg1 withVideo:(id)arg2 andURL:(id)arg3;
- (void)_getVideoForMessage:(id)arg1 videoAttachment:(id)arg2;
- (void)messageVideoDownloaderDidDownloadWithProgress:(float)arg1 forMessageId:(id)arg2;
- (void)messageVideoDownloaderDidFailForMessageId:(id)arg1 error:(id)arg2;
- (void)messageVideoDownloaderDidSucceedForMessageId:(id)arg1 usingURL:(id)arg2;
- (void)messageVideoDownloaderDidStartDownloadForMessageId:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)cancelAutoVideoRetrieval;
- (void)getVideoForMessage:(id)arg1 sourceIsUser:(BOOL)arg2;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
