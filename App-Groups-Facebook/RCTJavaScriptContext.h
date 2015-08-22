//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTInvalidating.h"

@class NSString;

@interface RCTJavaScriptContext : NSObject <RCTInvalidating>
{
    RCTJavaScriptContext *_self;
    struct OpaqueJSContext *_ctx;
}

@property(readonly, nonatomic) struct OpaqueJSContext *ctx; // @synthesize ctx=_ctx;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

