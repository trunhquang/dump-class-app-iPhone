//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNMessageHistoryQuery;

@protocol MNAggregatedAppMessageQuerying <NSObject>
- (void)cancelRequest:(long long)arg1;
- (long long)queryAggregatedAppMessagesWithQuery:(MNMessageHistoryQuery *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(NSError *))arg3 progressBlock:(void (^)(NSArray *, BOOL))arg4;
@end
