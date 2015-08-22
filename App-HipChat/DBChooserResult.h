//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface DBChooserResult : NSObject
{
    NSURL *_link;
    NSString *_name;
    NSURL *_iconURL;
    NSDictionary *_thumbnails;
    long long _size;
}

@property(readonly, nonatomic) NSDictionary *thumbnails; // @synthesize thumbnails=_thumbnails;
@property(readonly, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *link; // @synthesize link=_link;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

