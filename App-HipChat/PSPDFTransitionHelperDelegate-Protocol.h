//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFOverridable.h"

@class NSArray, NSDictionary, PSPDFTransitionHelper;

@protocol PSPDFTransitionHelperDelegate <PSPDFOverridable>
@property(readonly, nonatomic) __weak id <PSPDFPresentationContext> presentationContext;
- (void)transitionHelper:(PSPDFTransitionHelper *)arg1 changedToPage:(unsigned int)arg2 doublePageMode:(BOOL)arg3 forwardTransition:(BOOL)arg4 options:(NSDictionary *)arg5 animated:(BOOL)arg6;
- (NSArray *)visibleViewControllers;
- (NSArray *)viewControllers;
@end

