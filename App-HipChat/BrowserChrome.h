//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Browser.h"

@interface BrowserChrome : Browser
{
}

+ (BOOL)isInstalled;
- (id)callbackURLforURL:(id)arg1;
- (id)nonCallbackURLforURL:(id)arg1;
- (void)openURL:(id)arg1;
- (BOOL)canHandleCallbackURL;
- (BOOL)canOpenURL:(id)arg1;
- (id)settingsValue;
- (id)displayName;

@end

