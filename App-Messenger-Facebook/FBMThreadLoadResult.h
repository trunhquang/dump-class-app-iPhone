//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FBMThread, NSArray;

@interface FBMThreadLoadResult : NSObject <NSCopying>
{
    NSArray *_messages;
    FBMThread *_rawThread;
}

@property(readonly, retain, nonatomic) FBMThread *rawThread; // @synthesize rawThread=_rawThread;
@property(readonly, copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRawThread:(id)arg1 messages:(id)arg2;

@end

