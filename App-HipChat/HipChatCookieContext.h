//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CookieContext.h"

@class NSHTTPCookie, NSString;

@interface HipChatCookieContext : CookieContext
{
    NSString *_cookieDomain;
    NSHTTPCookie *_clientCookie;
    NSHTTPCookie *_displayModeCookie;
}

@property(retain, nonatomic) NSHTTPCookie *displayModeCookie; // @synthesize displayModeCookie=_displayModeCookie;
@property(retain, nonatomic) NSHTTPCookie *clientCookie; // @synthesize clientCookie=_clientCookie;
@property(readonly, nonatomic) NSString *cookieDomain; // @synthesize cookieDomain=_cookieDomain;
- (void).cxx_destruct;
- (id)clientValue;
- (id)initWithDomain:(id)arg1;

@end

