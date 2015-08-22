//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FVSDWebImageOperation.h"

@class NSOperation, NSString;

@interface FVSDWebImageCombinedOperation : NSObject <FVSDWebImageOperation>
{
    BOOL _cancelled;
    CDUnknownBlockType _cancelBlock;
    NSOperation *_cacheOperation;
}

@property(retain, nonatomic) NSOperation *cacheOperation; // @synthesize cacheOperation=_cacheOperation;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
