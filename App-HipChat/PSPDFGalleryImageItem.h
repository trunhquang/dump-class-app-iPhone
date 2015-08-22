//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFGalleryItem.h"

#import "PSPDFRemoteContentObject.h"

@class NSError, NSString, UIImage;

@interface PSPDFGalleryImageItem : PSPDFGalleryItem <PSPDFRemoteContentObject>
{
    BOOL _loadingRemoteContent;
    float _remoteContentProgress;
    NSError *_remoteContentError;
    UIImage *_remoteContent;
}

@property(retain, nonatomic) id remoteContent; // @synthesize remoteContent=_remoteContent;
@property(retain, nonatomic) NSError *remoteContentError; // @synthesize remoteContentError=_remoteContentError;
@property(nonatomic) float remoteContentProgress; // @synthesize remoteContentProgress=_remoteContentProgress;
@property(nonatomic, getter=isLoadingRemoteContent) BOOL loadingRemoteContent; // @synthesize loadingRemoteContent=_loadingRemoteContent;
- (void).cxx_destruct;
- (void)updateContentState;
- (CDUnknownBlockType)remoteContentTransformerBlock;
- (BOOL)shouldRetryLoadingRemoteContentOnConnectionFailure;
- (BOOL)shouldCacheRemoteContent;
- (id)URLRequestForRemoteContent;
- (id)error;
- (float)progress;
- (id)content;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completionBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

