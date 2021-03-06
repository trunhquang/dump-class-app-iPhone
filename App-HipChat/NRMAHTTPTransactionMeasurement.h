//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NRMAMeasurement.h"

@class NSString;

@interface NRMAHTTPTransactionMeasurement : NRMAMeasurement
{
    NSString *_url;
    NSString *_httpMethod;
    NSString *_carrier;
    int _statusCode;
    int _errorCode;
    NSString *_crossProcessResponse;
    NSString *_wanType;
    long long _bytesSent;
    long long _bytesReceived;
    double _totalTime;
}

@property(retain, nonatomic) NSString *wanType; // @synthesize wanType=_wanType;
@property(retain, nonatomic) NSString *crossProcessResponse; // @synthesize crossProcessResponse=_crossProcessResponse;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 httpMethod:(id)arg2 carrier:(id)arg3 startTime:(double)arg4 totalTime:(double)arg5 statusCode:(int)arg6 errorCode:(int)arg7 bytesSent:(long long)arg8 bytesReceived:(long long)arg9 appData:(id)arg10 wanType:(id)arg11 threadInfo:(id)arg12;
- (id)initWithURL:(id)arg1 statusCode:(int)arg2 responseBody:(id)arg3 bytesSent:(long long)arg4 bytesReceived:(long long)arg5 totalTime:(double)arg6;

@end

