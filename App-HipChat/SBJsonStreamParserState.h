//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBJsonStreamParserState : NSObject
{
}

+ (id)sharedInstance;
- (BOOL)isError;
- (id)name;
- (BOOL)needKey;
- (void)parser:(id)arg1 shouldTransitionTo:(int)arg2;
- (int)parserShouldReturn:(id)arg1;
- (BOOL)parser:(id)arg1 shouldAcceptToken:(int)arg2;

@end

