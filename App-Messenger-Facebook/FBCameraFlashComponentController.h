//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKComponentController.h"

#import "FBCameraFlashListener.h"

@class NSString;

@interface FBCameraFlashComponentController : CKComponentController <FBCameraFlashListener>
{
}

- (void)_animateAlphaOfView:(id)arg1 toValue:(float)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performFlashAnimation;
- (void)didMount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

