//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

@interface MNProfileImageViewModel : FBValueObject <NSCopying>
{
    BOOL _isMessengerUser;
    NSURL *_imageURL;
    NSString *_userId;
}

@property(readonly, nonatomic) BOOL isMessengerUser; // @synthesize isMessengerUser=_isMessengerUser;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)initWithImageURL:(id)arg1 userId:(id)arg2 isMessengerUser:(BOOL)arg3;

@end
