//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "FBWebImageNetworkSpecifierDownloadNode.h"
#import "NSCopying.h"

@class NSString, NSURL;

@interface FBWebImageNetworkNormalSpecifierNode : FBValueObject <FBWebImageNetworkSpecifierDownloadNode, NSCopying>
{
    NSURL *_url;
    unsigned int _imageFlag;
}

@property(readonly, nonatomic) unsigned int imageFlag; // @synthesize imageFlag=_imageFlag;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithUrl:(id)arg1 imageFlag:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int desiredImageFlag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

