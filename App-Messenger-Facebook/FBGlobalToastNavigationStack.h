//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGlobalToastPresenter, NSMutableArray;

@interface FBGlobalToastNavigationStack : NSObject
{
    FBGlobalToastPresenter *_globalToastPresenter;
    NSMutableArray *_viewControllerStack;
}

- (void).cxx_destruct;
- (void)_setActiveToastPresentersAnimated:(BOOL)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)viewControllers;
- (void)popViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)initWithGlobalToastPresenter:(id)arg1;

@end

