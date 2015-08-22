//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ExpansionAnimationContext, GBTNavigationBar, NSIndexPath, UIColor, UITableView, UIViewController<ExpansionSupport>;

@protocol ExpandableTableViewController <NSObject>
@property(readonly, nonatomic) ExpansionAnimationContext *expansionContext;
@property(readonly, nonatomic) NSIndexPath *expandedCell;
@property(nonatomic, getter=isLockedForTransition) BOOL lockedForTransition;
@property(readonly, nonatomic) UIColor *innerBackgroundColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) GBTNavigationBar *topToolbar;
@property(readonly, nonatomic) UITableView *tableView;
- (BOOL)setupExpansionContextForExpandedVC:(UIViewController<ExpansionSupport> *)arg1;
- (void)collapseCurrentContext;
- (void)expandCurrentContext;
- (void)didCollapseCurrentContext;
- (void)willExpandCurrentContext;

@optional
- (void)didFinishCollapseCurrentContext;
@end

