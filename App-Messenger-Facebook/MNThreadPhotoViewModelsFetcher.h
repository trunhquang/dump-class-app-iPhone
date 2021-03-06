//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class FBMThreadKey, MNThreadMediaFetcherCursorStore, MNThreadPhotosFetchGraphQLRunner, NSString;

@interface MNThreadPhotoViewModelsFetcher : NSObject <FBClassProvidable>
{
    id <FBProvider> _photosFetchRunnerProvider;
    MNThreadPhotosFetchGraphQLRunner *_photosFetchRunner;
    MNThreadMediaFetcherCursorStore *_cursorStore;
    FBMThreadKey *_threadKey;
    BOOL _fetchedAllPhotos;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)_processFailureWithError:(id)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_processSuccessWithMessageImagesConnection:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)_fetchPhotoViewModelsFromCursor:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (BOOL)hasFetchedPhotosForThreadKey:(id)arg1;
- (void)fetchPhotoViewModelsFromLastCursorSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)fetchPhotoViewModelsFromBeginningWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)configureWithThreadKey:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithPhotoViewModelFetcherProvider:(id)arg1 cursorStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

