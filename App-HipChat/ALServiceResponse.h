//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ALServiceResponse : NSObject
{
    BOOL _status;
    NSString *_reqId;
    NSString *_errorMessage;
    int _errorCode;
    id _result;
}

@property(nonatomic) id result; // @synthesize result=_result;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) BOOL status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
- (void)dealloc;
- (id)initWithJSONData:(id)arg1;

@end

