//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextCheckingResult.h"

@class NSDictionary, NSURL;

@interface FBTextCheckingResult : NSTextCheckingResult
{
    struct _NSRange _rangeOverride;
    unsigned long long _resultTypeOverride;
    NSDictionary *_components;
    NSURL *_URL;
}

@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy) NSDictionary *components; // @synthesize components=_components;
- (void).cxx_destruct;
@property(readonly) struct _NSRange range;
@property(readonly) unsigned long long resultType;
- (id)initWithType:(unsigned long long)arg1 range:(struct _NSRange)arg2 components:(id)arg3 URL:(id)arg4;

@end
