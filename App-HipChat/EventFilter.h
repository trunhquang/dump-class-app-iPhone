//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EventFilter : NSObject
{
    CDUnknownBlockType _filterBlock;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
- (void).cxx_destruct;
- (void)noOp;
- (id)thirdArgumentForInvocation:(id)arg1;
- (BOOL)matchesEventInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end

