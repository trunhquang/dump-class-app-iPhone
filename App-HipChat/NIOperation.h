//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError;

@interface NIOperation : NSOperation
{
    id <NIOperationDelegate> _delegate;
    NSError *_lastError;
    int _tag;
    CDUnknownBlockType _didStartBlock;
    CDUnknownBlockType _didFinishBlock;
    CDUnknownBlockType _didFailWithErrorBlock;
    CDUnknownBlockType _willFinishBlock;
}

@property(copy) CDUnknownBlockType willFinishBlock; // @synthesize willFinishBlock=_willFinishBlock;
@property(copy) CDUnknownBlockType didFailWithErrorBlock; // @synthesize didFailWithErrorBlock=_didFailWithErrorBlock;
@property(copy) CDUnknownBlockType didFinishBlock; // @synthesize didFinishBlock=_didFinishBlock;
@property(copy) CDUnknownBlockType didStartBlock; // @synthesize didStartBlock=_didStartBlock;
@property int tag; // @synthesize tag=_tag;
@property(retain) NSError *lastError; // @synthesize lastError=_lastError;
@property __weak id <NIOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onMainThreadOperationDidFailWithError:(id)arg1;
- (void)onMainThreadOperationDidFinish;
- (void)onMainThreadOperationDidStart;
- (void)willFinish;
- (void)didFailWithError:(id)arg1;
- (void)didFinish;
- (void)didStart;
- (void)dealloc;

@end

