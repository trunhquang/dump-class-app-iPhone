//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary;

@interface FBPageAccountsContainer : NSObject <NSCopying>
{
    NSDictionary *_pageAccountsByFBID;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)accountInfoForFBID:(id)arg1;
- (id)initWithPageAccountsByFBID:(id)arg1;

@end

