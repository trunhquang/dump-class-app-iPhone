//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFTask;

@interface BFTaskCompletionSource : NSObject
{
    BFTask *_task;
}

+ (id)taskCompletionSource;
@property(retain, nonatomic) BFTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (BOOL)trySetCancelled;
- (BOOL)trySetException:(id)arg1;
- (BOOL)trySetError:(id)arg1;
- (BOOL)trySetResult:(id)arg1;
- (void)cancel;
- (void)setException:(id)arg1;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;
- (id)init;

@end

