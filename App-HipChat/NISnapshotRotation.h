//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImageView;

@interface NISnapshotRotation : NSObject
{
    BOOL _isSupportedOS;
    id <NISnapshotRotationDelegate> _delegate;
    UIImageView *_snapshotViewBeforeRotation;
    UIImageView *_snapshotViewAfterRotation;
    struct CGRect _frameBeforeRotation;
    struct CGRect _frameAfterRotation;
}

@property(retain, nonatomic) UIImageView *snapshotViewAfterRotation; // @synthesize snapshotViewAfterRotation=_snapshotViewAfterRotation;
@property(retain, nonatomic) UIImageView *snapshotViewBeforeRotation; // @synthesize snapshotViewBeforeRotation=_snapshotViewBeforeRotation;
@property(nonatomic) BOOL isSupportedOS; // @synthesize isSupportedOS=_isSupportedOS;
@property(nonatomic) struct CGRect frameAfterRotation; // @synthesize frameAfterRotation=_frameAfterRotation;
@property(nonatomic) struct CGRect frameBeforeRotation; // @synthesize frameBeforeRotation=_frameBeforeRotation;
@property(nonatomic) __weak id <NISnapshotRotationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

