//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Operation.h"

@class HipChatContext;

@interface HipChatOperation : Operation
{
    HipChatContext *_context;
    id _configuration;
}

@property(readonly, nonatomic) id configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) __weak HipChatContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 configuration:(id)arg2;

@end

