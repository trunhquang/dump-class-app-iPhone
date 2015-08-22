//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@interface AAKAnalyticsEvent : NSObject
{
    NSString *_atlPath;
    NSString *_name;
    NSString *_product;
    NSString *_sen;
    NSString *_server;
    NSNumber *_servertime;
    NSString *_session;
    NSString *_sourceIP;
    NSString *_subproduct;
    NSString *_user;
    NSString *_version;
    NSDictionary *_properties;
}

@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *subproduct; // @synthesize subproduct=_subproduct;
@property(retain, nonatomic) NSString *sourceIP; // @synthesize sourceIP=_sourceIP;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
@property(retain, nonatomic) NSNumber *servertime; // @synthesize servertime=_servertime;
@property(retain, nonatomic) NSString *server; // @synthesize server=_server;
@property(retain, nonatomic) NSString *sen; // @synthesize sen=_sen;
@property(retain, nonatomic) NSString *product; // @synthesize product=_product;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *atlPath; // @synthesize atlPath=_atlPath;
- (void).cxx_destruct;
- (id)payload;

@end

