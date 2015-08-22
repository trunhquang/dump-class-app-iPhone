//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MailToParser : NSObject
{
    NSArray *toAddresses_;
    NSArray *ccAddresses_;
    NSArray *bccAddresses_;
    NSString *subject_;
    NSString *body_;
}

@property(readonly, nonatomic) NSString *body; // @synthesize body=body_;
@property(readonly, nonatomic) NSString *subject; // @synthesize subject=subject_;
@property(readonly, nonatomic) NSArray *bccAddresses; // @synthesize bccAddresses=bccAddresses_;
@property(readonly, nonatomic) NSArray *ccAddresses; // @synthesize ccAddresses=ccAddresses_;
@property(readonly, nonatomic) NSArray *toAddresses; // @synthesize toAddresses=toAddresses_;
- (void).cxx_destruct;
- (id)initWithMailtoString:(id)arg1;

@end

