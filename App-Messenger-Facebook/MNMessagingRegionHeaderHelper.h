//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNMessagingRegionProvider;

@interface MNMessagingRegionHeaderHelper : NSObject
{
    MNMessagingRegionProvider *_messagingRegionProvider;
}

- (void).cxx_destruct;
- (void)_executeBlockIfMessengerRegionIsAvailable:(CDUnknownBlockType)arg1;
- (id)messagingRegionHeaderAsDictionary;
- (void)setMessagingRegionHeaderOnGraphQLServiceConfig:(id)arg1;
- (void)setMessagingRegionHeaderOnNetworkRequest:(id)arg1;
- (id)initWithMessagingRegionProvider:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

@end
