//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MZFormSheetControllerTransition.h"

@class NSString;

@interface MZTransition : NSObject <MZFormSheetControllerTransition>
{
}

- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)exitFormSheetControllerTransition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)entryFormSheetControllerTransition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)contentViewControllerForController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

