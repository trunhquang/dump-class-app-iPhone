//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBApplicationProtocol.h"

@class NSArray, NSString, UIWindow;

@interface FBExtensionApplicationAdaptor : NSObject <FBApplicationProtocol>
{
    BOOL _networkActivityIndicatorVisible;
    int _statusBarOrientation;
    UIWindow *_keyWindow;
    NSArray *_windows;
    NSString *_preferredContentSizeCategory;
}

@property(readonly, copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(readonly, copy, nonatomic) NSArray *windows; // @synthesize windows=_windows;
@property(readonly, nonatomic) UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(nonatomic) int statusBarOrientation; // @synthesize statusBarOrientation=_statusBarOrientation;
@property(nonatomic, getter=isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible; // @synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible;
- (void).cxx_destruct;
- (BOOL)canOpenURL:(id)arg1;
- (BOOL)openURL:(id)arg1;
@property(readonly, nonatomic, getter=isProtectedDataAvailable) BOOL protectedDataAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

