//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOHUDMessage.h"

@class NSString, UIImage;

@interface SSOSignInToast : GOOHUDMessage
{
    UIImage *_avatar;
    NSString *_name;
    NSString *_email;
}

+ (id)toastWithAvatar:(id)arg1 name:(id)arg2 email:(id)arg3;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)voiceNotificationText;
- (Class)viewClass;
- (id)init;

@end

