//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMThread, FBMThreadMarkAction, FBMThreadModelController, FBMThreadSummary, NSArray, NSError, NSSet, NSString;

@protocol FBMThreadModelControllerDelegate <NSObject>
- (void)threadModelController:(FBMThreadModelController *)arg1 didFailToMarkThread:(FBMThread *)arg2 action:(FBMThreadMarkAction *)arg3 error:(NSError *)arg4;
- (void)threadModelController:(FBMThreadModelController *)arg1 didMarkThread:(FBMThread *)arg2 action:(FBMThreadMarkAction *)arg3;
- (void)threadModelController:(FBMThreadModelController *)arg1 willMarkThread:(FBMThread *)arg2 action:(FBMThreadMarkAction *)arg3;
- (void)threadModelController:(FBMThreadModelController *)arg1 didFailLeaveGroupThreadWithFbId:(NSString *)arg2 error:(NSError *)arg3;
- (void)threadModelController:(FBMThreadModelController *)arg1 didLeaveGroupThread:(FBMThread *)arg2;
- (void)threadModelController:(FBMThreadModelController *)arg1 willLeaveGroupThread:(FBMThread *)arg2;
- (void)threadModelController:(FBMThreadModelController *)arg1 didFailMuteThread:(FBMThread *)arg2 error:(NSError *)arg3;
- (void)threadModelController:(FBMThreadModelController *)arg1 didMuteThread:(FBMThread *)arg2;
- (void)threadModelController:(FBMThreadModelController *)arg1 willMuteThread:(FBMThread *)arg2 withOption:(long long)arg3;
- (void)threadModelController:(FBMThreadModelController *)arg1 didDeleteMessagesFromThread:(FBMThread *)arg2;
- (void)threadModelController:(FBMThreadModelController *)arg1 didFailToDeleteThreadsInThreadList:(unsigned int)arg2 error:(NSError *)arg3;
- (void)threadModelController:(FBMThreadModelController *)arg1 didFinishDeleteThreadsInThreadList:(unsigned int)arg2;
- (void)threadModelController:(FBMThreadModelController *)arg1 willDeleteThreadsInThreadList:(unsigned int)arg2;
- (void)threadModelController:(FBMThreadModelController *)arg1 didFailToDeleteBatchThreadsWithThreadKeys:(NSArray *)arg2 error:(NSError *)arg3;
- (void)threadModelController:(FBMThreadModelController *)arg1 didFinishDeleteBatchWithSuccessfulKeys:(NSArray *)arg2 failedKeys:(NSArray *)arg3;
- (void)threadModelController:(FBMThreadModelController *)arg1 willDeleteBatchThreadsWithThreadKeys:(NSArray *)arg2;
- (void)threadModelController:(FBMThreadModelController *)arg1 didFailDeleteThreadSummary:(FBMThreadSummary *)arg2 error:(NSError *)arg3;
- (void)threadModelController:(FBMThreadModelController *)arg1 didFinishDeleteThreadSummary:(FBMThreadSummary *)arg2;
- (void)threadModelController:(FBMThreadModelController *)arg1 didFinishDeleteThreads:(NSSet *)arg2;
- (void)threadModelController:(FBMThreadModelController *)arg1 willDeleteThread:(FBMThread *)arg2;
- (void)threadModelControllerDidFailToFetchAdditionalInformation:(FBMThreadModelController *)arg1;
- (void)threadModelControllerDidFinishFetchAdditionalInformation:(FBMThreadModelController *)arg1;
- (void)threadModelControllerDidFailFetchMoreThreads:(FBMThreadModelController *)arg1 error:(NSError *)arg2;
- (void)threadModelControllerDidFinishFetchMoreThreads:(FBMThreadModelController *)arg1;
- (void)threadModelControllerWillFetchMoreThreads:(FBMThreadModelController *)arg1;
- (void)threadModelControllerDidFinishProcessingSyncProtocolDeltas:(FBMThreadModelController *)arg1;
- (void)threadModelControllerDidFailFetch:(FBMThreadModelController *)arg1 error:(NSError *)arg2;
- (void)threadModelControllerDidFinishDeltaRequest:(FBMThreadModelController *)arg1;
- (void)threadModelControllerDidFinishFetch:(FBMThreadModelController *)arg1;
- (void)threadModelController:(FBMThreadModelController *)arg1 willFetchWithOptions:(unsigned int)arg2;
@end

