//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBAsyncTransactionContainer.h"

@interface UIView (FBAsyncTransactionContainer) <FBAsyncTransactionContainer>
- (void)fb_asyncTransactionContainerStateDidChange;
- (void)fb_cancelAsyncTransactions;
@property(readonly, nonatomic) unsigned int fb_asyncTransactionContainerState;
@property(nonatomic, getter=fb_isAsyncTransactionContainer, setter=fb_setAsyncTransactionContainer:) BOOL fb_asyncTransactionContainer;
@end

