//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@protocol SwipeControllerDataSource <NSObject>
- (void)setSwipeObjectForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)indexPathForSwipedObject;

@optional
- (BOOL)canSwipeRightItemAtIndexPath:(NSIndexPath *)arg1;
- (BOOL)canSwipeLeftItemAtIndexPath:(NSIndexPath *)arg1;
- (BOOL)shouldSwipeCellAtIndexPath:(NSIndexPath *)arg1;
@end

