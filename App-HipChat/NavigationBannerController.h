//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLayoutConstraint, NSString, UIView, UIWindow;

@interface NavigationBannerController : NSObject
{
    BOOL _active;
    BOOL _iPadMode;
    UIWindow *_bannerWindow;
    UIView *_contentView;
    NSString *_bannerMessage;
    NSLayoutConstraint *_labelHeightConstraint;
    NSLayoutConstraint *_labelOffsetConstraint;
}

@property(nonatomic, getter=isIpadMode) BOOL iPadMode; // @synthesize iPadMode=_iPadMode;
@property(retain, nonatomic) NSLayoutConstraint *labelOffsetConstraint; // @synthesize labelOffsetConstraint=_labelOffsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelHeightConstraint; // @synthesize labelHeightConstraint=_labelHeightConstraint;
@property(copy, nonatomic) NSString *bannerMessage; // @synthesize bannerMessage=_bannerMessage;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIWindow *bannerWindow; // @synthesize bannerWindow=_bannerWindow;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)statusBarOrientationChange:(id)arg1;
- (void)updateNavigationBarView;
- (id)searchRecursivelyForUILayoutContainerViewInView:(id)arg1;
- (void)updatePositionForOrientation:(int)arg1;
- (void)updatePosition;
- (void)updateContentView;
- (void)prepareWindow;
- (void)displayOutBanner;
- (void)displayInBanner;
- (void)hideBanner;
- (void)showBannerWithMessage:(id)arg1;
- (void)showBanner;
- (void)dealloc;
- (id)initWithMessage:(id)arg1;

@end

