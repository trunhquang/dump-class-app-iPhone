//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIScrollViewDelegate.h"

@class FBComponentScrollEventListenerAnnouncer, NSString;

@interface FBComponentScrollEventRouter : NSObject <UIScrollViewDelegate>
{
    FBComponentScrollEventListenerAnnouncer *_announcer;
    id <FBComponentDataSourceScrollEventHandler> _scrollEventHandler;
}

@property(nonatomic) __weak id <FBComponentDataSourceScrollEventHandler> scrollEventHandler; // @synthesize scrollEventHandler=_scrollEventHandler;
- (void).cxx_destruct;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)announcer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

