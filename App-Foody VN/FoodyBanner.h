//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, Photo;

@interface FoodyBanner : NSObject
{
    NSString *_bannerId;
    Photo *_photo;
    NSString *_bannerLink;
}

@property(copy, nonatomic) NSString *bannerLink; // @synthesize bannerLink=_bannerLink;
@property(retain, nonatomic) Photo *photo; // @synthesize photo=_photo;
@property(copy, nonatomic) NSString *bannerId; // @synthesize bannerId=_bannerId;
- (void).cxx_destruct;

@end

