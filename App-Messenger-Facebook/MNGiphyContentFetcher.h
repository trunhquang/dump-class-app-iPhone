//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNetworkerRequestDelegate.h"
#import "MNMediaCollectionFetching.h"

@class FBUserSession, MNPhotoImageRequester, NSArray, NSDate, NSString;

@interface MNGiphyContentFetcher : NSObject <FBNetworkerRequestDelegate, MNMediaCollectionFetching>
{
    FBUserSession *_session;
    MNPhotoImageRequester *_imageRequester;
    NSArray *_trendingGIFs;
    NSString *_endpoint;
    NSString *_query;
    unsigned int _limit;
    NSDate *_lastFetchTime;
    id <MNMediaCollectionFetchingDelegate> _delegate;
}

@property(nonatomic) __weak id <MNMediaCollectionFetchingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, nonatomic) BOOL needsRefetch;
- (void)cancel;
@property(readonly, copy, nonatomic) NSArray *mediaCollection;
- (void)fetchCollection;
- (id)initWithSession:(id)arg1 imageRequester:(id)arg2 endPoint:(id)arg3 limit:(unsigned int)arg4 query:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
