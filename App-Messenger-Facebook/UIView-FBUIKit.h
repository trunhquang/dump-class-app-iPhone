//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (FBUIKit)
+ (id)view;
- (id)fb_firstDescendentScrollView;
- (id)fb_firstDescendentScrollViewWithRecurseLimit:(unsigned int)arg1;
- (id)ancestorHierarchyDescription;
- (id)screenshotImageOfSubviewsPassingBlock:(CDUnknownBlockType)arg1;
- (void)fb_setOrigin:(struct CGPoint)arg1;
@property(nonatomic) struct CGPoint anchorPoint;
@property(nonatomic) struct CGPoint fb_position;
@end
