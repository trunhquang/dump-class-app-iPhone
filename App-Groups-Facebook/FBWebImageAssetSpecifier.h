//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBWebImageSpecifier.h"

@class NSString;

@interface FBWebImageAssetSpecifier : NSObject <FBWebImageSpecifier>
{
    BOOL _thumbnailOnly;
    id <FBAssetProtocol> _asset;
}

+ (id)type;
@property(readonly, nonatomic) BOOL thumbnailOnly; // @synthesize thumbnailOnly=_thumbnailOnly;
@property(readonly, nonatomic) id <FBAssetProtocol> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)logicalIdentifier;
- (id)initWithAsset:(id)arg1 thumbnailOnly:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

