//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGFunctionCallImplementation.h"

@class TAGDataLayer;

@interface TAGDataLayerMacro : TAGFunctionCallImplementation
{
    TAGDataLayer *_dataLayer;
}

+ (id)defaultValueKey;
+ (id)nameKey;
+ (id)functionId;
@property(readonly) TAGDataLayer *dataLayer; // @synthesize dataLayer=_dataLayer;
- (void).cxx_destruct;
- (id)evaluate:(id)arg1;
- (BOOL)isCacheable;
- (id)initWithDataLayer:(id)arg1;

@end

