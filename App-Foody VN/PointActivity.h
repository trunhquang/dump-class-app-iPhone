//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, Restaurant;

@interface PointActivity : NSObject
{
    Restaurant *_restaurant;
    NSString *_action;
    NSString *_point;
    unsigned int _status;
}

@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *point; // @synthesize point=_point;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) Restaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;

@end

