//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewControllerPresenter.h"

#import "CBLContextualRadialMenuViewControllerDelegate.h"

@class NSString;

@interface CBLContextualMenuPresenter : CBLBaseViewControllerPresenter <CBLContextualRadialMenuViewControllerDelegate>
{
}

- (void)contextualRadialMenuViewControllerDidClose:(id)arg1;
- (void)presentContextualMenuWithConfiuration:(id)arg1 location:(struct CGPoint)arg2;
- (void)presentContextualMenuForUserEducationPin:(id)arg1 location:(struct CGPoint)arg2;
- (void)presentContextualMenuForBoard:(id)arg1 location:(struct CGPoint)arg2;
- (void)presentContextualMenuForPin:(id)arg1 location:(struct CGPoint)arg2;
- (void)presentHost:(id)arg1 withPath:(id)arg2 withParameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

