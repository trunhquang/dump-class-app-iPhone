//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCDMulticastDelegate;

@interface AccountSessionDelegate : NSObject
{
    GCDMulticastDelegate *_multicastDelegate;
}

@property(retain, nonatomic) GCDMulticastDelegate *multicastDelegate; // @synthesize multicastDelegate=_multicastDelegate;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;

@end

