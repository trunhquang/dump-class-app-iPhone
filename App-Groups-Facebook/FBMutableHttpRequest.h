//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBHttpRequest.h"

@class NSString, NSURLRequest;

@interface FBMutableHttpRequest : NSObject <FBHttpRequest>
{
    BOOL _allowRetry;
    BOOL _disableCustomProtocols;
    BOOL _silentLoading;
    NSURLRequest *_request;
    NSString *_logNamespace;
    NSString *_logName;
    int _priority;
    unsigned int _priorityOrder;
    unsigned int _hardTimeout;
}

@property(nonatomic) unsigned int hardTimeout; // @synthesize hardTimeout=_hardTimeout;
@property(nonatomic) BOOL silentLoading; // @synthesize silentLoading=_silentLoading;
@property(nonatomic) BOOL disableCustomProtocols; // @synthesize disableCustomProtocols=_disableCustomProtocols;
@property(nonatomic) BOOL allowRetry; // @synthesize allowRetry=_allowRetry;
@property(nonatomic) unsigned int priorityOrder; // @synthesize priorityOrder=_priorityOrder;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *logName; // @synthesize logName=_logName;
@property(copy, nonatomic) NSString *logNamespace; // @synthesize logNamespace=_logNamespace;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end

