//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBStoreProductViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class FBAppLinkProperties, FBItemOverlayInfo, FBNativeThirdPartyURLHandler, FBUserSession, NSArray, NSDictionary, NSString, NSURL, UIActionSheet, UIAlertView, UIViewController;

@interface FBDeeplinkableNativeThirdPartyURLController : NSObject <UIActionSheetDelegate, UIAlertViewDelegate, FBStoreProductViewControllerDelegate>
{
    UIViewController *_viewController;
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    NSString *_appID;
    NSString *_appStoreID;
    NSArray *_buttons;
    NSDictionary *_extra;
    FBNativeThirdPartyURLHandler *_nativeThirdPartyURLHandler;
    NSURL *_primaryNativeURL;
    FBUserSession *_session;
    NSString *_source;
    NSArray *_trackingCodes;
    NSArray *_trackingNodes;
    NSURL *_url;
    NSURL *_webURL;
    NSString *_backtrackID;
    CDUnknownBlockType _whenClosedBlock;
    CDUnknownBlockType _completionBlock;
    FBAppLinkProperties *_properties;
    FBItemOverlayInfo *_overlayInfo;
}

- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)logEventForAppLinkType:(id)arg1;
- (void)logEventConversion;
- (void)openStoreURL;
- (void)openWebURL;
- (void)openNativeURL;
- (void)openURL:(id)arg1 viewController:(id)arg2 trackingCodes:(id)arg3 trackingNodes:(id)arg4 properties:(id)arg5 overlayInfo:(id)arg6 extra:(id)arg7 completionBlock:(CDUnknownBlockType)arg8 whenClosedBlock:(CDUnknownBlockType)arg9;
- (void)openURL:(id)arg1 viewController:(id)arg2 trackingCodes:(id)arg3 trackingNodes:(id)arg4 extra:(id)arg5;
- (id)init;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

