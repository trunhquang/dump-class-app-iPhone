//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Bank, NSString, Photo;

@interface BankCard : NSObject
{
    BOOL isHasPolicy;
    NSString *name;
    NSString *discount;
    Photo *photo;
    NSString *bankcardId;
    Bank *bank;
}

@property(retain, nonatomic) Bank *bank; // @synthesize bank;
@property(copy, nonatomic) NSString *bankcardId; // @synthesize bankcardId;
@property(nonatomic) BOOL isHasPolicy; // @synthesize isHasPolicy;
@property(retain, nonatomic) Photo *photo; // @synthesize photo;
@property(copy, nonatomic) NSString *discount; // @synthesize discount;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;

@end

