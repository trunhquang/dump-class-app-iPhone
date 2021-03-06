//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NestedLayoutDelegate.h"
#import "NestedScrollControllerObserver.h"
#import "NestedScrollControllerScrollDelegate.h"
#import "ParentedScrollable.h"

@class NSMutableArray, NSString, ScrollManager;

@interface NestedScrollController : NSObject <NestedLayoutDelegate, NestedScrollControllerObserver, NestedScrollControllerScrollDelegate, ParentedScrollable>
{
    struct CGSize cachedScrollSize_;
    NSMutableArray *nestedScrollControllerObservers_;
    int firstScrollableScrolledToTop_;
    int lastScrollableScrolledToBottom_;
    float lastXOffset_;
    id <NestedScrollControllerScrollDelegate> parentController_;
    id <NestedScrollControllerDataSource> _dataSource;
    id <NestedLayout> _layout;
    struct CGPoint scrollableContentOffset_;
}

@property(nonatomic) __weak id <NestedLayout> layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <NestedScrollControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct CGPoint scrollableContentOffset; // @synthesize scrollableContentOffset=scrollableContentOffset_;
@property(nonatomic) __weak id <NestedScrollControllerScrollDelegate> parentController; // @synthesize parentController=parentController_;
- (void).cxx_destruct;
- (void)nestedScrollControllerDidUpdateContentSize:(id)arg1;
- (void)nestedScrollControllerDidUpdateScrollOffset:(id)arg1;
- (void)nestedScrollController:(id)arg1 didProgrammaticScrollToOffset:(struct CGPoint)arg2;
- (void)nestedLayoutDidChangeContentSize:(id)arg1;
- (void)nestedLayout:(id)arg1 willChangeLayoutWithLayoutBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) ScrollManager *scrollManager;
- (void)programmaticScrollToOffset:(struct CGPoint)arg1 inCoordinateSpaceOfScrollable:(id)arg2;
@property(nonatomic) __weak id <ParentedScrollable> parent;
@property(readonly, nonatomic) struct CGRect realFrame;
@property(readonly, nonatomic) struct CGSize scrollSize;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (void)updateScrollingForOffset:(struct CGPoint)arg1;
- (void)scrollToBottom:(id)arg1 withXOffset:(float)arg2 withContainerFrame:(struct CGRect)arg3;
- (void)scrollToTop:(id)arg1 withXOffset:(float)arg2 withContainerFrame:(struct CGRect)arg3;
- (float)constrainedXOffsetForScrollable:(id)arg1 withXOffset:(float)arg2 withContainerFrame:(struct CGRect)arg3;
- (void)dirty;
- (void)addNestedScrollControllerObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

