//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGContext, IGFilter, NSMutableArray;

@interface IGRenderer : NSObject
{
    NSMutableArray *_outputs;
    IGContext *_context;
    IGFilter *_filter;
}

@property(retain, nonatomic) IGFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) IGContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)flush;
- (id)renderByConsumingSource:(id)arg1;
- (void)render:(id)arg1 to:(id)arg2;
- (void)renderTo:(id)arg1;
- (void)render:(id)arg1;
- (void)render;
- (void)removeOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;
- (void)dealloc;

@end

