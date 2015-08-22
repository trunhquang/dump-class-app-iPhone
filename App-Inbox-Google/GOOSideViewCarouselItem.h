//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GOOSideViewAvatarBackgroundView, GOOSideViewAvatarView, UILabel;

@interface GOOSideViewCarouselItem : NSObject
{
    UILabel *_profileLabel;
    UILabel *_nameLabel;
    GOOSideViewAvatarView *_avatarView;
    GOOSideViewAvatarBackgroundView *_backgroundView;
    UILabel *_notificationLabel;
    BOOL _enabled;
    BOOL _hidden;
    id <GOOSideViewProfile> _profile;
    int _location;
    int _carouselProfileCount;
}

@property(nonatomic) int carouselProfileCount; // @synthesize carouselProfileCount=_carouselProfileCount;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) int location; // @synthesize location=_location;
@property(readonly, nonatomic) id <GOOSideViewProfile> profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) UILabel *notificationLabel;
@property(readonly, nonatomic) GOOSideViewAvatarBackgroundView *backgroundView;
@property(readonly, nonatomic) GOOSideViewAvatarView *avatarView;
@property(readonly, nonatomic) UILabel *nameLabel;
@property(readonly, nonatomic) UILabel *profileLabel;
- (void)removeViewsFromSuperviews;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)init;

@end

