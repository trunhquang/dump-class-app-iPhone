//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AppStatus : NSObject
{
    BOOL _backgroundSyncPending;
    BOOL _backgroundTaskPending;
    int _state;
    int _notificationProcessingCount;
}

@property(nonatomic) BOOL backgroundTaskPending; // @synthesize backgroundTaskPending=_backgroundTaskPending;
@property(nonatomic) BOOL backgroundSyncPending; // @synthesize backgroundSyncPending=_backgroundSyncPending;
@property(nonatomic) int notificationProcessingCount; // @synthesize notificationProcessingCount=_notificationProcessingCount;
@property(nonatomic) int state; // @synthesize state=_state;

@end

