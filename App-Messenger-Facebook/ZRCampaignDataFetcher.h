//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZRBaseDataFetcher.h"

#import "FBClassProvidable.h"
#import "FBRequestDelegate.h"

@class NSDictionary, NSString;

@interface ZRCampaignDataFetcher : ZRBaseDataFetcher <FBRequestDelegate, FBClassProvidable>
{
    id <ZRCampaignDataFetcherDelegate> _delegate;
    NSDictionary *_response;
    NSDictionary *_savedNetworkIdentifier;
}

+ (id)transformResult:(id)arg1 networkIdentifier:(id)arg2;
@property(retain, nonatomic) NSDictionary *savedNetworkIdentifier; // @synthesize savedNetworkIdentifier=_savedNetworkIdentifier;
@property(retain, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(nonatomic) id <ZRCampaignDataFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didLoad:(id)arg2;
- (void)doSend;
- (void)doCancel;
- (void)didFailWithError:(id)arg1;
- (void)didSucceed;
- (void)send;
- (void)sendNetworkIdentifier:(id)arg1;
- (void)_cancelRequest;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

