//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FBPreferenceChangeConfirmer : NSObject
{
    NSMutableArray *_alertViewDelegates;
    BOOL _shouldTeardown;
}

+ (id)sharedBackgroundConfirmer;
+ (id)sharedTeardownConfirmer;
@property(nonatomic) BOOL shouldTeardown; // @synthesize shouldTeardown=_shouldTeardown;
- (void).cxx_destruct;
- (void)confirmerWorkerDone:(id)arg1;
- (void)confirmWithBlock:(CDUnknownBlockType)arg1 cancellationBlock:(CDUnknownBlockType)arg2 alertViewCreator:(id)arg3;
- (id)initPrivate;
- (id)init;

@end

