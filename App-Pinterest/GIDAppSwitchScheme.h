//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface GIDAppSwitchScheme : NSObject
{
    BOOL _isWebBrowserScheme;
    BOOL _isWebViewScheme;
    NSString *_scheme;
    NSString *_protocolVersion;
    NSNumber *_rate;
}

@property(readonly, nonatomic) BOOL isWebViewScheme; // @synthesize isWebViewScheme=_isWebViewScheme;
@property(readonly, nonatomic) BOOL isWebBrowserScheme; // @synthesize isWebBrowserScheme=_isWebBrowserScheme;
@property(readonly, nonatomic) NSNumber *rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isFirstPartyApp;
- (id)initWithDictionary:(id)arg1;

@end
