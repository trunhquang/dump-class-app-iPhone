//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface CookieContext : NSObject
{
    NSMutableArray *_contextCookies;
}

@property(readonly, nonatomic) NSMutableArray *contextCookies; // @synthesize contextCookies=_contextCookies;
- (void).cxx_destruct;
- (void)clearCookies;
@property(readonly, nonatomic) __weak NSArray *cookies;
- (id)init;

@end

