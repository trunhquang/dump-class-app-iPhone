//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UINavigationItem, UIView;

@protocol GOOUINavigationUpdatableHeaderView <NSObject>
- (void)updateWithTitle:(NSString *)arg1 navigationItem:(UINavigationItem *)arg2;
- (void)setRightBarButtonItems:(NSArray *)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItems:(NSArray *)arg1 animated:(BOOL)arg2;
- (void)rightBarButtonItemAtIndex:(unsigned int)arg1 didUpdateObject:(id)arg2 changedKey:(NSString *)arg3;
- (void)leftBarButtonItemAtIndex:(unsigned int)arg1 didUpdateObject:(id)arg2 changedKey:(NSString *)arg3;
- (void)viewControllerDidUpdateTitleView:(UIView *)arg1;
- (void)viewControllerDidUpdateTitle:(NSString *)arg1 navigationItemTitle:(NSString *)arg2;
@end

