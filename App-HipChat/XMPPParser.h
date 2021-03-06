//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface XMPPParser : NSObject
{
    id delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    NSObject<OS_dispatch_queue> *parserQueue;
    BOOL hasReportedRoot;
    unsigned int depth;
    struct _xmlParserCtxt *parserCtxt;
}

- (void).cxx_destruct;
- (void)parseData:(id)arg1;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 parserQueue:(id)arg3;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;

@end

