//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FBMMailboxPreparing <NSObject>
@property(readonly, nonatomic) unsigned int currentState;
- (BOOL)isFetching;
- (void)cancel;
- (void)configureAndFetchThreadListWithMarkMailboxSeen:(BOOL)arg1 fetchTriggerType:(unsigned int)arg2 delegate:(id <FBMMailboxPreparingDelegate>)arg3;
@end
